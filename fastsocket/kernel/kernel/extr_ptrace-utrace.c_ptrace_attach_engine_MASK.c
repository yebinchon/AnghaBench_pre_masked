
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utrace_engine {int dummy; } ;
struct task_struct {int dummy; } ;
struct ptrace_context {int resume; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct utrace_engine* FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct utrace_engine*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct ptrace_context*) ;
 struct ptrace_context* FUNC_3 (int,int ) ;
 struct utrace_engine* FUNC_4 (struct task_struct*) ;
 int VAR_9 ;
 int FUNC_5 (struct task_struct*) ;
 scalar_t__ FUNC_6 (int) ;
 struct utrace_engine* FUNC_7 (struct task_struct*,int,int *,struct ptrace_context*) ;

__attribute__((used)) static struct utrace_engine *
FUNC_8(struct task_struct *VAR_10)
{
 struct utrace_engine *VAR_11;
 struct ptrace_context *VAR_12;

 if (FUNC_6(FUNC_5(VAR_10))) {
  VAR_11 = FUNC_4(VAR_10);
  if (!FUNC_1(VAR_11) || FUNC_1(VAR_11) == -VAR_1)
   return VAR_11;
 }

 VAR_12 = FUNC_3(sizeof(*VAR_12), VAR_4);
 if (FUNC_6(!VAR_12))
  return FUNC_0(-VAR_0);

 VAR_12->resume = VAR_8;

 VAR_11 = FUNC_7(VAR_10, VAR_5 |
      VAR_6 |
      VAR_7,
      &VAR_9, VAR_12);
 if (FUNC_6(FUNC_1(VAR_11))) {
  if (VAR_11 != FUNC_0(-VAR_3) &&
      VAR_11 != FUNC_0(-VAR_2))
   VAR_11 = FUNC_0(-VAR_1);
  FUNC_2(VAR_12);
 }

 return VAR_11;
}
