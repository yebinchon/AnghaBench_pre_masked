
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ references; int ncounters; int mctx; int counterlock; int lock; int counters; int copiedcounters; } ;
typedef TYPE_1__ isc_stats_t ;
typedef int isc_stat_t ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int *,TYPE_1__*,int) ;
 int FUNC_7 (int *) ;

void
FUNC_8(isc_stats_t **VAR_0) {
 isc_stats_t *VAR_1;

 FUNC_3(VAR_0 != ((void*)0) && FUNC_1(*VAR_0));

 VAR_1 = *VAR_0;
 *VAR_0 = ((void*)0);

 FUNC_2(&VAR_1->lock);
 VAR_1->references--;
 FUNC_4(&VAR_1->lock);

 if (VAR_1->references == 0) {
  FUNC_5(VAR_1->mctx, VAR_1->copiedcounters,
       sizeof(isc_stat_t) * VAR_1->ncounters);
  FUNC_5(VAR_1->mctx, VAR_1->counters,
       sizeof(isc_stat_t) * VAR_1->ncounters);
  FUNC_0(&VAR_1->lock);



  FUNC_6(&VAR_1->mctx, VAR_1, sizeof(*VAR_1));
 }
}
