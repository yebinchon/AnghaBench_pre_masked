
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct utrace_engine {int dummy; } ;
struct ptrace_context {int options; } ;
struct pt_regs {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 struct ptrace_context* FUNC_1 (struct utrace_engine*) ;
 int FUNC_2 (struct ptrace_context*) ;
 int FUNC_3 (struct ptrace_context*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static u32 FUNC_6(u32 VAR_7, struct utrace_engine *VAR_8,
           struct pt_regs *VAR_9)
{
 struct ptrace_context *VAR_10 = FUNC_1(VAR_8);

 if (VAR_7 & VAR_5) {




  if (FUNC_4(VAR_10->options & VAR_0))
   return VAR_4 | VAR_1;
  return FUNC_5(VAR_7) | VAR_2;
 }

 FUNC_0(FUNC_2(VAR_10));

 FUNC_3(VAR_10);

 if (FUNC_4(VAR_10->options & VAR_0))
  return VAR_4 | VAR_1;




 return VAR_6 | VAR_3;
}
