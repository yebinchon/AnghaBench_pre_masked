
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nm_bdg_polling_state {int stopped; int ncpus; struct nm_bdg_kthread* kthreads; } ;
struct nm_bdg_kthread {int nmk; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int
FUNC_3(struct nm_bdg_polling_state *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;

 if (!VAR_1) {
  FUNC_2("polling is not configured");
  return VAR_0;
 }
 VAR_1->stopped = 0;

 for (VAR_3 = 0; VAR_3 < VAR_1->ncpus; VAR_3++) {
  struct nm_bdg_kthread *VAR_5 = VAR_1->kthreads + VAR_3;
  VAR_2 = FUNC_0(VAR_5->nmk);
  if (VAR_2) {
   FUNC_2("error in nm_kthread_start(): %d", VAR_2);
   goto cleanup;
  }
 }
 return 0;

cleanup:
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  struct nm_bdg_kthread *VAR_6 = VAR_1->kthreads + VAR_3;
  FUNC_1(VAR_6->nmk);
 }
 VAR_1->stopped = 1;
 return VAR_2;
}
