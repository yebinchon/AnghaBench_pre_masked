
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {struct proc* td_proc; } ;
struct proc {int dummy; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cdev*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,char,int) ;
 int FUNC_2 (char*,int ,int,int,struct proc*) ;

int
FUNC_3(struct cdev *VAR_2, int VAR_3, int VAR_4, struct thread *VAR_5)
{
    struct proc *VAR_6 = VAR_5->td_proc;

    FUNC_2("mydev_open: dev_t=%lu, flag=%x, otyp=%x, procp=%p\n",
    FUNC_0(VAR_2), VAR_3, VAR_4, VAR_6);
    FUNC_1(&VAR_0, '\0', 513);
    VAR_1 = 0;
    return (0);
}
