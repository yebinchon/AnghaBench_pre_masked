
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int* td_retval; int td_ucred; } ;
struct socket {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct thread*,struct file**,int*,int) ;
 int FUNC_2 (struct thread*,struct file*,int) ;
 int FUNC_3 (struct file*,struct thread*) ;
 int FUNC_4 (struct file*,int,int ,struct socket*,int *) ;
 int FUNC_5 (struct file*,int ,int*,int ,struct thread*) ;
 int FUNC_6 (int ,int,int,int) ;
 int VAR_8 ;
 int FUNC_7 (int,struct socket**,int,int,int ,struct thread*) ;

int
FUNC_8(struct thread *VAR_9, int VAR_10, int VAR_11, int VAR_12)
{
 struct socket *VAR_13;
 struct file *VAR_14;
 int VAR_15, VAR_16, VAR_17, VAR_18;

 FUNC_0(VAR_10, VAR_11, VAR_12);

 VAR_17 = 0;
 VAR_18 = 0;
 if ((VAR_11 & VAR_6) != 0) {
  VAR_11 &= ~VAR_6;
  VAR_17 |= VAR_5;
 }
 if ((VAR_11 & VAR_7) != 0) {
  VAR_11 &= ~VAR_7;
  VAR_18 |= VAR_2;
 }






 VAR_16 = FUNC_1(VAR_9, &VAR_14, &VAR_15, VAR_17);
 if (VAR_16 != 0)
  return (VAR_16);

 VAR_16 = FUNC_7(VAR_10, &VAR_13, VAR_11, VAR_12, VAR_9->td_ucred, VAR_9);
 if (VAR_16 != 0) {
  FUNC_2(VAR_9, VAR_14, VAR_15);
 } else {
  FUNC_4(VAR_14, VAR_3 | VAR_4 | VAR_18, VAR_0, VAR_13, &VAR_8);
  if ((VAR_18 & VAR_2) != 0)
   (void) FUNC_5(VAR_14, VAR_1, &VAR_18, VAR_9->td_ucred, VAR_9);
  VAR_9->td_retval[0] = VAR_15;
 }
 FUNC_3(VAR_14, VAR_9);
 return (VAR_16);
}
