
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {TYPE_1__* sighand; int comm; } ;
struct TYPE_2__ {int siglock; } ;


 int FUNC_0 (struct task_struct*) ;
 scalar_t__ FUNC_1 (struct task_struct*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct task_struct*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(struct task_struct *VAR_0)
{
 unsigned long VAR_1;

 if (FUNC_1(VAR_0)) {
  FUNC_2("  clean up: %s\n", VAR_0->comm);
  FUNC_0(VAR_0);
  FUNC_4(&VAR_0->sighand->siglock, VAR_1);
  FUNC_3(VAR_0);
  FUNC_5(&VAR_0->sighand->siglock, VAR_1);
 }
}
