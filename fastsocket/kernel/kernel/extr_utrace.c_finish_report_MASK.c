
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utrace_report {int action; } ;
struct utrace {int resume; int lock; } ;
struct task_struct {int dummy; } ;
typedef enum utrace_resume_action { ____Placeholder_utrace_resume_action } utrace_resume_action ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct task_struct*,struct utrace*,struct utrace_report*) ;
 int FUNC_1 (struct task_struct*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct task_struct *VAR_6, struct utrace *VAR_7,
     struct utrace_report *VAR_8, bool VAR_9)
{
 enum utrace_resume_action VAR_10 = VAR_8->action;

 if (VAR_10 == VAR_5)
  VAR_10 = VAR_9 ? VAR_3 : VAR_4;

 if (VAR_10 < VAR_7->resume) {
  FUNC_2(&VAR_7->lock);
  VAR_7->resume = VAR_10;
  if (VAR_10 == VAR_2)
   FUNC_1(VAR_6, VAR_1);
  else
   FUNC_1(VAR_6, VAR_0);
  FUNC_3(&VAR_7->lock);
 }

 FUNC_0(VAR_6, VAR_7, VAR_8);
}
