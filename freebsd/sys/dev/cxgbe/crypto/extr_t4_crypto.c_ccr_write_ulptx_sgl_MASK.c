
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ulptx_sgl {TYPE_1__* sge; void* addr0; void* len0; void* cmd_nsge; } ;
struct sglist_seg {int ss_len; int ss_paddr; } ;
struct sglist {int sg_nseg; struct sglist_seg* sg_segs; } ;
struct ccr_softc {struct sglist* sg_ulptx; } ;
struct TYPE_2__ {void** addr; void** len; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 void* FUNC_3 (int) ;
 void* FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct ccr_softc *VAR_1, void *VAR_2, int VAR_3)
{
 struct ulptx_sgl *VAR_4;
 struct sglist *VAR_5;
 struct sglist_seg *VAR_6;
 int VAR_7;

 VAR_5 = VAR_1->sg_ulptx;
 FUNC_0(VAR_3 == VAR_5->sg_nseg);
 VAR_6 = &VAR_5->sg_segs[0];
 VAR_4 = VAR_2;
 VAR_4->cmd_nsge = FUNC_3(FUNC_1(VAR_0) |
     FUNC_2(VAR_3));
 VAR_4->len0 = FUNC_3(VAR_6->ss_len);
 VAR_4->addr0 = FUNC_4(VAR_6->ss_paddr);
 VAR_6++;
 for (VAR_7 = 0; VAR_7 < VAR_5->sg_nseg - 1; VAR_7++) {
  VAR_4->sge[VAR_7 / 2].len[VAR_7 & 1] = FUNC_3(VAR_6->ss_len);
  VAR_4->sge[VAR_7 / 2].addr[VAR_7 & 1] = FUNC_4(VAR_6->ss_paddr);
  VAR_6++;
 }

}
