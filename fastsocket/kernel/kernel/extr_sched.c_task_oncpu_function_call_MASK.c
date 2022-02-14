
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int,void (*) (void*),void*,int) ;
 int FUNC_3 (struct task_struct*) ;
 scalar_t__ FUNC_4 (struct task_struct*) ;

void FUNC_5(struct task_struct *VAR_0,
         void (*VAR_1) (void *VAR_2), void *VAR_3)
{
 int VAR_4;

 FUNC_0();
 VAR_4 = FUNC_3(VAR_0);
 if (FUNC_4(VAR_0))
  FUNC_2(VAR_4, VAR_1, VAR_3, 1);
 FUNC_1();
}
