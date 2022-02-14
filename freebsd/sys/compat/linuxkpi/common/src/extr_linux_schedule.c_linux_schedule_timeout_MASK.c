
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 struct task_struct* VAR_4 ;
 int FUNC_1 (struct task_struct*,struct task_struct*,char*,int,int) ;
 int FUNC_2 (struct task_struct*,int ) ;
 int FUNC_3 (struct task_struct*) ;
 int FUNC_4 (struct task_struct*) ;
 int VAR_5 ;

int
FUNC_5(int VAR_6)
{
 struct task_struct *VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_7 = VAR_4;


 if (VAR_6 < 1)
  VAR_6 = 1;
 else if (VAR_6 == VAR_1)
  VAR_6 = 0;

 VAR_10 = VAR_5 + VAR_6;

 FUNC_3(VAR_7);
 VAR_9 = FUNC_0(&VAR_7->state);
 if (VAR_9 != VAR_3) {
  VAR_8 = FUNC_1(VAR_7, VAR_7, "sched", VAR_6,
      VAR_9);
 } else {
  FUNC_4(VAR_7);
  VAR_8 = 0;
 }
 FUNC_2(VAR_7, VAR_2);

 if (VAR_6 == 0)
  return (VAR_1);


 VAR_10 -= VAR_5;


 if (VAR_8 == -VAR_0 && VAR_10 < 1)
  VAR_10 = 1;
 else if (VAR_10 < 0)
  VAR_10 = 0;
 else if (VAR_10 > VAR_6)
  VAR_10 = VAR_6;
 return (VAR_10);
}
