
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ctrl_meta; } ;
typedef union al_udma_cdesc {TYPE_1__ al_desc_comp_tx; } volatile al_udma_cdesc ;
typedef scalar_t__ uint32_t ;
struct al_udma_q {int flags; scalar_t__ pkt_crnt_descs; scalar_t__ size; int next_cdesc_idx; int qid; TYPE_2__* udma; union al_udma_cdesc volatile* comp_head_ptr; } ;
struct TYPE_4__ {int name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (struct al_udma_q*,union al_udma_cdesc volatile*) ;
 int FUNC_2 (char*,int ,int ,union al_udma_cdesc volatile*,int ,scalar_t__) ;
 union al_udma_cdesc volatile* FUNC_3 (struct al_udma_q*,int ) ;
 scalar_t__ FUNC_4 (struct al_udma_q*,scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int) ;

uint32_t FUNC_8(
 struct al_udma_q *VAR_2,
 volatile union al_udma_cdesc **VAR_3)
{
 uint32_t VAR_4;
 volatile union al_udma_cdesc *VAR_5;
 uint32_t VAR_6;


 FUNC_0(!(VAR_2->flags & VAR_1));


 VAR_5 = VAR_2->comp_head_ptr;
 VAR_6 = FUNC_6(VAR_5->al_desc_comp_tx.ctrl_meta);


 if (FUNC_7(FUNC_4(VAR_2, VAR_6) == VAR_0))
  return 0;

 VAR_4 = VAR_2->pkt_crnt_descs + 1;
 while (!FUNC_5(VAR_6)) {
  VAR_5 = FUNC_1(VAR_2, VAR_5);
  VAR_6 = FUNC_6(VAR_5->al_desc_comp_tx.ctrl_meta);
  if (FUNC_7(FUNC_4(VAR_2, VAR_6)
        == VAR_0)) {




   VAR_2->pkt_crnt_descs = VAR_4;
   VAR_2->comp_head_ptr = VAR_5;
   return 0;
  }
  VAR_4++;

  FUNC_0(VAR_4 <= VAR_2->size);
 }

 *VAR_3 = FUNC_3(VAR_2, VAR_2->next_cdesc_idx);
 VAR_2->pkt_crnt_descs = 0;
 VAR_2->comp_head_ptr = FUNC_1(VAR_2, VAR_5);

 FUNC_2("udma [%s %d]: packet completed. first desc %p (ixd 0x%x)"
   " descs %d\n", VAR_2->udma->name, VAR_2->qid, *VAR_3,
   VAR_2->next_cdesc_idx, VAR_4);

 return VAR_4;
}
