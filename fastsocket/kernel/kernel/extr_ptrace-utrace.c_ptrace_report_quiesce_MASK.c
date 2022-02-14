
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct utrace_engine {int dummy; } ;
struct ptrace_context {int resume; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ptrace_context* FUNC_0 (struct utrace_engine*) ;
 scalar_t__ FUNC_1 (struct ptrace_context*) ;

__attribute__((used)) static u32 FUNC_2(u32 VAR_2, struct utrace_engine *VAR_3,
     unsigned long VAR_4)
{
 struct ptrace_context *VAR_5 = FUNC_0(VAR_3);

 if (FUNC_1(VAR_5))
  return VAR_1;

 return VAR_4 ? VAR_0 : VAR_5->resume;
}
