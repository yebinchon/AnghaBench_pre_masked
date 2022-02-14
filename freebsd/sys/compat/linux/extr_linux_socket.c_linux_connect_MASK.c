
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct thread {int dummy; } ;
struct socket {int so_error; void* so_emuldata; } ;
struct sockaddr {int dummy; } ;
struct linux_connect_args {int s; int namelen; int name; } ;
struct file {struct socket* f_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct socket*) ;
 int FUNC_2 (struct socket*) ;
 int VAR_4 ;
 int FUNC_3 (struct file*,struct thread*) ;
 int FUNC_4 (struct sockaddr*,int ) ;
 int FUNC_5 (struct thread*,int ,int *,struct file**,int*,int *) ;
 int FUNC_6 (struct thread*,int ,int ,struct sockaddr*) ;
 int FUNC_7 (int ,struct sockaddr**,int *) ;

int
FUNC_8(struct thread *VAR_5, struct linux_connect_args *VAR_6)
{
 struct socket *VAR_7;
 struct sockaddr *VAR_8;
 struct file *VAR_9;
 u_int VAR_10;
 int VAR_11;

 VAR_11 = FUNC_7(FUNC_0(VAR_6->name), &VAR_8,
     &VAR_6->namelen);
 if (VAR_11 != 0)
  return (VAR_11);

 VAR_11 = FUNC_6(VAR_5, VAR_0, VAR_6->s, VAR_8);
 FUNC_4(VAR_8, VAR_3);
 if (VAR_11 != VAR_1)
  return (VAR_11);






 VAR_11 = FUNC_5(VAR_5, VAR_6->s, &VAR_4,
     &VAR_9, &VAR_10, ((void*)0));
 if (VAR_11 != 0)
  return (VAR_11);

 VAR_11 = VAR_1;
 VAR_7 = VAR_9->f_data;
 if (VAR_10 & VAR_2) {
  FUNC_1(VAR_7);
  if (VAR_7->so_emuldata == 0)
   VAR_11 = VAR_7->so_error;
  VAR_7->so_emuldata = (void *)1;
  FUNC_2(VAR_7);
 }
 FUNC_3(VAR_9, VAR_5);

 return (VAR_11);
}
