
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int* td_retval; int td_ucred; struct proc* td_proc; } ;
struct proc {int p_flag; } ;
struct file {scalar_t__ f_type; } ;
typedef int caddr_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

 int VAR_13 ;
 int VAR_14 ;

 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (struct proc*) ;
 int VAR_30 ;
 scalar_t__ FUNC_3 (struct proc*) ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_4 (struct file*,struct thread*) ;
 scalar_t__ FUNC_5 (struct thread*,int,int *,struct file**) ;
 int FUNC_6 (struct file*,int ,int ,int ,struct thread*) ;
 int FUNC_7 (struct thread*,int,char*,int ,int,int) ;
 int VAR_34 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10(struct thread *VAR_35, int VAR_36, char *VAR_37, int VAR_38, int VAR_39)
{
 struct proc *VAR_40 = VAR_35->td_proc;
 struct file *VAR_41;
 int VAR_42;
 int VAR_43, VAR_44;

 VAR_43 = 0;
 switch (VAR_38 & VAR_2) {
 case 128:
  VAR_43 |= VAR_29;
  break;
 case 129:
  VAR_43 |= VAR_27;
  break;
 default:
  VAR_43 |= VAR_26;
 }
 if (VAR_38 & VAR_9)
  VAR_43 |= VAR_25;
 if (VAR_38 & VAR_3)
  VAR_43 |= VAR_15;
 if (VAR_38 & VAR_13)
  VAR_43 |= VAR_22;
 if (VAR_38 & VAR_4)
  VAR_43 |= VAR_17;
 if (VAR_38 & VAR_12)
  VAR_43 |= VAR_25;
 if (VAR_38 & VAR_1)
  VAR_43 |= VAR_16;
 if (VAR_38 & VAR_5)
  VAR_43 |= VAR_18;
 if (VAR_38 & VAR_14)
  VAR_43 |= VAR_28;
 if (VAR_38 & VAR_8)
  VAR_43 |= VAR_21;
 if (VAR_38 & VAR_10)
  VAR_43 |= VAR_23;
 if (VAR_38 & VAR_6)
  VAR_43 |= VAR_19;
 if (VAR_38 & VAR_11)
  VAR_43 |= VAR_24;
 if (VAR_38 & VAR_7)
  VAR_43 |= VAR_20;


 VAR_44 = FUNC_7(VAR_35, VAR_36, VAR_37, VAR_32, VAR_43, VAR_39);
 if (VAR_44 != 0)
  goto done;
 if (VAR_43 & VAR_23)
  goto done;






 VAR_42 = VAR_35->td_retval[0];
 if (FUNC_5(VAR_35, VAR_42, &VAR_33, &VAR_41) == 0) {
  if (VAR_41->f_type != VAR_0) {
   FUNC_4(VAR_41, VAR_35);
   goto done;
  }
  FUNC_8(&VAR_34);
  FUNC_1(VAR_40);
  if (FUNC_3(VAR_40) && !(VAR_40->p_flag & VAR_30)) {
   FUNC_2(VAR_40);
   FUNC_9(&VAR_34);

   (void) FUNC_6(VAR_41, VAR_31, (caddr_t) 0,
       VAR_35->td_ucred, VAR_35);
  } else {
   FUNC_2(VAR_40);
   FUNC_9(&VAR_34);
  }
  FUNC_4(VAR_41, VAR_35);
 }

done:
 FUNC_0(VAR_37);
 return (VAR_44);
}
