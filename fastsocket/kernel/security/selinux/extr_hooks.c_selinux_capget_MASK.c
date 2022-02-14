
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
typedef int kernel_cap_t ;


 int VAR_0 ;
 int FUNC_0 (struct task_struct*,int *,int *,int *) ;
 int FUNC_1 (struct task_struct*,int ) ;

__attribute__((used)) static int FUNC_2(struct task_struct *VAR_1, kernel_cap_t *VAR_2,
     kernel_cap_t *VAR_3, kernel_cap_t *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_0);
 if (VAR_5)
  return VAR_5;

 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
}
