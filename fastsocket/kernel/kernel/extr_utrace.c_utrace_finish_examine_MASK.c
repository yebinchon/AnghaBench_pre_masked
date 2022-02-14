
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utrace_examiner {scalar_t__ state; unsigned long ncsw; } ;
struct utrace_engine {int dummy; } ;
struct task_struct {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct task_struct* VAR_2 ;
 int FUNC_0 (struct utrace_engine*) ;
 int FUNC_1 (struct task_struct*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct task_struct*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int) ;
 unsigned long FUNC_7 (struct task_struct*,scalar_t__) ;

int FUNC_8(struct task_struct *VAR_3,
     struct utrace_engine *VAR_4,
     struct utrace_examiner *VAR_5)
{
 int VAR_6 = 0;

 if (FUNC_6(VAR_3 == VAR_2))
  return 0;

 FUNC_4();
 if (FUNC_6(!FUNC_0(VAR_4)))
  VAR_6 = -VAR_1;
 else if (FUNC_6(VAR_3->state != VAR_5->state))
  VAR_6 = -VAR_0;
 else
  FUNC_1(VAR_3);
 FUNC_5();

 if (FUNC_2(!VAR_6)) {
  unsigned long VAR_7 = FUNC_7(VAR_3, VAR_5->state);
  if (FUNC_6(VAR_7 != VAR_5->ncsw))
   VAR_6 = -VAR_0;
  FUNC_3(VAR_3);
 }

 return VAR_6;
}
