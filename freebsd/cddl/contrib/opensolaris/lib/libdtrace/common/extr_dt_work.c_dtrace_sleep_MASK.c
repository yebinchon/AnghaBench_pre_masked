
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct timespec {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;
typedef scalar_t__ hrtime_t ;
typedef scalar_t__ dtrace_optval_t ;
struct TYPE_10__ {scalar_t__* dt_options; int dt_procarg; int (* dt_prochdlr ) (int ,char*,int ) ;TYPE_4__* dt_procs; } ;
typedef TYPE_2__ dtrace_hdl_t ;
struct TYPE_11__ {char* dprn_errmsg; struct TYPE_11__* dprn_next; TYPE_1__* dprn_dpr; } ;
typedef TYPE_3__ dt_proc_notify_t ;
struct TYPE_12__ {int dph_lock; TYPE_3__* dph_notify; int dph_cv; } ;
typedef TYPE_4__ dt_proc_hash_t ;
struct TYPE_13__ {int dtslt_option; uintptr_t dtslt_offs; } ;
struct TYPE_9__ {int dpr_proc; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_8__* VAR_7 ;
 int FUNC_0 (int ,struct timespec*) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *,int *,struct timespec*) ;
 int FUNC_4 (int *,int *,struct timespec*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,char*,int ) ;

void
FUNC_8(dtrace_hdl_t *VAR_8)
{
 dt_proc_hash_t *VAR_9 = VAR_8->dt_procs;
 dtrace_optval_t VAR_10 = VAR_8->dt_options[VAR_1];
 dt_proc_notify_t *VAR_11;

 hrtime_t VAR_12 = VAR_5;
 struct timespec VAR_13;
 hrtime_t VAR_14;
 int VAR_15;

 for (VAR_15 = 0; VAR_7[VAR_15].dtslt_option < VAR_3; VAR_15++) {
  uintptr_t VAR_16 = (uintptr_t)VAR_8 + VAR_7[VAR_15].dtslt_offs;
  int VAR_17 = VAR_7[VAR_15].dtslt_option;
  dtrace_optval_t VAR_18 = VAR_8->dt_options[VAR_17];






  if (VAR_10 != VAR_2 &&
      VAR_7[VAR_15].dtslt_option != VAR_4)
   continue;

  if (*((hrtime_t *)VAR_16) + VAR_18 < VAR_12)
   VAR_12 = *((hrtime_t *)VAR_16) + VAR_18;
 }

 (void) FUNC_5(&VAR_9->dph_lock);

 VAR_14 = FUNC_2();

 if (VAR_12 < VAR_14) {
  (void) FUNC_6(&VAR_9->dph_lock);
  return;
 }
 VAR_12 -= VAR_14;
 FUNC_0(VAR_0,&VAR_13);
 VAR_13.tv_sec += VAR_12 / VAR_6;
 VAR_13.tv_nsec += VAR_12 % VAR_6;
 while (VAR_13.tv_nsec > VAR_6) {
  VAR_13.tv_sec += 1;
  VAR_13.tv_nsec -= VAR_6;
 }






 (void) FUNC_4(&VAR_9->dph_cv, &VAR_9->dph_lock, &VAR_13);


 while ((VAR_11 = VAR_9->dph_notify) != ((void*)0)) {
  if (VAR_8->dt_prochdlr != ((void*)0)) {
   char *VAR_19 = VAR_11->dprn_errmsg;
   if (*VAR_19 == '\0')
    VAR_19 = ((void*)0);

   VAR_8->dt_prochdlr(VAR_11->dprn_dpr->dpr_proc, VAR_19,
       VAR_8->dt_procarg);
  }

  VAR_9->dph_notify = VAR_11->dprn_next;
  FUNC_1(VAR_8, VAR_11);
 }

 (void) FUNC_6(&VAR_9->dph_lock);
}
