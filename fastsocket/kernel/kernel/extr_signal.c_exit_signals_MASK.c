
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {int flags; TYPE_1__* sighand; TYPE_2__* signal; } ;
struct TYPE_4__ {int group_stop_count; int flags; } ;
struct TYPE_3__ {int siglock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct task_struct*,int) ;
 struct task_struct* FUNC_1 (struct task_struct*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct task_struct*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (struct task_struct*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_9 (struct task_struct*) ;
 int FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int) ;

void FUNC_12(struct task_struct *VAR_4)
{
 int VAR_5 = 0;
 struct task_struct *VAR_6;

 if (FUNC_9(VAR_4) || FUNC_5(VAR_4->signal)) {
  VAR_4->flags |= VAR_1;
  return;
 }

 FUNC_7(&VAR_4->sighand->siglock);




 VAR_4->flags |= VAR_1;
 if (!FUNC_6(VAR_4))
  goto out;





 for (VAR_6 = VAR_4; (VAR_6 = FUNC_1(VAR_6)) != VAR_4; )
  if (!FUNC_6(VAR_6) && !(VAR_6->flags & VAR_1))
   FUNC_4(VAR_6);

 if (FUNC_11(VAR_4->signal->group_stop_count) &&
   !--VAR_4->signal->group_stop_count) {
  VAR_4->signal->flags = VAR_2;
  VAR_5 = FUNC_10(VAR_0, VAR_0);
 }
out:
 FUNC_8(&VAR_4->sighand->siglock);

 if (FUNC_11(VAR_5)) {
  FUNC_2(&VAR_3);
  FUNC_0(VAR_4, VAR_5);
  FUNC_3(&VAR_3);
 }
}
