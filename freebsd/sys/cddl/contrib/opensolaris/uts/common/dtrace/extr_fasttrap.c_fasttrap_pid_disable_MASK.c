
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int proc_t ;
struct TYPE_4__ {scalar_t__ ftp_rcount; int ftp_marked; int ftp_mtx; scalar_t__ ftp_retired; } ;
typedef TYPE_1__ fasttrap_provider_t ;
struct TYPE_5__ {scalar_t__ ftp_id; int ftp_ntps; scalar_t__ ftp_enabled; int ftp_pid; TYPE_1__* ftp_prov; } ;
typedef TYPE_2__ fasttrap_probe_t ;
typedef scalar_t__ dtrace_id_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *,TYPE_2__*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,int,int **) ;

__attribute__((used)) static void
FUNC_9(void *VAR_3, dtrace_id_t VAR_4, void *VAR_5)
{
 fasttrap_probe_t *VAR_6 = VAR_5;
 fasttrap_provider_t *VAR_7 = VAR_6->ftp_prov;
 proc_t *VAR_8;
 int VAR_9, VAR_10 = 0;

 FUNC_0(VAR_4 == VAR_6->ftp_id);

 FUNC_6(&VAR_7->ftp_mtx);







 if (FUNC_8(VAR_6->ftp_pid, VAR_0 | VAR_1, &VAR_8) != 0)
  VAR_8 = ((void*)0);




 if (VAR_6->ftp_enabled) {
  for (VAR_9 = 0; VAR_9 < VAR_6->ftp_ntps; VAR_9++) {
   FUNC_5(VAR_8, VAR_6, VAR_9);
  }
 }

 FUNC_0(VAR_7->ftp_rcount > 0);
 VAR_7->ftp_rcount--;

 if (VAR_8 != ((void*)0)) {





  if (VAR_7->ftp_retired && !VAR_7->ftp_marked)
   VAR_10 = VAR_7->ftp_marked = 1;
  FUNC_7(&VAR_7->ftp_mtx);
 } else {




  if (VAR_7->ftp_rcount == 0 && !VAR_7->ftp_marked)
   VAR_10 = VAR_7->ftp_marked = 1;
  FUNC_7(&VAR_7->ftp_mtx);
 }

 if (VAR_10)
  FUNC_4();





 if (!VAR_6->ftp_enabled)
  return;

 VAR_6->ftp_enabled = 0;




 FUNC_3();
}
