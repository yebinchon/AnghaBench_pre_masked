
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utrace_engine {int dummy; } ;
struct task_struct {int dummy; } ;
struct ptrace_context {int resume; int signr; int options; scalar_t__ siginfo; } ;
typedef enum utrace_resume_action { ____Placeholder_utrace_resume_action } utrace_resume_action ;


 int FUNC_0 (struct utrace_engine*) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ptrace_context*) ;
 struct ptrace_context* FUNC_2 (struct utrace_engine*) ;
 struct utrace_engine* FUNC_3 (struct task_struct*) ;
 int FUNC_4 (struct task_struct*,struct utrace_engine*,int,int) ;
 int FUNC_5 (int,int ,struct task_struct*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct task_struct*,struct utrace_engine*) ;
 int FUNC_8 (struct utrace_engine*) ;

__attribute__((used)) static void FUNC_9(struct task_struct *VAR_4, int VAR_5)
{




 bool VAR_6 = (VAR_5 >= 0);
 struct utrace_engine *VAR_7 = FUNC_3(VAR_4);
 enum utrace_resume_action VAR_8 = VAR_2;
 struct ptrace_context *VAR_9;

 if (FUNC_6(FUNC_0(VAR_7)))
  return;

 VAR_9 = FUNC_2(VAR_7);

 if (!VAR_6) {
  int VAR_10;





  VAR_9->resume = VAR_2;
  VAR_10 = FUNC_7(VAR_4, VAR_7);

  if (!VAR_10 && VAR_9->siginfo) {
   VAR_8 = VAR_3;
  }

 } else if (VAR_5) {
  switch (FUNC_1(VAR_9)) {
  case 128:
   FUNC_5(VAR_5, VAR_1, VAR_4);
   break;

  case 129:
   VAR_9->signr = VAR_5;
   VAR_9->resume = VAR_2;
   VAR_8 = VAR_3;
   break;
  }
 }

 FUNC_4(VAR_4, VAR_7, VAR_8, VAR_6);

 if (VAR_8 != VAR_2)
  VAR_9->options = VAR_0;

 FUNC_8(VAR_7);
}
