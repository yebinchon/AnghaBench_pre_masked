
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {scalar_t__ ptrace; } ;


 int FUNC_0 (int ,struct task_struct*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct task_struct*,unsigned int) ;
 int FUNC_3 (struct task_struct*) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct task_struct *VAR_2, unsigned int VAR_3)
{
 bool VAR_4, VAR_5;

 FUNC_5(&VAR_1);




 VAR_4 = VAR_2->ptrace != 0;
 VAR_5 = 0;
 if (FUNC_1(VAR_4))
  VAR_5 = FUNC_0(VAR_0, VAR_2);
 FUNC_6(&VAR_1);

 if (FUNC_4(VAR_5))
  FUNC_3(VAR_2);
 else if (FUNC_1(VAR_4))
  FUNC_2(VAR_2, VAR_3);
}
