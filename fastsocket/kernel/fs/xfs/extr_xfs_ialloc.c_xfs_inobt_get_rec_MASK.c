
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ir_free; void* ir_freecount; void* ir_startino; } ;
typedef TYPE_2__ xfs_inobt_rec_incore_t ;
struct TYPE_4__ {int ir_free; int ir_freecount; int ir_startino; } ;
union xfs_btree_rec {TYPE_1__ inobt; } ;
struct xfs_btree_cur {int dummy; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct xfs_btree_cur*,union xfs_btree_rec**,int*) ;

int
FUNC_3(
 struct xfs_btree_cur *VAR_0,
 xfs_inobt_rec_incore_t *VAR_1,
 int *VAR_2)
{
 union xfs_btree_rec *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_0, &VAR_3, VAR_2);
 if (!VAR_4 && *VAR_2 == 1) {
  VAR_1->ir_startino = FUNC_0(VAR_3->inobt.ir_startino);
  VAR_1->ir_freecount = FUNC_0(VAR_3->inobt.ir_freecount);
  VAR_1->ir_free = FUNC_1(VAR_3->inobt.ir_free);
 }
 return VAR_4;
}
