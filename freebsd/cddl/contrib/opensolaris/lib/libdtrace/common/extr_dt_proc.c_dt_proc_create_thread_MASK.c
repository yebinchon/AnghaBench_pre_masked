
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint_t ;
typedef int sigset_t ;
typedef int pthread_attr_t ;
struct TYPE_8__ {int pr_wstat; } ;
typedef TYPE_1__ psinfo_t ;
typedef int dtrace_hdl_t ;
struct TYPE_9__ {int dpr_stop; int dpr_pid; int dpr_lock; int dpr_hdl; int dpr_proc; scalar_t__ dpr_done; int dpr_cv; int dpr_tid; } ;
typedef TYPE_2__ dt_proc_t ;
struct TYPE_10__ {TYPE_2__* dpcd_proc; int * dpcd_hdl; } ;
typedef TYPE_3__ dt_proc_control_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_8 ;
 int FUNC_4 (int ,TYPE_2__*,char*,int,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *,int ,TYPE_3__*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,int *,int *) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int) ;

__attribute__((used)) static int
FUNC_19(dtrace_hdl_t *VAR_9, dt_proc_t *VAR_10, uint_t VAR_11)
{
 dt_proc_control_data_t VAR_12;
 sigset_t VAR_13, VAR_14;
 pthread_attr_t VAR_15;
 int VAR_16;

 (void) FUNC_13(&VAR_10->dpr_lock);
 VAR_10->dpr_stop |= VAR_11;

 (void) FUNC_9(&VAR_15);
 (void) FUNC_10(&VAR_15, VAR_3);

 (void) FUNC_17(&VAR_13);
 (void) FUNC_16(&VAR_13, VAR_4);



 (void) FUNC_16(&VAR_13, VAR_6);


 VAR_12.dpcd_hdl = VAR_9;
 VAR_12.dpcd_proc = VAR_10;

 (void) FUNC_15(VAR_7, &VAR_13, &VAR_14);
 VAR_16 = FUNC_12(&VAR_10->dpr_tid, &VAR_15, VAR_8, &VAR_12);
 (void) FUNC_15(VAR_7, &VAR_14, ((void*)0));
 if (VAR_16 == 0) {
  while (!VAR_10->dpr_done && !(VAR_10->dpr_stop & VAR_0))
   (void) FUNC_11(&VAR_10->dpr_cv, &VAR_10->dpr_lock);







  if (VAR_10->dpr_done) {





   int VAR_17 = FUNC_6(VAR_10->dpr_proc);
   int VAR_18 = FUNC_5(VAR_10->dpr_proc);

   if (FUNC_7(VAR_10->dpr_proc) == VAR_2) {
    (void) FUNC_4(VAR_10->dpr_hdl, VAR_10,
        "failed to control pid %d: process exec'd "
        "set-id or unobservable program\n", VAR_18);
   } else if (FUNC_2(VAR_17)) {
    (void) FUNC_4(VAR_10->dpr_hdl, VAR_10,
        "failed to control pid %d: process died "
        "from signal %d\n", VAR_18, FUNC_3(VAR_17));
   } else {
    (void) FUNC_4(VAR_10->dpr_hdl, VAR_10,
        "failed to control pid %d: process exited "
        "with status %d\n", VAR_18, FUNC_1(VAR_17));
   }

   VAR_16 = VAR_1;
  }
 } else {
  (void) FUNC_4(VAR_10->dpr_hdl, VAR_10,
      "failed to create control thread for process-id %d: %s\n",
      (int)VAR_10->dpr_pid, FUNC_18(VAR_16));
 }

 if (VAR_16 == 0)
  (void) FUNC_14(&VAR_10->dpr_lock);
 (void) FUNC_8(&VAR_15);

 return (VAR_16);
}
