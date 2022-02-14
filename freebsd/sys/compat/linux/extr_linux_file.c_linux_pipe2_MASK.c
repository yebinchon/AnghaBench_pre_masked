
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct linux_pipe2_args {int flags; int pipefds; } ;
typedef int fildes ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 (struct thread*,int) ;
 int FUNC_2 (struct thread*,int*,int,int *,int *) ;

int
FUNC_3(struct thread *VAR_5, struct linux_pipe2_args *VAR_6)
{
 int VAR_7[2];
 int VAR_8, VAR_9;

 if ((VAR_6->flags & ~(VAR_2 | VAR_1)) != 0)
  return (VAR_0);

 VAR_9 = 0;
 if ((VAR_6->flags & VAR_2) != 0)
  VAR_9 |= VAR_4;
 if ((VAR_6->flags & VAR_1) != 0)
  VAR_9 |= VAR_3;
 VAR_8 = FUNC_2(VAR_5, VAR_7, VAR_9, ((void*)0), ((void*)0));
 if (VAR_8 != 0)
  return (VAR_8);

 VAR_8 = FUNC_0(VAR_7, VAR_6->pipefds, sizeof(VAR_7));
 if (VAR_8 != 0) {
  (void)FUNC_1(VAR_5, VAR_7[0]);
  (void)FUNC_1(VAR_5, VAR_7[1]);
 }

 return (VAR_8);
}
