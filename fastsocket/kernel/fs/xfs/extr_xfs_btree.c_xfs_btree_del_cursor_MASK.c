
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ allocated; } ;
struct TYPE_7__ {TYPE_1__ b; } ;
struct TYPE_8__ {int bc_nlevels; scalar_t__ bc_btnum; TYPE_2__ bc_private; scalar_t__* bc_bufs; int bc_tp; } ;
typedef TYPE_3__ xfs_btree_cur_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_2 (int ,scalar_t__) ;

void
FUNC_3(
 xfs_btree_cur_t *VAR_2,
 int VAR_3)
{
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < VAR_2->bc_nlevels; VAR_4++) {
  if (VAR_2->bc_bufs[VAR_4])
   FUNC_2(VAR_2->bc_tp, VAR_2->bc_bufs[VAR_4]);
  else if (!VAR_3)
   break;
 }




 FUNC_0(VAR_2->bc_btnum != VAR_0 ||
        VAR_2->bc_private.b.allocated == 0);



 FUNC_1(VAR_1, VAR_2);
}
