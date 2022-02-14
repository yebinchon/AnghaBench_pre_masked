
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int mems_allowed; int mems_allowed_change_disable; } ;
typedef int nodemask_t ;
struct TYPE_2__ {int flags; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (struct task_struct*,int *,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct task_struct*) ;
 int FUNC_5 (struct task_struct*) ;
 int FUNC_6 (struct task_struct*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 () ;

__attribute__((used)) static void FUNC_10(struct task_struct *VAR_5,
     nodemask_t *VAR_6)
{
repeat:




 if (FUNC_8(FUNC_7(VAR_3)))
  return;
 if (VAR_4->flags & VAR_2)
  return;

 FUNC_5(VAR_5);
 FUNC_2(VAR_5->mems_allowed, VAR_5->mems_allowed, *VAR_6);
 FUNC_1(VAR_5, VAR_6, VAR_0);
 FUNC_3();





 while (FUNC_0(VAR_5->mems_allowed_change_disable)) {
  FUNC_6(VAR_5);
  if (!FUNC_4(VAR_5))
   FUNC_9();
  goto repeat;
 }
 FUNC_3();

 FUNC_1(VAR_5, VAR_6, VAR_1);
 VAR_5->mems_allowed = *VAR_6;
 FUNC_6(VAR_5);
}
