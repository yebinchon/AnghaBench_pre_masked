
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct task_struct*) ;

__attribute__((used)) static int
FUNC_1(struct task_struct *VAR_3, int VAR_4)
{

 if (VAR_4 == VAR_0 || VAR_4 == VAR_2 || VAR_4 == VAR_1) {
  VAR_4 = -FUNC_0(VAR_3);
  if (VAR_4 == 0)
   VAR_4 = VAR_0;
 }
 return (VAR_4);
}
