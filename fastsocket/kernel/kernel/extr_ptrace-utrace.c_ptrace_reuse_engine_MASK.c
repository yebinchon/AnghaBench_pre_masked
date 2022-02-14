
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utrace_engine {int * ops; } ;
struct task_struct {int exit_state; } ;
struct ptrace_context {scalar_t__ options; int resume; scalar_t__ eventmsg; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct utrace_engine* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct utrace_engine*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 struct ptrace_context* FUNC_4 (struct utrace_engine*) ;
 struct utrace_engine* FUNC_5 (struct task_struct*) ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct task_struct*,struct utrace_engine*) ;
 int FUNC_8 (struct utrace_engine*) ;
 int FUNC_9 (struct task_struct*,struct utrace_engine*,int ) ;

__attribute__((used)) static struct utrace_engine *
FUNC_10(struct task_struct *VAR_6)
{
 struct utrace_engine *VAR_7;
 struct ptrace_context *VAR_8;
 int VAR_9 = -VAR_1;

 VAR_7 = FUNC_5(VAR_6);
 if (FUNC_1(VAR_7))
  return VAR_7;

 VAR_8 = FUNC_4(VAR_7);
 if (FUNC_6(VAR_8->options == VAR_2)) {





  VAR_8->options = 0;
  VAR_8->eventmsg = 0;


  VAR_9 = FUNC_9(VAR_6, VAR_7, FUNC_2(VAR_3));
  if (!VAR_9 || VAR_9 == -VAR_0) {
   VAR_8->resume = VAR_4;

   VAR_9 = FUNC_7(VAR_6, VAR_7);
  }

  if (!VAR_9) {
   FUNC_3(VAR_7->ops != &VAR_5 &&
    !VAR_6->exit_state);
   return VAR_7;
  }

  FUNC_3(VAR_7->ops == &VAR_5);
 }

 FUNC_8(VAR_7);
 return FUNC_0(VAR_9);
}
