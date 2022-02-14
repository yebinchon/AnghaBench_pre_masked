
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct utrace_engine {int dummy; } ;
struct ptrace_context {int options; } ;
struct pt_regs {int dummy; } ;
struct linux_binprm {int dummy; } ;
struct linux_binfmt {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 struct ptrace_context* FUNC_1 (struct utrace_engine*) ;
 int FUNC_2 (struct ptrace_context*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct ptrace_context*,int ) ;

__attribute__((used)) static u32 FUNC_5(u32 VAR_6, struct utrace_engine *VAR_7,
         const struct linux_binfmt *VAR_8,
         const struct linux_binprm *VAR_9,
         struct pt_regs *VAR_10)
{
 struct ptrace_context *VAR_11 = FUNC_1(VAR_7);

 FUNC_0(FUNC_2(VAR_11));

 if (!(VAR_11->options & VAR_1)) {



  FUNC_3(VAR_2, VAR_5, 0);
  return VAR_3;
 }

 FUNC_4(VAR_11, VAR_0);
 return VAR_4;
}
