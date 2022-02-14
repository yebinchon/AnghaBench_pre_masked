
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct utrace {int lock; } ;
struct task_struct {TYPE_1__* sighand; int state; TYPE_2__* signal; } ;
struct TYPE_4__ {int flags; scalar_t__ group_stop_count; } ;
struct TYPE_3__ {int siglock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct task_struct*,int ) ;

__attribute__((used)) static void FUNC_4(struct task_struct *VAR_3, struct utrace *VAR_4)
{
 FUNC_0(&VAR_4->lock);
 FUNC_1(&VAR_3->sighand->siglock);
 if (VAR_3->signal->flags & VAR_0 ||
     VAR_3->signal->group_stop_count)
  VAR_3->state = VAR_1;
 else
  FUNC_3(VAR_3, VAR_2);
 FUNC_2(&VAR_3->sighand->siglock);
}
