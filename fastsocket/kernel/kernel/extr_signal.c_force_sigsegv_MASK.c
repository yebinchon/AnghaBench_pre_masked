
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct task_struct {TYPE_3__* sighand; } ;
struct TYPE_6__ {int siglock; TYPE_2__* action; } ;
struct TYPE_4__ {int sa_handler; } ;
struct TYPE_5__ {TYPE_1__ sa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct task_struct*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int
FUNC_3(int VAR_2, struct task_struct *VAR_3)
{
 if (VAR_2 == VAR_0) {
  unsigned long VAR_4;
  FUNC_1(&VAR_3->sighand->siglock, VAR_4);
  VAR_3->sighand->action[VAR_2 - 1].sa.sa_handler = VAR_1;
  FUNC_2(&VAR_3->sighand->siglock, VAR_4);
 }
 FUNC_0(VAR_0, VAR_3);
 return 0;
}
