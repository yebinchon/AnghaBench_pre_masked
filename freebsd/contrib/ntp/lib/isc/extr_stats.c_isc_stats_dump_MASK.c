
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int isc_statscounter_t ;
struct TYPE_5__ {int ncounters; scalar_t__* copiedcounters; } ;
typedef TYPE_1__ isc_stats_t ;
typedef int (* isc_stats_dumper_t ) (int ,scalar_t__,void*) ;


 unsigned int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

void
FUNC_3(isc_stats_t *VAR_1, isc_stats_dumper_t VAR_2,
        void *VAR_3, unsigned int VAR_4)
{
 int VAR_5;

 FUNC_1(FUNC_0(VAR_1));

 FUNC_2(VAR_1);

 for (VAR_5 = 0; VAR_5 < VAR_1->ncounters; VAR_5++) {
  if ((VAR_4 & VAR_0) == 0 &&
      VAR_1->copiedcounters[VAR_5] == 0)
    continue;
  VAR_2((isc_statscounter_t)VAR_5, VAR_1->copiedcounters[VAR_5], VAR_3);
 }
}
