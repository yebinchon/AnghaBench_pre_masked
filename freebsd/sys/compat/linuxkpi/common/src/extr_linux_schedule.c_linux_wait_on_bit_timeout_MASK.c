
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 void* FUNC_0 (unsigned long*,int) ;
 struct task_struct* VAR_2 ;
 int FUNC_1 (void*,struct task_struct*,char*,int,unsigned int) ;
 int FUNC_2 (struct task_struct*,unsigned int) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;

int
FUNC_5(unsigned long *VAR_3, int VAR_4, unsigned int VAR_5,
    int VAR_6)
{
 struct task_struct *VAR_7;
 void *VAR_8;
 int VAR_9;


 if (VAR_6 < 1)
  VAR_6 = 1;
 else if (VAR_6 == VAR_0)
  VAR_6 = 0;

 VAR_7 = VAR_2;
 VAR_8 = FUNC_0(VAR_3, VAR_4);
 for (;;) {
  FUNC_3(VAR_8);
  if ((*VAR_3 & (1 << VAR_4)) == 0) {
   FUNC_4(VAR_8);
   VAR_9 = 0;
   break;
  }
  FUNC_2(VAR_7, VAR_5);
  VAR_9 = FUNC_1(VAR_8, VAR_7, "wbit", VAR_6,
      VAR_5);
  if (VAR_9 != 0)
   break;
 }
 FUNC_2(VAR_7, VAR_1);

 return (VAR_9);
}
