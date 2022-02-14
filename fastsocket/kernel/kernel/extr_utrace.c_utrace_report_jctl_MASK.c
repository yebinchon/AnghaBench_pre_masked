
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct utrace {int dummy; } ;
struct task_struct {TYPE_1__* sighand; } ;
struct TYPE_2__ {int siglock; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct task_struct*,struct utrace*,int *,int ,int ,int,int) ;
 int FUNC_2 (int ) ;
 struct task_struct* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct utrace* FUNC_5 (struct task_struct*) ;

void FUNC_6(int VAR_4, int VAR_5)
{
 struct task_struct *VAR_6 = VAR_1;
 struct utrace *VAR_7 = FUNC_5(VAR_6);
 FUNC_0(VAR_2);

 FUNC_4(&VAR_6->sighand->siglock);

 FUNC_1(VAR_6, VAR_7, &VAR_2, FUNC_2(VAR_0),
        VAR_3, VAR_5, VAR_4);

 FUNC_3(&VAR_6->sighand->siglock);
}
