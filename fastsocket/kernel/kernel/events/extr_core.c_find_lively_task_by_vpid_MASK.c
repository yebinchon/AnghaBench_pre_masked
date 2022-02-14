
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
typedef int pid_t ;


 int VAR_0 ;
 struct task_struct* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct task_struct* VAR_3 ;
 struct task_struct* FUNC_1 (int ) ;
 int FUNC_2 (struct task_struct*) ;
 int FUNC_3 (struct task_struct*,int ) ;
 int FUNC_4 (struct task_struct*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static struct task_struct *
FUNC_7(pid_t VAR_4)
{
 struct task_struct *VAR_5;
 int VAR_6;

 FUNC_5();
 if (!VAR_4)
  VAR_5 = VAR_3;
 else
  VAR_5 = FUNC_1(VAR_4);
 if (VAR_5)
  FUNC_2(VAR_5);
 FUNC_6();

 if (!VAR_5)
  return FUNC_0(-VAR_1);


 VAR_6 = -VAR_0;
 if (!FUNC_3(VAR_5, VAR_2))
  goto errout;

 return VAR_5;
errout:
 FUNC_4(VAR_5);
 return FUNC_0(VAR_6);

}
