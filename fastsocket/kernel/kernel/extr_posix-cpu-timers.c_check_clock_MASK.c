
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
typedef scalar_t__ pid_t ;
typedef int clockid_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int const) ;
 scalar_t__ FUNC_1 (int const) ;
 scalar_t__ FUNC_2 (int const) ;
 int VAR_1 ;
 int VAR_2 ;
 struct task_struct* FUNC_3 (scalar_t__ const) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct task_struct*,int ) ;
 int VAR_3 ;
 int FUNC_7 (struct task_struct*) ;

__attribute__((used)) static int FUNC_8(const clockid_t VAR_4)
{
 int VAR_5 = 0;
 struct task_struct *VAR_6;
 const pid_t VAR_7 = FUNC_1(VAR_4);

 if (FUNC_2(VAR_4) >= VAR_0)
  return -VAR_1;

 if (VAR_7 == 0)
  return 0;

 FUNC_4(&VAR_3);
 VAR_6 = FUNC_3(VAR_7);
 if (!VAR_6 || !(FUNC_0(VAR_4) ?
     FUNC_6(VAR_6, VAR_2) : FUNC_7(VAR_6))) {
  VAR_5 = -VAR_1;
 }
 FUNC_5(&VAR_3);

 return VAR_5;
}
