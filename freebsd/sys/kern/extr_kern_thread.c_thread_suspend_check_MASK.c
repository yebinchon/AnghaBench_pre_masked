
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int td_flags; struct proc* td_proc; } ;
struct proc {int p_flag; scalar_t__ p_numthreads; scalar_t__ p_suspcount; int p_boundary_count; struct thread* p_singlethread; TYPE_1__* p_sysent; } ;
struct TYPE_2__ {int (* sv_thread_detach ) (struct thread*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (struct proc*,int ) ;
 int FUNC_3 (struct proc*) ;
 int FUNC_4 (struct proc*) ;
 int FUNC_5 (struct proc*) ;
 scalar_t__ FUNC_6 (struct proc*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_7 (struct thread*) ;
 scalar_t__ FUNC_8 (struct thread*) ;
 scalar_t__ FUNC_9 (int ) ;
 struct thread* VAR_14 ;
 int FUNC_10 (struct thread*) ;
 int FUNC_11 () ;
 int FUNC_12 (int,int *) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (struct thread*) ;
 int FUNC_16 (struct thread*) ;
 int FUNC_17 (struct proc*) ;
 scalar_t__ FUNC_18 () ;
 int FUNC_19 (struct thread*) ;
 int FUNC_20 (struct thread*) ;
 int FUNC_21 (struct thread*,struct proc*,int) ;
 int FUNC_22 (struct thread*) ;

int
FUNC_23(int VAR_15)
{
 struct thread *VAR_16;
 struct proc *VAR_17;
 int VAR_18;

 VAR_16 = VAR_14;
 VAR_17 = VAR_16->td_proc;
 FUNC_13(&VAR_2, VAR_3);
 FUNC_2(VAR_17, VAR_4);
 while (FUNC_18()) {
  if (FUNC_6(VAR_17) == VAR_7) {
   FUNC_0(VAR_17->p_singlethread != ((void*)0),
       ("singlethread not set"));






   if (VAR_17->p_singlethread == VAR_16)
    return (0);
  }
  if ((VAR_17->p_flag & VAR_6) && VAR_15)
   return (VAR_0);


  if (FUNC_6(VAR_17) == VAR_7 &&
      (VAR_17->p_flag & VAR_5) && VAR_15)
   return (VAR_1);




  if ((VAR_16->td_flags & VAR_11) != 0) {
   FUNC_0(VAR_15,
       ("TDF_SBDRY set for unsafe thread_suspend_check"));
   FUNC_0((VAR_16->td_flags & (VAR_12 | VAR_13)) !=
       (VAR_12 | VAR_13),
       ("both TDF_SEINTR and TDF_SERESTART"));
   return (FUNC_8(VAR_16) ? FUNC_7(VAR_16) : 0);
  }






  if ((VAR_17->p_flag & VAR_6) && (VAR_17->p_singlethread != VAR_16)) {
   FUNC_5(VAR_17);





   if (FUNC_9(VAR_17->p_sysent->sv_thread_detach != ((void*)0)))
    (VAR_17->p_sysent->sv_thread_detach)(VAR_16);
   FUNC_22(VAR_16);
   FUNC_10(VAR_16);
   FUNC_14("stopped thread did not exit");
  }

  FUNC_3(VAR_17);
  FUNC_17(VAR_17);
  if (FUNC_6(VAR_17) == VAR_7) {
   if (VAR_17->p_numthreads == VAR_17->p_suspcount + 1) {
    FUNC_16(VAR_17->p_singlethread);
    VAR_18 = FUNC_21(
        VAR_17->p_singlethread, VAR_17, 0);
    FUNC_20(VAR_17->p_singlethread);
    if (VAR_18)
     FUNC_11();
   }
  }
  FUNC_5(VAR_17);
  FUNC_16(VAR_16);




  FUNC_19(VAR_16);
  if (VAR_15 == 0) {
   VAR_17->p_boundary_count++;
   VAR_16->td_flags |= VAR_10;
  }
  FUNC_4(VAR_17);
  FUNC_12(VAR_9 | VAR_8, ((void*)0));
  FUNC_20(VAR_16);
  FUNC_1(VAR_17);
 }
 return (0);
}
