
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct utrace_engine {int dummy; } ;
struct ptrace_context {int signr; int resume; } ;
struct pt_regs {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 struct ptrace_context* FUNC_1 (struct utrace_engine*) ;
 scalar_t__ FUNC_2 (struct ptrace_context*) ;
 int FUNC_3 (struct ptrace_context*) ;

__attribute__((used)) static u32 FUNC_4(u32 VAR_3, struct utrace_engine *VAR_4,
          struct pt_regs *VAR_5)
{
 struct ptrace_context *VAR_6 = FUNC_1(VAR_4);

 if (FUNC_2(VAR_6))
  return VAR_2;

 if (FUNC_0(VAR_6->resume)) {
  VAR_6->signr = VAR_0;
  return VAR_1;
 }

 FUNC_3(VAR_6);
 return VAR_2;
}
