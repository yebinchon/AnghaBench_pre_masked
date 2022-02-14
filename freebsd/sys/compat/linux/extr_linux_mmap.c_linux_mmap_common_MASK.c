
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmspace {scalar_t__ vm_maxsaddr; } ;
struct thread {int * td_retval; struct proc* td_proc; } ;
struct proc {TYPE_1__* p_sysent; struct vmspace* p_vmspace; } ;
struct file {scalar_t__ f_type; int f_flag; } ;
typedef int off_t ;
typedef scalar_t__ caddr_t ;
struct TYPE_2__ {scalar_t__ sv_usrstack; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int ,char*,int,int ) ;
 int FUNC_1 (int ,char*,uintptr_t,size_t,int,int,int,int) ;
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
 int FUNC_2 (struct proc*) ;
 int FUNC_3 (struct proc*) ;
 int VAR_19 ;
 size_t VAR_20 ;
 int VAR_21 ;
 int FUNC_4 (struct file*,struct thread*) ;
 int FUNC_5 (struct thread*,int,int *,struct file**) ;
 int FUNC_6 (struct thread*,uintptr_t,size_t,int,int,int,int) ;
 int FUNC_7 (struct proc*,int ) ;
 int FUNC_8 (struct thread*,int*) ;
 int VAR_22 ;

int
FUNC_9(struct thread *VAR_23, uintptr_t VAR_24, size_t VAR_25, int VAR_26,
    int VAR_27, int VAR_28, off_t VAR_29)
{
 struct proc *VAR_30 = VAR_23->td_proc;
 struct vmspace *VAR_31 = VAR_23->td_proc->p_vmspace;
 int VAR_32, VAR_33;
 struct file *VAR_34;

 FUNC_1(VAR_22, "0x%lx, %ld, %ld, 0x%08lx, %ld, 0x%lx",
     VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29);

 VAR_33 = 0;
 VAR_32 = 0;
 VAR_34 = ((void*)0);





 if (!((VAR_27 & VAR_10) ^ (VAR_27 & VAR_9)))
  return (VAR_3);

 if (VAR_27 & VAR_10)
  VAR_32 |= VAR_16;
 if (VAR_27 & VAR_9)
  VAR_32 |= VAR_15;
 if (VAR_27 & VAR_7)
  VAR_32 |= VAR_13;
 if (VAR_27 & VAR_6) {

  if ((VAR_29 & VAR_18) != 0)
   return (VAR_3);
  VAR_29 = 0;
  VAR_32 |= VAR_11;
 } else
  VAR_32 |= VAR_14;
 if (VAR_27 & VAR_8)
  VAR_32 |= VAR_17;
 FUNC_8(VAR_23, &VAR_26);



 VAR_28 = (VAR_32 & VAR_11) ? -1 : VAR_28;
 if (VAR_28 != -1) {







  VAR_33 = FUNC_5(VAR_23, VAR_28, &VAR_21, &VAR_34);
  if (VAR_33 != 0)
   return (VAR_33);
  if (VAR_34->f_type != VAR_1 && VAR_34->f_type != VAR_0) {
   FUNC_4(VAR_34, VAR_23);
   return (VAR_3);
  }


  if (!(VAR_34->f_flag & VAR_4)) {
   FUNC_4(VAR_34, VAR_23);
   return (VAR_2);
  }

  FUNC_4(VAR_34, VAR_23);
 }

 if (VAR_27 & VAR_8) {
  if ((caddr_t)VAR_24 + VAR_25 > VAR_31->vm_maxsaddr) {
   FUNC_2(VAR_30);
   VAR_31->vm_maxsaddr = (char *)VAR_30->p_sysent->sv_usrstack -
       FUNC_7(VAR_30, VAR_19);
   FUNC_3(VAR_30);
  }
  if (VAR_25 <= VAR_20 - VAR_5) {
   VAR_24 = VAR_24 - (VAR_20 - VAR_5 - VAR_25);
   VAR_25 = VAR_20 - VAR_5;
  }
 }
 if (VAR_24 != 0 && (VAR_32 & VAR_13) == 0 &&
     (VAR_32 & VAR_12) == 0) {
  VAR_33 = FUNC_6(VAR_23, VAR_24, VAR_25, VAR_26,
      VAR_32 | VAR_13 | VAR_12, VAR_28, VAR_29);
  if (VAR_33 == 0)
   goto out;
 }

 VAR_33 = FUNC_6(VAR_23, VAR_24, VAR_25, VAR_26, VAR_32, VAR_28, VAR_29);
out:
 FUNC_0(VAR_22, "return: %d (%p)", VAR_33, VAR_23->td_retval[0]);

 return (VAR_33);
}
