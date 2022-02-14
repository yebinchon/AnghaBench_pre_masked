
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utrace_engine {int dummy; } ;
struct task_struct {int dummy; } ;
struct ptrace_context {int options; long signr; int resume; } ;


 int VAR_0 ;







 int VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ptrace_context*,struct task_struct*) ;
 int FUNC_1 (struct ptrace_context*) ;
 struct ptrace_context* FUNC_2 (struct utrace_engine*) ;
 int FUNC_3 (struct task_struct*,struct utrace_engine*,long) ;
 int FUNC_4 (struct task_struct*,struct utrace_engine*,int,int) ;
 int FUNC_5 (long,int ,struct task_struct*) ;
 int FUNC_6 (struct ptrace_context*,int) ;
 int FUNC_7 (struct ptrace_context*) ;
 int FUNC_8 (long) ;

__attribute__((used)) static int FUNC_9(struct task_struct *VAR_8,
    struct utrace_engine *VAR_9,
    long VAR_10, long VAR_11)
{
 struct ptrace_context *VAR_12 = FUNC_2(VAR_9);
 int VAR_13;

 if (!FUNC_8(VAR_11))
  return -VAR_0;

 VAR_13 = FUNC_3(VAR_8, VAR_9, VAR_10);
 if (VAR_13 < 0)
  return VAR_13;

 switch (FUNC_1(VAR_12)) {
 case 129:
  if (VAR_12->options & VAR_1) {
   FUNC_6(VAR_12, 128);
   VAR_13 = VAR_6;
  }
  break;

 case 133:
 case 132:
 case 134:
 case 128:
  if (VAR_10 == VAR_2) {
   FUNC_7(VAR_12);
   FUNC_0(VAR_12, VAR_8);
   return 0;
  }

  if (VAR_13 != VAR_7) {




   VAR_12->signr = VAR_4;
   VAR_13 = VAR_5;
  }
  break;

 case 130:
  if (VAR_11)
   FUNC_5(VAR_11, VAR_3, VAR_8);
  break;

 case 131:
  VAR_12->signr = VAR_11;
  break;
 }

 VAR_12->resume = VAR_13;
 FUNC_4(VAR_8, VAR_9, VAR_13, 1);
 return 0;
}
