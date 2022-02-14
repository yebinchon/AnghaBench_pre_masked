
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_ucred; } ;
struct socket {int dummy; } ;
struct sockaddr {int dummy; } ;
struct file {struct socket* f_data; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct thread*,int,struct sockaddr*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct thread*) ;
 scalar_t__ FUNC_3 (struct thread*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct file*,struct thread*) ;
 int FUNC_5 (struct thread*,int,int *,struct file**,int *,int *) ;
 int FUNC_6 (struct sockaddr*) ;
 int FUNC_7 (int ,struct socket*,struct sockaddr*) ;
 int FUNC_8 (struct socket*,struct sockaddr*,struct thread*) ;
 int FUNC_9 (int,struct socket*,struct sockaddr*,struct thread*) ;

int
FUNC_10(struct thread *VAR_4, int VAR_5, int VAR_6, struct sockaddr *VAR_7)
{
 struct socket *VAR_8;
 struct file *VAR_9;
 int VAR_10;






 FUNC_0(VAR_6);
 FUNC_1(VAR_4, VAR_5, VAR_7);
 VAR_10 = FUNC_5(VAR_4, VAR_6, &VAR_3,
     &VAR_9, ((void*)0), ((void*)0));
 if (VAR_10 != 0)
  return (VAR_10);
 VAR_8 = VAR_9->f_data;
  if (VAR_5 == VAR_0)
   VAR_10 = FUNC_8(VAR_8, VAR_7, VAR_4);
  else
   VAR_10 = FUNC_9(VAR_5, VAR_8, VAR_7, VAR_4);



 FUNC_4(VAR_9, VAR_4);
 return (VAR_10);
}
