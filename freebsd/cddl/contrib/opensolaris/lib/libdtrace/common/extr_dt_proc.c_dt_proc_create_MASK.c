
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


struct ps_prochandle {int dummy; } ;
typedef int proc_child_func ;
struct TYPE_14__ {int dt_prcmode; int dt_proc_env; TYPE_3__* dt_procs; } ;
typedef TYPE_1__ dtrace_hdl_t ;
struct TYPE_15__ {int dpr_pid; struct ps_prochandle* dpr_proc; int dpr_refs; struct TYPE_15__* dpr_hash; TYPE_1__* dpr_hdl; int dpr_cv; int dpr_lock; } ;
typedef TYPE_2__ dt_proc_t ;
struct TYPE_16__ {int dph_hashlen; int dph_lrulist; TYPE_2__** dph_hash; } ;
typedef TYPE_3__ dt_proc_hash_t ;
struct TYPE_13__ {int pr_pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ps_prochandle*,int ) ;
 TYPE_12__* FUNC_2 (struct ps_prochandle*) ;
 int FUNC_3 (struct ps_prochandle*,int ) ;
 struct ps_prochandle* FUNC_4 (char const*,char* const*,int ,int*,int *,int ) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,TYPE_2__*,int ) ;
 struct ps_prochandle* FUNC_8 (TYPE_1__*,TYPE_2__*,char*,char const*,int ) ;
 TYPE_2__* FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (char const*,char* const*,int ,int *,void*,struct ps_prochandle**) ;
 int FUNC_11 (struct ps_prochandle*) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,int *) ;

struct ps_prochandle *
FUNC_14(dtrace_hdl_t *VAR_2, const char *VAR_3, char *const *VAR_4,
    proc_child_func *VAR_5, void *VAR_6)
{
 dt_proc_hash_t *VAR_7 = VAR_2->dt_procs;
 dt_proc_t *VAR_8;
 int VAR_9;

 if ((VAR_8 = FUNC_9(VAR_2, sizeof (dt_proc_t))) == ((void*)0))
  return (((void*)0));

 (void) FUNC_13(&VAR_8->dpr_lock, ((void*)0));
 (void) FUNC_12(&VAR_8->dpr_cv, ((void*)0));
 if ((VAR_9 = FUNC_10(VAR_3, VAR_4, VAR_2->dt_proc_env, VAR_5, VAR_6,
     &VAR_8->dpr_proc)) != 0) {
  return (FUNC_8(VAR_2, VAR_8,
      "failed to execute %s: %s\n", VAR_3, FUNC_0(VAR_9)));
 }


 VAR_8->dpr_hdl = VAR_2;



 VAR_8->dpr_pid = FUNC_11(VAR_8->dpr_proc);


 (void) FUNC_3(VAR_8->dpr_proc, VAR_1);
 (void) FUNC_1(VAR_8->dpr_proc, VAR_0);

 if (FUNC_7(VAR_2, VAR_8, VAR_2->dt_prcmode) != 0)
  return (((void*)0));

 VAR_8->dpr_hash = VAR_7->dph_hash[VAR_8->dpr_pid & (VAR_7->dph_hashlen - 1)];
 VAR_7->dph_hash[VAR_8->dpr_pid & (VAR_7->dph_hashlen - 1)] = VAR_8;
 FUNC_6(&VAR_7->dph_lrulist, VAR_8);

 FUNC_5("created pid %d\n", (int)VAR_8->dpr_pid);
 VAR_8->dpr_refs++;

 return (VAR_8->dpr_proc);
}
