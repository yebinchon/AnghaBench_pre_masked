
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct task_struct*) ;
 int VAR_1 ;
 int FUNC_1 (struct task_struct*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct task_struct *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3)
  return VAR_3;

 return FUNC_1(VAR_2, VAR_1, VAR_0);
}
