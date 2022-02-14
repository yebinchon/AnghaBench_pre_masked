
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlog_ticket {int t_flags; int t_unit_res; int t_cnt; } ;
struct xlog_grant_head {int dummy; } ;
struct log {struct xlog_grant_head l_write_head; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static inline int
FUNC_1(
 struct log *VAR_1,
 struct xlog_grant_head *VAR_2,
 struct xlog_ticket *VAR_3)
{
 if (VAR_2 == &VAR_1->l_write_head) {
  FUNC_0(VAR_3->t_flags & VAR_0);
  return VAR_3->t_unit_res;
 } else {
  if (VAR_3->t_flags & VAR_0)
   return VAR_3->t_unit_res * VAR_3->t_cnt;
  else
   return VAR_3->t_unit_res;
 }
}
