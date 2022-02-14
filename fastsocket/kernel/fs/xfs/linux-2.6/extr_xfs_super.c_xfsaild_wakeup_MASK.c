
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_lsn_t ;
struct xfs_ail {int xa_task; int xa_target; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct xfs_ail*,int *,int *) ;

void
FUNC_3(
 struct xfs_ail *VAR_0,
 xfs_lsn_t VAR_1)
{

 if (FUNC_0(VAR_1, VAR_0->xa_target) > 0) {
  FUNC_2(VAR_0, &VAR_0->xa_target, &VAR_1);
  FUNC_1(VAR_0->xa_task);
 }
}
