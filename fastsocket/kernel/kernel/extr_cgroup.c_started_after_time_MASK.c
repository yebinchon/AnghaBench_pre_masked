
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct task_struct {int start_time; } ;


 int FUNC_0 (int *,struct timespec*) ;

__attribute__((used)) static inline int FUNC_1(struct task_struct *VAR_0,
         struct timespec *VAR_1,
         struct task_struct *VAR_2)
{
 int VAR_3 = FUNC_0(&VAR_0->start_time, VAR_1);
 if (VAR_3 > 0) {
  return 1;
 } else if (VAR_3 < 0) {
  return 0;
 } else {
  return VAR_0 > VAR_2;
 }
}
