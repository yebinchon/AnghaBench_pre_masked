
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
typedef scalar_t__ pid_t ;
typedef int kernel_cap_t ;


 int VAR_0 ;
 struct task_struct* VAR_1 ;
 struct task_struct* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct task_struct*,int *,int *,int *) ;
 scalar_t__ FUNC_4 (struct task_struct*) ;
 int VAR_2 ;

__attribute__((used)) static inline int FUNC_5(pid_t VAR_3, kernel_cap_t *VAR_4,
         kernel_cap_t *VAR_5, kernel_cap_t *VAR_6)
{
 int VAR_7;

 if (VAR_3 && (VAR_3 != FUNC_4(VAR_1))) {
  struct task_struct *VAR_8;

  FUNC_1(&VAR_2);

  VAR_8 = FUNC_0(VAR_3);
  if (!VAR_8)
   VAR_7 = -VAR_0;
  else
   VAR_7 = FUNC_3(VAR_8, VAR_4, VAR_5, VAR_6);

  FUNC_2(&VAR_2);
 } else
  VAR_7 = FUNC_3(VAR_1, VAR_4, VAR_5, VAR_6);

 return VAR_7;
}
