
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct unpcb {int dummy; } ;
struct thread {int td_ucred; } ;
struct socket {TYPE_1__* so_proto; } ;
struct file {struct socket* f_data; } ;
struct TYPE_2__ {int pr_flags; } ;


 int FUNC_0 (int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct thread*,struct file**,int*,int) ;
 int FUNC_2 (struct thread*,struct file*,int) ;
 int FUNC_3 (struct file*,struct thread*) ;
 int FUNC_4 (struct file*,int,int ,struct socket*,int *) ;
 int FUNC_5 (struct file*,int ,int*,int ,struct thread*) ;
 int FUNC_6 (int ,int,int,int) ;
 int VAR_10 ;
 int FUNC_7 (struct socket*) ;
 int FUNC_8 (struct socket*,struct socket*) ;
 int FUNC_9 (int,struct socket**,int,int,int ,struct thread*) ;
 struct unpcb* FUNC_10 (struct socket*) ;
 int FUNC_11 (struct thread*,struct unpcb*,struct unpcb*,struct unpcb*) ;

int
FUNC_12(struct thread *VAR_11, int VAR_12, int VAR_13, int VAR_14,
    int *VAR_15)
{
 struct file *VAR_16, *VAR_17;
 struct socket *VAR_18, *VAR_19;
 int VAR_20, VAR_21, VAR_22, VAR_23;

 FUNC_0(VAR_12, VAR_13, VAR_14);

 VAR_22 = 0;
 VAR_23 = 0;
 if ((VAR_13 & VAR_7) != 0) {
  VAR_13 &= ~VAR_7;
  VAR_22 |= VAR_5;
 }
 if ((VAR_13 & VAR_9) != 0) {
  VAR_13 &= ~VAR_9;
  VAR_23 |= VAR_2;
 }







 VAR_21 = FUNC_9(VAR_12, &VAR_18, VAR_13, VAR_14, VAR_11->td_ucred, VAR_11);
 if (VAR_21 != 0)
  return (VAR_21);
 VAR_21 = FUNC_9(VAR_12, &VAR_19, VAR_13, VAR_14, VAR_11->td_ucred, VAR_11);
 if (VAR_21 != 0)
  goto free1;

 VAR_21 = FUNC_1(VAR_11, &VAR_16, &VAR_20, VAR_22);
 if (VAR_21 != 0)
  goto free2;
 VAR_15[0] = VAR_20;
 VAR_16->f_data = VAR_18;
 VAR_21 = FUNC_1(VAR_11, &VAR_17, &VAR_20, VAR_22);
 if (VAR_21 != 0)
  goto free3;
 VAR_17->f_data = VAR_19;
 VAR_15[1] = VAR_20;
 VAR_21 = FUNC_8(VAR_18, VAR_19);
 if (VAR_21 != 0)
  goto free4;
 if (VAR_13 == VAR_8) {



   VAR_21 = FUNC_8(VAR_19, VAR_18);
   if (VAR_21 != 0)
   goto free4;
 } else if (VAR_18->so_proto->pr_flags & VAR_6) {
  struct unpcb *VAR_24, *VAR_25;
  VAR_24 = FUNC_10(VAR_18);
  VAR_25 = FUNC_10(VAR_19);




  FUNC_11(VAR_11, VAR_24, VAR_25, VAR_24);
 }
 FUNC_4(VAR_16, VAR_3 | VAR_4 | VAR_23, VAR_0, VAR_16->f_data,
     &VAR_10);
 FUNC_4(VAR_17, VAR_3 | VAR_4 | VAR_23, VAR_0, VAR_17->f_data,
     &VAR_10);
 if ((VAR_23 & VAR_2) != 0) {
  (void) FUNC_5(VAR_16, VAR_1, &VAR_23, VAR_11->td_ucred, VAR_11);
  (void) FUNC_5(VAR_17, VAR_1, &VAR_23, VAR_11->td_ucred, VAR_11);
 }
 FUNC_3(VAR_16, VAR_11);
 FUNC_3(VAR_17, VAR_11);
 return (0);
free4:
 FUNC_2(VAR_11, VAR_17, VAR_15[1]);
 FUNC_3(VAR_17, VAR_11);
free3:
 FUNC_2(VAR_11, VAR_16, VAR_15[0]);
 FUNC_3(VAR_16, VAR_11);
free2:
 if (VAR_19 != ((void*)0))
  (void)FUNC_7(VAR_19);
free1:
 if (VAR_18 != ((void*)0))
  (void)FUNC_7(VAR_18);
 return (VAR_21);
}
