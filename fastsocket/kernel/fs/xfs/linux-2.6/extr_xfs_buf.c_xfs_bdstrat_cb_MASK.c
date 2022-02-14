
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_buf {int b_iodone; TYPE_1__* b_target; } ;
struct TYPE_2__ {int bt_mount; } ;


 int FUNC_0 (struct xfs_buf*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct xfs_buf*,int ) ;
 int FUNC_3 (struct xfs_buf*) ;
 int FUNC_4 (struct xfs_buf*) ;
 int FUNC_5 (struct xfs_buf*) ;

int
FUNC_6(
 struct xfs_buf *VAR_1)
{
 if (FUNC_1(VAR_1->b_target->bt_mount)) {
  FUNC_2(VAR_1, VAR_0);





  if (!VAR_1->b_iodone && !FUNC_0(VAR_1))
   return FUNC_4(VAR_1);
  else
   return FUNC_3(VAR_1);
 }

 FUNC_5(VAR_1);
 return 0;
}
