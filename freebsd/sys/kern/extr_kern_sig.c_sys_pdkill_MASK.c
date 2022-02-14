
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct thread {int dummy; } ;
struct proc {int dummy; } ;
struct pdkill_args {scalar_t__ signum; int fd; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_3 (struct proc*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct proc*,scalar_t__) ;
 int FUNC_5 (struct thread*,struct proc*,scalar_t__) ;
 int FUNC_6 (struct thread*,int ,int *,struct proc**) ;

int
FUNC_7(struct thread *VAR_3, struct pdkill_args *VAR_4)
{
 struct proc *VAR_5;
 int VAR_6;

 FUNC_2(VAR_4->signum);
 FUNC_0(VAR_4->fd);
 if ((u_int)VAR_4->signum > VAR_1)
  return (VAR_0);

 VAR_6 = FUNC_6(VAR_3, VAR_4->fd, &VAR_2, &VAR_5);
 if (VAR_6)
  return (VAR_6);
 FUNC_1(VAR_5);
 VAR_6 = FUNC_5(VAR_3, VAR_5, VAR_4->signum);
 if (VAR_6 == 0 && VAR_4->signum)
  FUNC_4(VAR_5, VAR_4->signum);
 FUNC_3(VAR_5);
 return (VAR_6);
}
