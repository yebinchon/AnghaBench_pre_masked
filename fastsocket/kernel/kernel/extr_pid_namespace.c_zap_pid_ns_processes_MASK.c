
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct pid_namespace {scalar_t__ reboot; } ;
struct TYPE_4__ {TYPE_1__* signal; } ;
struct TYPE_3__ {scalar_t__ group_exit_code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pid_namespace*) ;
 int FUNC_1 (int ) ;
 TYPE_2__* VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,struct task_struct*) ;
 int FUNC_4 (struct pid_namespace*,int) ;
 struct task_struct* FUNC_5 (int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int,int *,int ,int *) ;
 int VAR_6 ;

void FUNC_11(struct pid_namespace *VAR_7)
{
 int VAR_8;
 int VAR_9;
 struct task_struct *VAR_10;
 FUNC_8(&VAR_6);
 VAR_8 = FUNC_4(VAR_7, 1);
 while (VAR_8 > 0) {
  FUNC_6();






  VAR_10 = FUNC_5(FUNC_2(VAR_8), VAR_1);
  if (VAR_10)
   FUNC_3(VAR_2, VAR_10);

  FUNC_7();

  VAR_8 = FUNC_4(VAR_7, VAR_8);
 }
 FUNC_9(&VAR_6);

 do {
  FUNC_1(VAR_3);
  VAR_9 = FUNC_10(-1, ((void*)0), VAR_4, ((void*)0));
 } while (VAR_9 != -VAR_0);

 if (VAR_7->reboot)
  VAR_5->signal->group_exit_code = VAR_7->reboot;

 FUNC_0(VAR_7);
 return;
}
