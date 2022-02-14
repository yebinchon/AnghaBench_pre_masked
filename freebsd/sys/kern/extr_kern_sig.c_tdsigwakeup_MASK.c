
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {scalar_t__ td_priority; int td_flags; int td_sigqueue; struct proc* td_proc; } ;
struct proc {int p_sigqueue; } ;
typedef scalar_t__ sig_t ;


 int VAR_0 ;
 int FUNC_0 (struct proc*,int ) ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (struct proc*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct thread*) ;
 scalar_t__ FUNC_4 (struct thread*) ;
 scalar_t__ FUNC_5 (struct thread*) ;
 struct thread* VAR_10 ;
 int FUNC_6 (struct thread*) ;
 int FUNC_7 () ;
 int FUNC_8 (struct thread*,scalar_t__) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (struct thread*,int) ;
 int FUNC_12 (struct thread*) ;
 int FUNC_13 (struct thread*) ;

__attribute__((used)) static void
FUNC_14(struct thread *VAR_11, int VAR_12, sig_t VAR_13, int VAR_14)
{
 struct proc *VAR_15 = VAR_11->td_proc;
 int VAR_16;
 int VAR_17;

 VAR_17 = 0;
 FUNC_0(VAR_15, VAR_0);
 VAR_16 = FUNC_9(VAR_12);

 FUNC_1(VAR_15);
 FUNC_12(VAR_11);






 if (VAR_13 == VAR_5 && (VAR_16 & VAR_3) != 0 &&
     VAR_11->td_priority > VAR_1 && !FUNC_3(VAR_11))
  FUNC_8(VAR_11, VAR_1);
 if (FUNC_5(VAR_11)) {






  if ((VAR_11->td_flags & VAR_9) == 0)
   goto out;





  if ((VAR_16 & VAR_2) && VAR_13 == VAR_5) {
   FUNC_13(VAR_11);
   FUNC_2(VAR_15);
   FUNC_10(&VAR_15->p_sigqueue, VAR_12);




   FUNC_10(&VAR_11->td_sigqueue, VAR_12);
   return;
  }





  if ((VAR_16 & VAR_4) != 0 && (VAR_11->td_flags & (VAR_6 |
      VAR_8 | VAR_7)) == VAR_6)
   goto out;




  if (VAR_11->td_priority > VAR_1 && !FUNC_3(VAR_11))
   FUNC_8(VAR_11, VAR_1);

  VAR_17 = FUNC_11(VAR_11, VAR_14);
 } else {
 }
out:
 FUNC_2(VAR_15);
 FUNC_13(VAR_11);
 if (VAR_17)
  FUNC_7();
}
