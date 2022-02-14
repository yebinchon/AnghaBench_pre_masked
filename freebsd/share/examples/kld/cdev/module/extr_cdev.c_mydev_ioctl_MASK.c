
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct thread {struct proc* td_proc; } ;
struct proc {int dummy; } ;
struct cdev {int dummy; } ;
typedef int caddr_t ;



 int VAR_0 ;
 int FUNC_0 (struct cdev*) ;
 int FUNC_1 (char*,...) ;

int
FUNC_2(struct cdev *VAR_1, u_long VAR_2, caddr_t VAR_3, int VAR_4,
    struct thread *VAR_5)
{
    int VAR_6 = 0;
    struct proc *VAR_7 = VAR_5->td_proc;

    FUNC_1("mydev_ioctl: dev_t=%lu, cmd=%lx, arg=%p, mode=%x procp=%p\n",
    FUNC_0(VAR_1), VAR_2, VAR_3, VAR_4, VAR_7);

    switch(VAR_2) {
    case 128:
 FUNC_1("you called mydev_ioctl CDEV_IOCTL1\n");
 break;
    default:
 FUNC_1("No such ioctl for me!\n");
 VAR_6 = VAR_0;
 break;
    }
    return (VAR_6);
}
