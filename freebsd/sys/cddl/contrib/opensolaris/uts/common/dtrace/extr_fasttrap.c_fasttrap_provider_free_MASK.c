
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int p_dtrace_probes; } ;
typedef TYPE_1__ proc_t ;
typedef int pid_t ;
struct TYPE_9__ {scalar_t__ ftp_rcount; scalar_t__ ftp_ccount; scalar_t__ ftp_mcount; int ftp_cmtx; int ftp_mtx; TYPE_6__* ftp_proc; int ftp_retired; int ftp_pid; } ;
typedef TYPE_2__ fasttrap_provider_t ;
struct TYPE_10__ {scalar_t__ ftpc_acount; scalar_t__ ftpc_rcount; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(fasttrap_provider_t *VAR_0)
{
 pid_t VAR_1 = VAR_0->ftp_pid;
 proc_t *VAR_2;





 FUNC_0(VAR_0->ftp_rcount == 0);
 FUNC_0(VAR_0->ftp_ccount == 0);
 FUNC_0(VAR_0->ftp_mcount == 0);





 if (!VAR_0->ftp_retired) {
  FUNC_2(&VAR_0->ftp_proc->ftpc_acount);
  FUNC_0(VAR_0->ftp_proc->ftpc_acount <
      VAR_0->ftp_proc->ftpc_rcount);
 }

 FUNC_3(VAR_0->ftp_proc);


 FUNC_5(&VAR_0->ftp_mtx);
 FUNC_5(&VAR_0->ftp_cmtx);

 FUNC_4(VAR_0, sizeof (fasttrap_provider_t));
 if ((VAR_2 = FUNC_6(VAR_1)) == ((void*)0)) {
  return;
 }

 VAR_2->p_dtrace_probes--;

 FUNC_1(VAR_2);

}
