
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_16__ ;


typedef int wstop ;
struct ps_prochandle {int dummy; } ;
struct TYPE_18__ {int pr_what; int pr_why; } ;
typedef TYPE_1__ lwpstatus_t ;
struct TYPE_19__ {int * dt_procs; } ;
typedef TYPE_2__ dtrace_hdl_t ;
struct TYPE_20__ {int dpr_pid; int dpr_lock; int dpr_cv; scalar_t__ dpr_tid; void* dpr_done; void* dpr_quit; struct ps_prochandle* dpr_proc; } ;
typedef TYPE_3__ dt_proc_t ;
typedef int dt_proc_hash_t ;
struct TYPE_21__ {TYPE_3__* dpcd_proc; TYPE_2__* dpcd_hdl; } ;
typedef TYPE_4__ dt_proc_control_data_t ;
struct TYPE_17__ {int pr_flags; TYPE_1__ pr_lwp; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 long VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;



 int VAR_17 ;
 int FUNC_2 (struct ps_prochandle*) ;
 int FUNC_3 (struct ps_prochandle*,int ,void*) ;
 int FUNC_4 (struct ps_prochandle*) ;
 int FUNC_5 (struct ps_prochandle*,int ) ;
 int FUNC_6 (struct ps_prochandle*,int ,int ) ;
 int const FUNC_7 (struct ps_prochandle*) ;
 TYPE_16__* FUNC_8 (struct ps_prochandle*) ;
 int FUNC_9 (struct ps_prochandle*,int ,int ) ;
 int FUNC_10 (struct ps_prochandle*) ;
 int FUNC_11 (struct ps_prochandle*,int ,void*) ;
 int FUNC_12 (struct ps_prochandle*,int ,void*) ;
 int FUNC_13 (struct ps_prochandle*,int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_14 (char*,int,...) ;
 int FUNC_15 (TYPE_3__*,void*) ;
 int FUNC_16 (TYPE_3__*,void*) ;
 int FUNC_17 (TYPE_3__*) ;
 int FUNC_18 (TYPE_3__*) ;
 int FUNC_19 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_20 (TYPE_2__*,int *,TYPE_3__*,int *) ;
 int FUNC_21 (TYPE_3__*,int ) ;
 int FUNC_22 (TYPE_3__*) ;
 scalar_t__ VAR_21 ;
 int FUNC_23 (struct ps_prochandle*) ;
 TYPE_1__* FUNC_24 (struct ps_prochandle*) ;
 int FUNC_25 (struct ps_prochandle*) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int ,int *) ;
 int FUNC_30 (scalar_t__) ;
 int FUNC_31 (int,long const*,int) ;

__attribute__((used)) static void *
FUNC_32(void *VAR_22)
{
 dt_proc_control_data_t *VAR_23 = VAR_22;
 dtrace_hdl_t *VAR_24 = VAR_23->dpcd_hdl;
 dt_proc_t *VAR_25 = VAR_23->dpcd_proc;
 dt_proc_hash_t *VAR_26 = VAR_24->dt_procs;
 struct ps_prochandle *VAR_27 = VAR_25->dpr_proc;
 int VAR_28 = VAR_25->dpr_pid;






 int VAR_29 = VAR_0;







 (void) FUNC_29(VAR_17, ((void*)0));






 (void) FUNC_27(&VAR_25->dpr_lock);
 FUNC_15(VAR_25, VAR_0);
 if (FUNC_23(VAR_27) & VAR_13)

  FUNC_21(VAR_25, VAR_2);
 else
  FUNC_21(VAR_25, VAR_3);

 if (FUNC_6(VAR_27, 0, 0) == -1) {
  FUNC_14("pid %d: failed to set running: %s\n",
      (int)VAR_25->dpr_pid, FUNC_30(VAR_21));
 }

 (void) FUNC_28(&VAR_25->dpr_lock);
 while (!VAR_25->dpr_quit) {
  const lwpstatus_t *VAR_30;






  FUNC_25(VAR_27);
  if (VAR_21 == VAR_4)
   continue;


  (void) FUNC_27(&VAR_25->dpr_lock);
  switch (FUNC_7(VAR_27)) {
  case 129:



   VAR_30 = FUNC_24(VAR_27);


   FUNC_14("pid %d: proc stopped showing %d/%d\n",
       VAR_28, VAR_30->pr_why, VAR_30->pr_what);
   if (VAR_30->pr_why == VAR_14) {
    FUNC_22(VAR_25);
    (void) FUNC_28(&VAR_25->dpr_lock);
    continue;
   }
   if (VAR_30->pr_why == VAR_11 && VAR_30->pr_what == VAR_5)
    FUNC_19(VAR_24, VAR_25);
   else if (VAR_30->pr_why == VAR_15 &&
       FUNC_1(VAR_30->pr_what))
    FUNC_17(VAR_25);
   else if (VAR_30->pr_why == VAR_16 &&
       FUNC_1(VAR_30->pr_what))
    FUNC_18(VAR_25);
   else if (VAR_30->pr_why == VAR_16 &&
       FUNC_0(VAR_30->pr_what))
    FUNC_15(VAR_25, VAR_1);
   break;

  case 130:





   FUNC_14("pid %d: proc lost: %s\n",
       VAR_28, FUNC_30(VAR_21));

   VAR_25->dpr_quit = VAR_1;
   VAR_29 = VAR_1;
   break;

  case 128:
   FUNC_14("pid %d: proc died\n", VAR_28);
   VAR_25->dpr_quit = VAR_1;
   VAR_29 = VAR_1;
   break;
  }

  if (FUNC_7(VAR_27) != 128 && FUNC_6(VAR_27, 0, 0) == -1) {
   FUNC_14("pid %d: failed to set running: %s\n",
       (int)VAR_25->dpr_pid, FUNC_30(VAR_21));
  }

  (void) FUNC_28(&VAR_25->dpr_lock);
 }





 if (VAR_29)
  FUNC_20(VAR_24, VAR_26, VAR_25, ((void*)0));






 (void) FUNC_27(&VAR_25->dpr_lock);

 FUNC_16(VAR_25, VAR_1);
 VAR_25->dpr_done = VAR_1;
 VAR_25->dpr_tid = 0;

 (void) FUNC_26(&VAR_25->dpr_cv);
 (void) FUNC_28(&VAR_25->dpr_lock);

 return (((void*)0));
}
