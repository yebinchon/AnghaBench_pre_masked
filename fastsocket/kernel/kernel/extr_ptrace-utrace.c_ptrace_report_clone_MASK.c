
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct utrace_engine {int dummy; } ;
struct task_struct {int dummy; } ;
struct ptrace_context {int options; int eventmsg; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned long VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct task_struct*,int) ;
 struct ptrace_context* FUNC_2 (struct utrace_engine*) ;
 int FUNC_3 (struct ptrace_context*) ;
 int FUNC_4 (struct ptrace_context*,int) ;
 int FUNC_5 (struct task_struct*) ;

__attribute__((used)) static u32 FUNC_6(u32 VAR_16, struct utrace_engine *VAR_17,
          unsigned long VAR_18,
          struct task_struct *VAR_19)
{
 struct ptrace_context *VAR_20 = FUNC_2(VAR_17);
 int VAR_21 = 0;

 FUNC_0(FUNC_3(VAR_20));

 if (VAR_18 & VAR_1) {

 } else if (VAR_18 & VAR_2) {
  if (VAR_20->options & VAR_10)
   VAR_21 = VAR_6;
  else if (VAR_20->options & VAR_11)
   VAR_21 = VAR_7;
 } else if ((VAR_18 & VAR_3) != VAR_12) {
  if (VAR_20->options & VAR_8)
   VAR_21 = VAR_4;
 } else if (VAR_20->options & VAR_9) {
  VAR_21 = VAR_5;
 }




 if ((VAR_21 && VAR_21 != VAR_7) ||
    (VAR_18 & VAR_0))
  FUNC_1(VAR_19, VAR_20->options);

 if (!VAR_21)
  return VAR_14;

 FUNC_4(VAR_20, VAR_21);
 VAR_20->eventmsg = FUNC_5(VAR_19);




 if (VAR_21 == VAR_7)
  return VAR_13;
 else
  return VAR_15;
}
