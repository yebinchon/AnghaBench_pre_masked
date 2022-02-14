
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utrace_engine {int dummy; } ;
struct task_struct {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct task_struct*,struct utrace_engine*) ;

__attribute__((used)) static int FUNC_2(struct task_struct *VAR_1,
     struct utrace_engine *VAR_2)
{
 for (;;) {
  int VAR_3 = FUNC_1(VAR_1, VAR_2);

  if (VAR_3 != -VAR_0)
   return VAR_3;

  FUNC_0(1);
 }
}
