
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct pdgetpid_args {int pidp; int fd; } ;
typedef int pid_t ;
typedef int pid ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct thread*,int ,int *,int *) ;

int
FUNC_3(struct thread *VAR_1, struct pdgetpid_args *VAR_2)
{
 pid_t VAR_3;
 int VAR_4;

 FUNC_0(VAR_2->fd);
 VAR_4 = FUNC_2(VAR_1, VAR_2->fd, &VAR_0, &VAR_3);
 if (VAR_4 == 0)
  VAR_4 = FUNC_1(&VAR_3, VAR_2->pidp, sizeof(VAR_3));
 return (VAR_4);
}
