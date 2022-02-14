
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utrace_engine {unsigned long flags; } ;
struct task_struct {int dummy; } ;
struct ptrace_context {int options; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;





 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long FUNC_0 (int ) ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct ptrace_context* FUNC_3 (struct utrace_engine*) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct task_struct*,struct utrace_engine*,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct task_struct *VAR_9,
    struct utrace_engine *VAR_10, long VAR_11)
{
 struct ptrace_context *VAR_12 = FUNC_3(VAR_10);
 unsigned long VAR_13;
 int VAR_14;

 VAR_12->options &= ~VAR_2;
 VAR_13 = VAR_10->flags & ~VAR_6;
 VAR_14 = VAR_7;

 switch (VAR_11) {

 case 132:
  if (FUNC_4(!FUNC_1()))
   return -VAR_0;
  VAR_14 = VAR_5;
  VAR_13 |= FUNC_0(VAR_4);
  break;



 case 131:
  if (FUNC_4(!FUNC_2()))
   return -VAR_0;
  VAR_14 = VAR_8;
  VAR_13 |= FUNC_0(VAR_4);
  break;



 case 128:
  if (FUNC_4(!FUNC_2()))
   return -VAR_0;
  VAR_14 = VAR_8;
 case 129:
  VAR_12->options |= VAR_2;
  VAR_13 |= FUNC_0(VAR_3);
  break;


 case 130:
  VAR_13 |= VAR_6;
  break;

 case 133:
  break;
 default:
  return -VAR_0;
 }

 if (VAR_13 != VAR_10->flags &&
     FUNC_5(VAR_9, VAR_10, VAR_13))
  return -VAR_1;

 return VAR_14;
}
