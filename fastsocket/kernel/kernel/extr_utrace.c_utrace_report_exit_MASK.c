
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct utrace {int dummy; } ;
struct task_struct {int dummy; } ;
struct TYPE_4__ {scalar_t__ action; int resume_action; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__) ;
 int FUNC_1 (struct task_struct*,struct utrace*,TYPE_1__*,int ,int ,long,long*) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 struct task_struct* VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 struct utrace* FUNC_3 (struct task_struct*) ;
 int FUNC_4 (struct task_struct*,struct utrace*,int ) ;

void FUNC_5(long *VAR_5)
{
 struct task_struct *VAR_6 = VAR_2;
 struct utrace *VAR_7 = FUNC_3(VAR_6);
 FUNC_0(VAR_3);
 long VAR_8 = *VAR_5;

 FUNC_1(VAR_6, VAR_7, &VAR_3, FUNC_2(VAR_0),
        VAR_4, VAR_8, VAR_5);

 if (VAR_3.action == VAR_1)
  FUNC_4(VAR_6, VAR_7, VAR_3.resume_action);
}
