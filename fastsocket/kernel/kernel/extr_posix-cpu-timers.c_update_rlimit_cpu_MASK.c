
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {TYPE_1__* sighand; struct signal_struct* signal; } ;
struct signal_struct {TYPE_2__* it; } ;
typedef int cputime_t ;
struct TYPE_4__ {int expires; } ;
struct TYPE_3__ {int siglock; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (struct task_struct*,size_t,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct task_struct *VAR_2, unsigned long VAR_3)
{
 cputime_t VAR_4 = FUNC_2(VAR_3);
 struct signal_struct *const VAR_5 = VAR_2->signal;

 if (FUNC_0(VAR_5->it[VAR_0].expires, VAR_1) ||
     FUNC_1(VAR_5->it[VAR_0].expires, VAR_4)) {
  FUNC_4(&VAR_2->sighand->siglock);
  FUNC_3(VAR_2, VAR_0, &VAR_4, ((void*)0));
  FUNC_5(&VAR_2->sighand->siglock);
 }
}
