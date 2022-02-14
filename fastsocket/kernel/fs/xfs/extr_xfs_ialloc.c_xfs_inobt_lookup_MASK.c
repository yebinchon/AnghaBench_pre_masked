
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int xfs_lookup_t ;
typedef int xfs_agino_t ;
struct TYPE_3__ {scalar_t__ ir_free; scalar_t__ ir_freecount; int ir_startino; } ;
struct TYPE_4__ {TYPE_1__ i; } ;
struct xfs_btree_cur {TYPE_2__ bc_rec; } ;


 int FUNC_0 (struct xfs_btree_cur*,int ,int*) ;

int
FUNC_1(
 struct xfs_btree_cur *VAR_0,
 xfs_agino_t VAR_1,
 xfs_lookup_t VAR_2,
 int *VAR_3)
{
 VAR_0->bc_rec.i.ir_startino = VAR_1;
 VAR_0->bc_rec.i.ir_freecount = 0;
 VAR_0->bc_rec.i.ir_free = 0;
 return FUNC_0(VAR_0, VAR_2, VAR_3);
}
