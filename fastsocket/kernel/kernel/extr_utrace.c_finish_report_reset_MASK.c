
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utrace_report {int action; scalar_t__ detaches; scalar_t__ spurious; } ;
struct utrace {int lock; } ;
struct task_struct {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct task_struct*,struct utrace*) ;

__attribute__((used)) static inline void FUNC_3(struct task_struct *VAR_1,
           struct utrace *VAR_2,
           struct utrace_report *VAR_3)
{
 if (FUNC_1(VAR_3->spurious || VAR_3->detaches)) {
  FUNC_0(&VAR_2->lock);
  if (FUNC_2(VAR_1, VAR_2))
   VAR_3->action = VAR_0;
 }
}
