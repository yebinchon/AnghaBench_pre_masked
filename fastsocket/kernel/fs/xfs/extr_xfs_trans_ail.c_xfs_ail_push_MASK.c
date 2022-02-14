
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_lsn_t ;
typedef int xfs_log_item_t ;
struct xfs_ail {int xa_target; int xa_mount; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int * FUNC_2 (struct xfs_ail*) ;
 int FUNC_3 (struct xfs_ail*,int ) ;

void
FUNC_4(
 struct xfs_ail *VAR_0,
 xfs_lsn_t VAR_1)
{
 xfs_log_item_t *VAR_2;

 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2 && !FUNC_0(VAR_0->xa_mount)) {
  if (FUNC_1(VAR_1, VAR_0->xa_target) > 0)
   FUNC_3(VAR_0, VAR_1);
 }
}
