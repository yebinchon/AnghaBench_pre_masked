
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_16__ {int ctrl; } ;
struct TYPE_15__ {int lock; int desc_tag; int desc_map; scalar_t__ desc; int cntxt_id; } ;
struct sge_qset {TYPE_4__ lro; TYPE_3__ rspq; TYPE_1__* txq; int lock; TYPE_11__* fl; } ;
struct TYPE_14__ {int reg_lock; } ;
struct TYPE_17__ {TYPE_2__ sge; } ;
typedef TYPE_5__ adapter_t ;
struct TYPE_13__ {int * sdesc; int entry_tag; int desc_tag; int desc_map; scalar_t__ desc; int cntxt_id; int * txq_ifq; int * txq_mr; } ;
struct TYPE_12__ {int * sdesc; int entry_tag; int desc_tag; int desc_map; scalar_t__ desc; int cntxt_id; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,scalar_t__,int ) ;
 int FUNC_5 (struct sge_qset*,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (TYPE_5__*,TYPE_11__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct sge_qset*,int ,size_t) ;
 int FUNC_13 (TYPE_5__*,int ) ;
 int FUNC_14 (TYPE_5__*,int ) ;
 int FUNC_15 (TYPE_5__*,int ,int ) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static void
FUNC_17(adapter_t *VAR_4, struct sge_qset *VAR_5)
{
 int VAR_6;

 FUNC_12(VAR_5, 0, VAR_3);
 if (VAR_5->txq[VAR_3].txq_mr != ((void*)0))
  FUNC_1(VAR_5->txq[VAR_3].txq_mr, VAR_0);
 if (VAR_5->txq[VAR_3].txq_ifq != ((void*)0)) {
  FUNC_8(VAR_5->txq[VAR_3].txq_ifq);
  FUNC_6(VAR_5->txq[VAR_3].txq_ifq, VAR_0);
 }

 for (VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6) {
  if (VAR_5->fl[VAR_6].desc) {
   FUNC_9(&VAR_4->sge.reg_lock);
   FUNC_13(VAR_4, VAR_5->fl[VAR_6].cntxt_id);
   FUNC_11(&VAR_4->sge.reg_lock);
   FUNC_3(VAR_5->fl[VAR_6].desc_tag, VAR_5->fl[VAR_6].desc_map);
   FUNC_4(VAR_5->fl[VAR_6].desc_tag, VAR_5->fl[VAR_6].desc,
     VAR_5->fl[VAR_6].desc_map);
   FUNC_2(VAR_5->fl[VAR_6].desc_tag);
   FUNC_2(VAR_5->fl[VAR_6].entry_tag);
  }
  if (VAR_5->fl[VAR_6].sdesc) {
   FUNC_7(VAR_4, &VAR_5->fl[VAR_6]);
   FUNC_6(VAR_5->fl[VAR_6].sdesc, VAR_0);
  }
 }

 FUNC_10(&VAR_5->lock);
 FUNC_0(&VAR_5->lock);
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  if (VAR_5->txq[VAR_6].desc) {
   FUNC_9(&VAR_4->sge.reg_lock);
   FUNC_15(VAR_4, VAR_5->txq[VAR_6].cntxt_id, 0);
   FUNC_11(&VAR_4->sge.reg_lock);
   FUNC_3(VAR_5->txq[VAR_6].desc_tag,
     VAR_5->txq[VAR_6].desc_map);
   FUNC_4(VAR_5->txq[VAR_6].desc_tag, VAR_5->txq[VAR_6].desc,
     VAR_5->txq[VAR_6].desc_map);
   FUNC_2(VAR_5->txq[VAR_6].desc_tag);
   FUNC_2(VAR_5->txq[VAR_6].entry_tag);
  }
  if (VAR_5->txq[VAR_6].sdesc) {
   FUNC_6(VAR_5->txq[VAR_6].sdesc, VAR_0);
  }
 }

 if (VAR_5->rspq.desc) {
  FUNC_9(&VAR_4->sge.reg_lock);
  FUNC_14(VAR_4, VAR_5->rspq.cntxt_id);
  FUNC_11(&VAR_4->sge.reg_lock);

  FUNC_3(VAR_5->rspq.desc_tag, VAR_5->rspq.desc_map);
  FUNC_4(VAR_5->rspq.desc_tag, VAR_5->rspq.desc,
           VAR_5->rspq.desc_map);
  FUNC_2(VAR_5->rspq.desc_tag);
  FUNC_0(&VAR_5->rspq.lock);
 }





 FUNC_5(VAR_5, sizeof(*VAR_5));
}
