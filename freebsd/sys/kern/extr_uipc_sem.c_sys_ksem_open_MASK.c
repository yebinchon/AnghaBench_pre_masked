
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_proc; } ;
struct ksem_open_args {int oflag; int value; int mode; int idp; int name; } ;
struct TYPE_2__ {scalar_t__ p_pid; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct thread*,int ,int ,int ,int ,int,int ) ;

int
FUNC_2(struct thread *VAR_3, struct ksem_open_args *VAR_4)
{

 FUNC_0((">>> ksem_open start, pid=%d\n", (int)VAR_3->td_proc->p_pid));

 if ((VAR_4->oflag & ~(VAR_1 | VAR_2)) != 0)
  return (VAR_0);
 return (FUNC_1(VAR_3, VAR_4->name, VAR_4->idp, VAR_4->mode, VAR_4->value,
     VAR_4->oflag, 0));
}
