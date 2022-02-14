
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {struct proc* td_proc; } ;
struct proc {int dummy; } ;
struct cdev {int dummy; } ;


 int FUNC_0 (struct cdev*) ;
 int FUNC_1 (char*,int ,int,int,struct proc*) ;

int
FUNC_2(struct cdev *VAR_0, int VAR_1, int VAR_2, struct thread *VAR_3)
{
    struct proc *VAR_4 = VAR_3->td_proc;

    FUNC_1("mydev_close: dev_t=%lu, flag=%x, otyp=%x, procp=%p\n",
       FUNC_0(VAR_0), VAR_1, VAR_2, VAR_4);
    return (0);
}
