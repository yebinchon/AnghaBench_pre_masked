
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utrace_report {int detaches; int action; int resume_action; } ;
struct utrace_engine {int * ops; } ;
struct utrace {int lock; } ;
struct task_struct {int dummy; } ;
typedef enum utrace_resume_action { ____Placeholder_utrace_resume_action } utrace_resume_action ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct utrace_engine*) ;
 scalar_t__ FUNC_1 (struct utrace_engine*) ;
 int FUNC_2 (struct task_struct*,struct utrace_engine*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_6(struct task_struct *VAR_3,
       struct utrace *VAR_4,
       struct utrace_report *VAR_5,
       struct utrace_engine *VAR_6,
       enum utrace_resume_action VAR_7)
{
 if (VAR_7 == VAR_0) {
  FUNC_3(&VAR_4->lock);
  VAR_6->ops = &VAR_2;
  FUNC_4(&VAR_4->lock);
 }




 if (VAR_6->ops == &VAR_2) {
  VAR_5->detaches = 1;
  return;
 }

 if (VAR_7 < VAR_5->action)
  VAR_5->action = VAR_7;

 if (VAR_7 != VAR_1) {
  if (VAR_7 < VAR_5->resume_action)
   VAR_5->resume_action = VAR_7;

  if (FUNC_1(VAR_6)) {
   FUNC_3(&VAR_4->lock);
   FUNC_0(VAR_6);
   FUNC_4(&VAR_4->lock);
  }

  return;
 }

 if (!FUNC_1(VAR_6)) {
  FUNC_3(&VAR_4->lock);




  if (FUNC_5(VAR_6->ops == &VAR_2))
   VAR_5->detaches = 1;
  else
   FUNC_2(VAR_3, VAR_6);
  FUNC_4(&VAR_4->lock);
 }
}
