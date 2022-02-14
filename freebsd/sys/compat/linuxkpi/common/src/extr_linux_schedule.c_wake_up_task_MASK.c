
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (struct task_struct*,int ) ;
 int FUNC_3 (struct task_struct*) ;
 int FUNC_4 (struct task_struct*) ;
 int FUNC_5 (struct task_struct*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct task_struct *VAR_2, unsigned int VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = VAR_5 = 0;
 FUNC_3(VAR_2);
 if ((FUNC_0(&VAR_2->state) & VAR_3) != 0) {
  FUNC_2(VAR_2, VAR_1);
  VAR_5 = FUNC_5(VAR_2, VAR_0, 0, 0);
  VAR_4 = 1;
 }
 FUNC_4(VAR_2);
 if (VAR_5)
  FUNC_1();
 return (VAR_4);
}
