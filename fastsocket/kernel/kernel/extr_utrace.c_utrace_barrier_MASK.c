
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utrace_engine {int dummy; } ;
struct utrace {int lock; struct utrace_engine* reporting; } ;
struct task_struct {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct utrace*) ;
 int FUNC_1 (struct utrace*) ;
 struct task_struct* VAR_1 ;
 struct utrace* FUNC_2 (struct task_struct*,struct utrace_engine*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct task_struct*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(struct task_struct *VAR_2, struct utrace_engine *VAR_3)
{
 struct utrace *VAR_4;
 int VAR_5 = -VAR_0;

 if (FUNC_6(VAR_2 == VAR_1))
  return 0;

 do {
  VAR_4 = FUNC_2(VAR_2, VAR_3, 0);
  if (FUNC_6(FUNC_0(VAR_4))) {
   VAR_5 = FUNC_1(VAR_4);
   if (VAR_5 != -VAR_0)
    break;
  } else {
   if (VAR_4->reporting != VAR_3)
    VAR_5 = 0;
   FUNC_5(&VAR_4->lock);
   if (!VAR_5)
    break;
  }
  FUNC_3(1);
 } while (!FUNC_4(VAR_1));

 return VAR_5;
}
