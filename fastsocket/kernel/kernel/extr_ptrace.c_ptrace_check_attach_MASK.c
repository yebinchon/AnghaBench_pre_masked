
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int ptrace; scalar_t__ parent; TYPE_1__* sighand; int state; } ;
struct TYPE_2__ {int siglock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct task_struct*) ;
 int FUNC_5 (struct task_struct*) ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (struct task_struct*,int ) ;

int FUNC_7(struct task_struct *VAR_5, int VAR_6)
{
 int VAR_7 = -VAR_0;
 FUNC_0(&VAR_4);
 if ((VAR_5->ptrace & VAR_1) && VAR_5->parent == VAR_3) {
  VAR_7 = 0;




  FUNC_2(&VAR_5->sighand->siglock);
  if (FUNC_4(VAR_5))
   VAR_5->state = VAR_2;
  else if (!FUNC_5(VAR_5) && !VAR_6)
   VAR_7 = -VAR_0;
  FUNC_3(&VAR_5->sighand->siglock);
 }
 FUNC_1(&VAR_4);

 if (!VAR_7 && !VAR_6)
  VAR_7 = FUNC_6(VAR_5, VAR_2) ? 0 : -VAR_0;


 return VAR_7;
}
