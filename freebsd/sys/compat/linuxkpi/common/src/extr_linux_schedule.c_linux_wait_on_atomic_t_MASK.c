
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
typedef int atomic_t ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 struct task_struct* VAR_1 ;
 int FUNC_1 (void*,struct task_struct*,char*,int ,unsigned int) ;
 int FUNC_2 (struct task_struct*,unsigned int) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;

int
FUNC_5(atomic_t *VAR_2, unsigned int VAR_3)
{
 struct task_struct *VAR_4;
 void *VAR_5;
 int VAR_6;

 VAR_4 = VAR_1;
 VAR_5 = VAR_2;
 for (;;) {
  FUNC_3(VAR_5);
  if (FUNC_0(VAR_2) == 0) {
   FUNC_4(VAR_5);
   VAR_6 = 0;
   break;
  }
  FUNC_2(VAR_4, VAR_3);
  VAR_6 = FUNC_1(VAR_5, VAR_4, "watomic", 0, VAR_3);
  if (VAR_6 != 0)
   break;
 }
 FUNC_2(VAR_4, VAR_0);

 return (VAR_6);
}
