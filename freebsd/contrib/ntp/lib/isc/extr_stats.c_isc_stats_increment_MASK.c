
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ isc_statscounter_t ;
struct TYPE_5__ {scalar_t__ ncounters; } ;
typedef TYPE_1__ isc_stats_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int) ;

void
FUNC_3(isc_stats_t *VAR_0, isc_statscounter_t VAR_1) {
 FUNC_1(FUNC_0(VAR_0));
 FUNC_1(VAR_1 < VAR_0->ncounters);

 FUNC_2(VAR_0, (int)VAR_1);
}
