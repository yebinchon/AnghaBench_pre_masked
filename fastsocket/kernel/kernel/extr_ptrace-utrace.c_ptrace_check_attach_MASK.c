
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utrace_examiner {int dummy; } ;
struct utrace_engine {int dummy; } ;
struct task_struct {scalar_t__ parent; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct utrace_engine*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct utrace_engine* FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct task_struct*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct task_struct*,struct utrace_engine*,int ) ;
 int FUNC_5 (struct utrace_engine*) ;
 int FUNC_6 (struct task_struct*) ;
 int FUNC_7 (struct task_struct*,struct utrace_engine*,struct utrace_examiner*) ;
 int FUNC_8 (struct task_struct*) ;

int FUNC_9(struct task_struct *VAR_3, int VAR_4)
{
 struct utrace_engine *VAR_5;
 struct utrace_examiner VAR_6;
 int VAR_7 = -VAR_0;

 VAR_5 = FUNC_1(VAR_3);
 if (FUNC_0(VAR_5))
  return VAR_7;

 if (VAR_3->parent != VAR_2)
  goto out;

 if (FUNC_3(VAR_4))
  VAR_7 = 0;

 if (!FUNC_2(VAR_3))
  goto out;




 FUNC_6(VAR_3);
 if (!FUNC_4(VAR_3, VAR_5, VAR_1) &&
     !FUNC_7(VAR_3, VAR_5, &VAR_6))
  VAR_7 = 0;
 else
  FUNC_8(VAR_3);

out:
 FUNC_5(VAR_5);
 return VAR_7;
}
