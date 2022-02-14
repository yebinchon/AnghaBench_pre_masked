
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nm_bdg_polling_state {int ncpus; int stopped; struct nm_bdg_kthread* kthreads; } ;
struct nm_bdg_kthread {int nmk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct nm_bdg_polling_state *VAR_0)
{
 int VAR_1;

 if (!VAR_0)
  return;

 for (VAR_1 = 0; VAR_1 < VAR_0->ncpus; VAR_1++) {
  struct nm_bdg_kthread *VAR_2 = VAR_0->kthreads + VAR_1;
  FUNC_1(VAR_2->nmk);
  FUNC_0(VAR_2->nmk);
 }
 VAR_0->stopped = 1;
}
