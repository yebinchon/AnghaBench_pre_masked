
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct thread {int td_ucred; } ;
struct linux_ioctl_args {int cmd; scalar_t__ arg; int fd; } ;
struct file {int dummy; } ;
typedef int d_pio ;
typedef int cap_rights_t ;
typedef int caddr_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,char**,int) ;
 int FUNC_2 (struct file*,struct thread*) ;
 int FUNC_3 (struct thread*,int ,int ,struct file**) ;
 int FUNC_4 (struct file*,int,int ,int ,struct thread*) ;

__attribute__((used)) static int
FUNC_5(struct thread *VAR_1, struct linux_ioctl_args* VAR_2)
{
   cap_rights_t VAR_3;
   int VAR_4 = 0;
   u_long VAR_5 = VAR_2->cmd & 0xffff;



   char VAR_6[2*sizeof(short) + sizeof(int) + sizeof(void*)];

   struct file *VAR_7;

   VAR_4 = FUNC_3(VAR_1, VAR_2->fd, FUNC_0(&VAR_3, VAR_0), &VAR_7);
   if (VAR_4 != 0)
    return (VAR_4);

   FUNC_1((caddr_t)VAR_2->arg, &VAR_6, sizeof(VAR_6));
   VAR_4 = FUNC_4(VAR_7, VAR_5, (caddr_t)&VAR_6, VAR_1->td_ucred, VAR_1);
   FUNC_2(VAR_7, VAR_1);
   return VAR_4;
}
