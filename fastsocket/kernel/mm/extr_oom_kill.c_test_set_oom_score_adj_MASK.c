
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sighand_struct {int siglock; } ;
struct TYPE_6__ {TYPE_2__* signal; TYPE_1__* mm; struct sighand_struct* sighand; } ;
struct TYPE_5__ {int oom_score_adj; } ;
struct TYPE_4__ {int oom_disable_count; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_3__* VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(int VAR_2)
{
 struct sighand_struct *VAR_3 = VAR_1->sighand;
 int VAR_4;

 FUNC_2(&VAR_3->siglock);
 VAR_4 = VAR_1->signal->oom_score_adj;
 if (VAR_2 != VAR_4) {
  if (VAR_2 == VAR_0)
   FUNC_1(&VAR_1->mm->oom_disable_count);
  else if (VAR_4 == VAR_0)
   FUNC_0(&VAR_1->mm->oom_disable_count);
  VAR_1->signal->oom_score_adj = VAR_2;
 }
 FUNC_3(&VAR_3->siglock);

 return VAR_4;
}
