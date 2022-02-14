
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_ucred; } ;
struct socket {int so_state; int so_error; int so_lock; int so_timeo; } ;
struct sockaddr {int dummy; } ;
struct file {struct socket* f_data; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct thread*,int,struct sockaddr*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct thread*) ;
 scalar_t__ FUNC_3 (struct thread*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct socket*) ;
 int FUNC_5 (struct socket*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (struct file*,struct thread*) ;
 int FUNC_7 (struct thread*,int,int *,struct file**,int *,int *) ;
 int FUNC_8 (struct sockaddr*) ;
 int FUNC_9 (int ,struct socket*,struct sockaddr*) ;
 int FUNC_10 (int *,int *,int,char*,int ) ;
 int FUNC_11 (struct socket*,struct sockaddr*,struct thread*) ;
 int FUNC_12 (int,struct socket*,struct sockaddr*,struct thread*) ;

int
FUNC_13(struct thread *VAR_12, int VAR_13, int VAR_14, struct sockaddr *VAR_15)
{
 struct socket *VAR_16;
 struct file *VAR_17;
 int VAR_18, VAR_19 = 0;






 FUNC_0(VAR_14);
 FUNC_1(VAR_12, VAR_13, VAR_15);
 VAR_18 = FUNC_7(VAR_12, VAR_14, &VAR_11,
     &VAR_17, ((void*)0), ((void*)0));
 if (VAR_18 != 0)
  return (VAR_18);
 VAR_16 = VAR_17->f_data;
 if (VAR_16->so_state & VAR_9) {
  VAR_18 = VAR_1;
  goto done1;
 }
 if (VAR_13 == VAR_0)
  VAR_18 = FUNC_11(VAR_16, VAR_15, VAR_12);
 else
  VAR_18 = FUNC_12(VAR_13, VAR_16, VAR_15, VAR_12);
 if (VAR_18 != 0)
  goto bad;
 if ((VAR_16->so_state & VAR_10) && (VAR_16->so_state & VAR_9)) {
  VAR_18 = VAR_3;
  goto done1;
 }
 FUNC_4(VAR_16);
 while ((VAR_16->so_state & VAR_9) && VAR_16->so_error == 0) {
  VAR_18 = FUNC_10(&VAR_16->so_timeo, &VAR_16->so_lock, VAR_8 | VAR_7,
      "connec", 0);
  if (VAR_18 != 0) {
   if (VAR_18 == VAR_4 || VAR_18 == VAR_5)
    VAR_19 = 1;
   break;
  }
 }
 if (VAR_18 == 0) {
  VAR_18 = VAR_16->so_error;
  VAR_16->so_error = 0;
 }
 FUNC_5(VAR_16);
bad:
 if (!VAR_19)
  VAR_16->so_state &= ~VAR_9;
 if (VAR_18 == VAR_5)
  VAR_18 = VAR_4;
done1:
 FUNC_6(VAR_17, VAR_12);
 return (VAR_18);
}
