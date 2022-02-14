
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct thread {int* td_retval; int td_ucred; } ;
struct TYPE_2__ {int si_note; } ;
struct socket {int so_options; int so_sigio; TYPE_1__ so_rdsel; } ;
struct sockaddr {scalar_t__ sa_len; } ;
struct filecaps {int dummy; } ;
struct file {struct socket* f_data; } ;
typedef scalar_t__ socklen_t ;
typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct thread*,int ,struct sockaddr*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (struct thread*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (struct socket*) ;
 int VAR_12 ;
 int FUNC_5 (struct socket*) ;
 int FUNC_6 (struct socket*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_7 (struct thread*,struct file**,int*,int ,struct filecaps*) ;
 int FUNC_8 (struct thread*,struct file*,int) ;
 int FUNC_9 (struct file*,struct thread*) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (struct filecaps*) ;
 int FUNC_12 (struct file*,int,int ,struct socket*,int *) ;
 int FUNC_13 (struct file*,int ,int*,int ,struct thread*) ;
 int FUNC_14 (struct sockaddr*,int ) ;
 int FUNC_15 (scalar_t__,int *) ;
 int FUNC_16 (struct thread*,int,int *,struct file**,int*,struct filecaps*) ;
 int FUNC_17 (struct sockaddr*) ;
 int FUNC_18 (int ,struct socket*) ;
 int FUNC_19 (struct socket*,struct sockaddr**) ;
 int VAR_15 ;
 int FUNC_20 (struct socket*,struct socket**,int) ;

int
FUNC_21(struct thread *VAR_16, int VAR_17, struct sockaddr **VAR_18,
    socklen_t *VAR_19, int VAR_20, struct file **VAR_21)
{
 struct file *VAR_22, *VAR_23 = ((void*)0);
 struct sockaddr *VAR_24 = ((void*)0);
 struct socket *VAR_25, *VAR_26;
 struct filecaps VAR_27;
 u_int VAR_28;
 pid_t VAR_29;
 int VAR_30, VAR_31, VAR_32;

 if (VAR_18 != ((void*)0))
  *VAR_18 = ((void*)0);

 FUNC_0(VAR_17);
 VAR_30 = FUNC_16(VAR_16, VAR_17, &VAR_14,
     &VAR_22, &VAR_28, &VAR_27);
 if (VAR_30 != 0)
  return (VAR_30);
 VAR_25 = VAR_22->f_data;
 if ((VAR_25->so_options & VAR_13) == 0) {
  VAR_30 = VAR_3;
  goto done;
 }





 VAR_30 = FUNC_7(VAR_16, &VAR_23, &VAR_31,
     (VAR_20 & VAR_11) ? VAR_10 : 0, &VAR_27);
 if (VAR_30 != 0)
  goto done;
 FUNC_4(VAR_25);
 if (!FUNC_6(VAR_25)) {
  FUNC_5(VAR_25);
  VAR_30 = VAR_3;
  goto noconnection;
 }

 VAR_30 = FUNC_20(VAR_25, &VAR_26, VAR_20);
 if (VAR_30 != 0)
  goto noconnection;


 VAR_16->td_retval[0] = VAR_31;


 FUNC_2(&VAR_25->so_rdsel.si_note, 0);

 if (VAR_20 & VAR_0) {
  VAR_29 = FUNC_10(&VAR_25->so_sigio);
  if (VAR_29 != 0)
   FUNC_15(VAR_29, &VAR_26->so_sigio);
 } else {
  VAR_28 &= ~(VAR_7 | VAR_4);
  if (VAR_20 & VAR_12)
   VAR_28 |= VAR_7;
 }

 FUNC_12(VAR_23, VAR_28, VAR_2, VAR_26, &VAR_15);

 VAR_32 = VAR_28 & VAR_7;
 (void) FUNC_13(VAR_23, VAR_6, &VAR_32, VAR_16->td_ucred, VAR_16);
 VAR_32 = VAR_28 & VAR_4;
 (void) FUNC_13(VAR_23, VAR_5, &VAR_32, VAR_16->td_ucred, VAR_16);
 VAR_30 = FUNC_19(VAR_26, &VAR_24);
 if (VAR_30 != 0)
  goto noconnection;
 if (VAR_24 == ((void*)0)) {
  if (VAR_18)
   *VAR_19 = 0;
  goto done;
 }
 FUNC_1(VAR_16, VAR_1, VAR_24);
 if (VAR_18) {

  if (*VAR_19 > VAR_24->sa_len)
   *VAR_19 = VAR_24->sa_len;




  *VAR_18 = VAR_24;
  VAR_24 = ((void*)0);
 }
noconnection:
 FUNC_14(VAR_24, VAR_9);





 if (VAR_30 != 0)
  FUNC_8(VAR_16, VAR_23, VAR_31);





done:
 if (VAR_23 == ((void*)0))
  FUNC_11(&VAR_27);
 if (VAR_21 != ((void*)0)) {
  if (VAR_30 == 0) {
   *VAR_21 = VAR_23;
   VAR_23 = ((void*)0);
  } else
   *VAR_21 = ((void*)0);
 }
 if (VAR_23 != ((void*)0))
  FUNC_9(VAR_23, VAR_16);
 FUNC_9(VAR_22, VAR_16);
 return (VAR_30);
}
