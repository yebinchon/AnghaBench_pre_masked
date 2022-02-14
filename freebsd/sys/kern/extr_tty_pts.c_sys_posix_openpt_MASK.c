
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int* td_retval; } ;
struct posix_openpt_args {int flags; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct thread*,struct file**,int*,int) ;
 int FUNC_2 (struct thread*,struct file*,int) ;
 int FUNC_3 (struct file*,struct thread*) ;
 int FUNC_4 (int ,struct thread*,struct file*) ;

int
FUNC_5(struct thread *VAR_5, struct posix_openpt_args *VAR_6)
{
 int VAR_7, VAR_8;
 struct file *VAR_9;





 if (VAR_6->flags & ~(VAR_4|VAR_3|VAR_2))
  return (VAR_0);

 VAR_7 = FUNC_1(VAR_5, &VAR_9, &VAR_8, VAR_6->flags);
 if (VAR_7)
  return (VAR_7);


 VAR_7 = FUNC_4(FUNC_0(VAR_6->flags & VAR_1), VAR_5, VAR_9);
 if (VAR_7 != 0) {
  FUNC_2(VAR_5, VAR_9, VAR_8);
  FUNC_3(VAR_9, VAR_5);
  return (VAR_7);
 }


 VAR_5->td_retval[0] = VAR_8;
 FUNC_3(VAR_9, VAR_5);

 return (0);
}
