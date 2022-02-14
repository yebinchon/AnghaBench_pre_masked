
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmspace {int vm_refcnt; } ;
struct thread {struct proc* td_proc; } ;
struct proc {struct vmspace* p_vmspace; int * p_textvp; } ;
struct kaioinfo {int kaio_active_count; } ;
struct kaiocb {int (* handle_fn ) (struct kaiocb*) ;TYPE_1__* userproc; } ;
struct aioproc {int aioprocflags; struct proc* aioproc; } ;
struct TYPE_2__ {struct kaioinfo* p_aioinfo; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,struct aioproc*,int ) ;
 int FUNC_3 (int *,struct aioproc*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct kaiocb* FUNC_4 (struct aioproc*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct thread* VAR_12 ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;
 int VAR_13 ;
 scalar_t__ FUNC_7 (struct proc*,int *,int ,char*,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ VAR_14 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct kaiocb*) ;
 scalar_t__ VAR_15 ;
 struct aioproc* FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,struct aioproc*) ;
 struct vmspace* FUNC_15 (struct proc*) ;
 int FUNC_16 (struct vmspace*) ;
 int FUNC_17 (struct vmspace*) ;

__attribute__((used)) static void
FUNC_18(void *VAR_16)
{
 struct kaiocb *VAR_17;
 struct aioproc *VAR_18;
 struct kaioinfo *VAR_19;
 struct proc *VAR_20;
 struct vmspace *VAR_21;
 struct thread *VAR_22 = VAR_12;
 int VAR_23 = (intptr_t)VAR_16;






 VAR_20 = VAR_22->td_proc;
 VAR_21 = FUNC_15(VAR_20);

 FUNC_0(VAR_20->p_textvp == ((void*)0), ("kthread has a textvp"));





 VAR_18 = FUNC_13(VAR_11, VAR_3);
 VAR_18->aioproc = VAR_20;
 VAR_18->aioprocflags = 0;





 FUNC_11(&VAR_8);

 FUNC_9(&VAR_6);
 for (;;) {



  if (VAR_18->aioprocflags & VAR_0) {
   FUNC_3(&VAR_5, VAR_18, VAR_13);
   VAR_18->aioprocflags &= ~VAR_0;
  }




  while ((VAR_17 = FUNC_4(VAR_18)) != ((void*)0)) {
   FUNC_10(&VAR_6);

   VAR_19 = VAR_17->userproc->p_aioinfo;
   VAR_17->handle_fn(VAR_17);

   FUNC_9(&VAR_6);

   VAR_19->kaio_active_count--;
  }




  if (VAR_20->p_vmspace != VAR_21) {
   FUNC_10(&VAR_6);
   FUNC_17(VAR_21);
   FUNC_9(&VAR_6);




   continue;
  }

  FUNC_8(&VAR_6, VAR_2);

  FUNC_2(&VAR_5, VAR_18, VAR_13);
  VAR_18->aioprocflags |= VAR_0;





  if (FUNC_7(VAR_20, &VAR_6, VAR_4, "aiordy",
      VAR_9) == VAR_1 && FUNC_1(&VAR_7) &&
      (VAR_18->aioprocflags & VAR_0) &&
      VAR_14 > VAR_15)
   break;
 }
 FUNC_3(&VAR_5, VAR_18, VAR_13);
 VAR_14--;
 FUNC_10(&VAR_6);
 FUNC_14(VAR_11, VAR_18);
 FUNC_5(VAR_10, VAR_23);
 FUNC_16(VAR_21);

 FUNC_0(VAR_20->p_vmspace == VAR_21,
     ("AIOD: bad vmspace for exiting daemon"));
 FUNC_0(VAR_21->vm_refcnt > 1,
     ("AIOD: bad vm refcnt for exiting daemon: %d", VAR_21->vm_refcnt));
 FUNC_6(0);
}
