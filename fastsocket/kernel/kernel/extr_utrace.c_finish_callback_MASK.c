
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct utrace_report {int result; } ;
struct utrace_engine {int * ops; } ;
struct utrace {int * reporting; } ;
struct task_struct {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct task_struct*,struct utrace*,struct utrace_report*,struct utrace_engine*,int ) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (int) ;

__attribute__((used)) static bool FUNC_3(struct task_struct *VAR_2, struct utrace *VAR_3,
       struct utrace_report *VAR_4,
       struct utrace_engine *VAR_5,
       u32 VAR_6)
{
 VAR_4->result = VAR_6 & ~VAR_0;
 FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5,
          FUNC_2(VAR_6));
 VAR_3->reporting = ((void*)0);
 FUNC_1();

 return VAR_5->ops == &VAR_1;
}
