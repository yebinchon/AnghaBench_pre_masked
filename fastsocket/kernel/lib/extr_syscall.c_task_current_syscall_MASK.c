
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {long state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct task_struct*,long*,unsigned long*,unsigned int,unsigned long*,unsigned long*) ;
 struct task_struct* VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 unsigned long FUNC_2 (struct task_struct*,long) ;

int FUNC_3(struct task_struct *VAR_3, long *VAR_4,
    unsigned long VAR_5[6], unsigned int VAR_6,
    unsigned long *VAR_7, unsigned long *VAR_8)
{
 long VAR_9;
 unsigned long VAR_10;

 if (FUNC_1(VAR_6 > 6))
  return -VAR_1;

 if (VAR_3 == VAR_2)
  return FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);

 VAR_9 = VAR_3->state;
 if (FUNC_1(!VAR_9))
  return -VAR_0;

 VAR_10 = FUNC_2(VAR_3, VAR_9);
 if (FUNC_1(!VAR_10) ||
     FUNC_1(FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8)) ||
     FUNC_1(FUNC_2(VAR_3, VAR_9) != VAR_10))
  return -VAR_0;

 return 0;
}
