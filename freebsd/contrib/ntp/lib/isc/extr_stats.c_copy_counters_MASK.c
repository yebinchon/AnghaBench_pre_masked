
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int isc_uint64_t ;
struct TYPE_4__ {int ncounters; int* copiedcounters; int counterlock; TYPE_2__* counters; } ;
typedef TYPE_1__ isc_stats_t ;
typedef int isc_stat_t ;
struct TYPE_5__ {int lo; scalar_t__ hi; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int FUNC_3 (int*,TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_4(isc_stats_t *VAR_1) {
 int VAR_2;
 FUNC_0(VAR_2);
 FUNC_3(VAR_1->copiedcounters, VAR_1->counters,
        VAR_1->ncounters * sizeof(isc_stat_t));





}
