
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dts_naggregations; TYPE_2__** dts_aggregations; } ;
typedef TYPE_1__ dtrace_state_t ;
struct TYPE_6__ {int dtag_id; } ;
typedef TYPE_2__ dtrace_aggregation_t ;
typedef int dtrace_aggid_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;

__attribute__((used)) static dtrace_aggregation_t *
FUNC_2(dtrace_state_t *VAR_1, dtrace_aggid_t VAR_2)
{
 dtrace_aggregation_t *VAR_3;

 FUNC_0(FUNC_1(&VAR_0));

 if (VAR_2 == 0 || VAR_2 > VAR_1->dts_naggregations)
  return (((void*)0));

 FUNC_0(VAR_1->dts_naggregations > 0 && VAR_1->dts_aggregations != ((void*)0));
 FUNC_0((VAR_3 = VAR_1->dts_aggregations[VAR_2 - 1]) == ((void*)0) ||
     VAR_3->dtag_id == VAR_2);

 return (VAR_1->dts_aggregations[VAR_2 - 1]);
}
