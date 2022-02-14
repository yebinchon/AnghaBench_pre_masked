
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nm_kctx_cfg {int type; struct nm_bdg_kthread* worker_private; int worker_fn; } ;
struct nm_bdg_polling_state {int ncpus; scalar_t__ mode; int cpu_from; int qfirst; int qlast; struct nm_bdg_kthread* kthreads; } ;
struct nm_bdg_kthread {int qfirst; int qlast; int * nmk; struct nm_bdg_polling_state* bps; } ;
typedef int kcfg ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct nm_kctx_cfg*,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct nm_bdg_kthread*) ;
 int * FUNC_2 (struct nm_kctx_cfg*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 struct nm_bdg_kthread* FUNC_5 (int) ;
 int FUNC_6 (char*,int,int,int,int) ;

__attribute__((used)) static int
FUNC_7(struct nm_bdg_polling_state *VAR_5)
{
 struct nm_kctx_cfg VAR_6;
 int VAR_7, VAR_8;

 VAR_5->kthreads = FUNC_5(sizeof(struct nm_bdg_kthread) * VAR_5->ncpus);
 if (VAR_5->kthreads == ((void*)0))
  return VAR_1;

 FUNC_0(&VAR_6, sizeof(VAR_6));
 VAR_6.worker_fn = VAR_3;
 for (VAR_7 = 0; VAR_7 < VAR_5->ncpus; VAR_7++) {
  struct nm_bdg_kthread *VAR_9 = VAR_5->kthreads + VAR_7;
  int VAR_10 = (VAR_5->ncpus == 1 &&
   VAR_5->mode == VAR_2);
  int VAR_11 = VAR_5->cpu_from + VAR_7;

  VAR_9->bps = VAR_5;
  VAR_9->qfirst = VAR_10 ? VAR_5->qfirst : VAR_11;
  VAR_9->qlast = VAR_10 ? VAR_5->qlast : VAR_9->qfirst + 1;
  if (VAR_4)
   FUNC_6("kthread %d a:%u qf:%u ql:%u", VAR_7, VAR_11, VAR_9->qfirst,
    VAR_9->qlast);

  VAR_6.type = VAR_7;
  VAR_6.worker_private = VAR_9;
  VAR_9->nmk = FUNC_2(&VAR_6, ((void*)0));
  if (VAR_9->nmk == ((void*)0)) {
   goto cleanup;
  }
  FUNC_4(VAR_9->nmk, VAR_11);
 }
 return 0;

cleanup:
 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  struct nm_bdg_kthread *VAR_12 = VAR_5->kthreads + VAR_7;
  FUNC_3(VAR_12->nmk);
 }
 FUNC_1(VAR_5->kthreads);
 return VAR_0;
}
