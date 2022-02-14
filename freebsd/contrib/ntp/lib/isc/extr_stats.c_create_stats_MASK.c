
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int isc_uint64_t ;
struct TYPE_5__ {int references; int ncounters; int lock; struct TYPE_5__* copiedcounters; struct TYPE_5__* counters; int magic; int * mctx; int counterlock; } ;
typedef TYPE_1__ isc_stats_t ;
typedef int isc_stat_t ;
typedef scalar_t__ isc_result_t ;
typedef int isc_mem_t ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int **) ;
 void* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,TYPE_1__*,int) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;

__attribute__((used)) static isc_result_t
FUNC_8(isc_mem_t *VAR_3, int VAR_4, isc_stats_t **VAR_5) {
 isc_stats_t *VAR_6;
 isc_result_t VAR_7 = VAR_1;

 FUNC_1(VAR_5 != ((void*)0) && *VAR_5 == ((void*)0));

 VAR_6 = FUNC_3(VAR_3, sizeof(*VAR_6));
 if (VAR_6 == ((void*)0))
  return (VAR_0);

 VAR_7 = FUNC_5(&VAR_6->lock);
 if (VAR_7 != VAR_1)
  goto clean_stats;

 VAR_6->counters = FUNC_3(VAR_3, sizeof(isc_stat_t) * VAR_4);
 if (VAR_6->counters == ((void*)0)) {
  VAR_7 = VAR_0;
  goto clean_mutex;
 }
 VAR_6->copiedcounters = FUNC_3(VAR_3,
         sizeof(isc_uint64_t) * VAR_4);
 if (VAR_6->copiedcounters == ((void*)0)) {
  VAR_7 = VAR_0;
  goto clean_counters;
 }







 VAR_6->references = 1;
 FUNC_7(VAR_6->counters, 0, sizeof(isc_stat_t) * VAR_4);
 VAR_6->mctx = ((void*)0);
 FUNC_2(VAR_3, &VAR_6->mctx);
 VAR_6->ncounters = VAR_4;
 VAR_6->magic = VAR_2;

 *VAR_5 = VAR_6;

 return (VAR_7);

clean_counters:
 FUNC_4(VAR_3, VAR_6->counters, sizeof(isc_stat_t) * VAR_4);







clean_mutex:
 FUNC_0(&VAR_6->lock);

clean_stats:
 FUNC_4(VAR_3, VAR_6, sizeof(*VAR_6));

 return (VAR_7);
}
