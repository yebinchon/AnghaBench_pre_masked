
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ps_prochandle {int dummy; } ;
typedef int pid_t ;
struct TYPE_7__ {TYPE_3__* dt_procs; } ;
typedef TYPE_1__ dtrace_hdl_t ;
struct TYPE_8__ {int dpr_pid; struct TYPE_8__* dpr_hash; struct ps_prochandle* dpr_proc; } ;
typedef TYPE_2__ dt_proc_t ;
struct TYPE_9__ {int dph_hashlen; TYPE_2__** dph_hash; } ;
typedef TYPE_3__ dt_proc_hash_t ;
struct TYPE_10__ {int pr_pid; } ;


 TYPE_6__* FUNC_0 (struct ps_prochandle*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ps_prochandle*) ;

dt_proc_t *
FUNC_3(dtrace_hdl_t *VAR_0, struct ps_prochandle *VAR_1, int VAR_2)
{
 dt_proc_hash_t *VAR_3 = VAR_0->dt_procs;



 pid_t VAR_4 = FUNC_2(VAR_1);

 dt_proc_t *VAR_5, **VAR_6 = &VAR_3->dph_hash[VAR_4 & (VAR_3->dph_hashlen - 1)];

 for (VAR_5 = *VAR_6; VAR_5 != ((void*)0); VAR_5 = VAR_5->dpr_hash) {
  if (VAR_5->dpr_pid == VAR_4)
   break;
  else
   VAR_6 = &VAR_5->dpr_hash;
 }

 FUNC_1(VAR_5 != ((void*)0));
 FUNC_1(VAR_5->dpr_proc == VAR_1);

 if (VAR_2)
  *VAR_6 = VAR_5->dpr_hash;

 return (VAR_5);
}
