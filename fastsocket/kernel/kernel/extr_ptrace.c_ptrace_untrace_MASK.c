
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {TYPE_2__* sighand; TYPE_1__* signal; } ;
struct TYPE_4__ {int siglock; } ;
struct TYPE_3__ {int flags; scalar_t__ group_stop_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct task_struct*,int ) ;
 int FUNC_1 (struct task_struct*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct task_struct*) ;

__attribute__((used)) static void FUNC_5(struct task_struct *VAR_2)
{
 FUNC_2(&VAR_2->sighand->siglock);
 if (FUNC_4(VAR_2)) {




  if (VAR_2->signal->flags & VAR_0 ||
      VAR_2->signal->group_stop_count)
   FUNC_0(VAR_2, VAR_1);
  else
   FUNC_1(VAR_2, 1);
 }
 FUNC_3(&VAR_2->sighand->siglock);
}
