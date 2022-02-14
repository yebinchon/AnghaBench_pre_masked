
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_log_vec {struct xfs_log_vec* lv_buf; struct xfs_log_vec* lv_next; } ;


 int FUNC_0 (struct xfs_log_vec*) ;

__attribute__((used)) static void
FUNC_1(
 struct xfs_log_vec *VAR_0)
{
 struct xfs_log_vec *VAR_1;

 for (VAR_1 = VAR_0; VAR_1; ) {
  struct xfs_log_vec *VAR_2 = VAR_1->lv_next;
  FUNC_0(VAR_1->lv_buf);
  FUNC_0(VAR_1);
  VAR_1 = VAR_2;
 }
}
