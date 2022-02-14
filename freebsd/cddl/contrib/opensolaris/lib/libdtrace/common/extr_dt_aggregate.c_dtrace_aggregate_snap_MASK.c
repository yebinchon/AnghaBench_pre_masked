
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ hrtime_t ;
typedef scalar_t__ dtrace_optval_t ;
struct TYPE_7__ {scalar_t__ dtbd_size; } ;
struct TYPE_9__ {int dtat_ncpus; int * dtat_cpus; TYPE_1__ dtat_buf; } ;
struct TYPE_8__ {scalar_t__* dt_options; scalar_t__ dt_lastagg; int dt_active; TYPE_3__ dt_aggregate; } ;
typedef TYPE_2__ dtrace_hdl_t ;
typedef TYPE_3__ dt_aggregate_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 () ;

int
FUNC_3(dtrace_hdl_t *VAR_2)
{
 int VAR_3, VAR_4;
 dt_aggregate_t *VAR_5 = &VAR_2->dt_aggregate;
 hrtime_t VAR_6 = FUNC_2();
 dtrace_optval_t VAR_7 = VAR_2->dt_options[VAR_0];

 if (VAR_2->dt_lastagg != 0) {
  if (VAR_6 - VAR_2->dt_lastagg < VAR_7)
   return (0);

  VAR_2->dt_lastagg += VAR_7;
 } else {
  VAR_2->dt_lastagg = VAR_6;
 }

 if (!VAR_2->dt_active)
  return (FUNC_1(VAR_2, VAR_1));

 if (VAR_5->dtat_buf.dtbd_size == 0)
  return (0);

 for (VAR_3 = 0; VAR_3 < VAR_5->dtat_ncpus; VAR_3++) {
  if ((VAR_4 = FUNC_0(VAR_2, VAR_5->dtat_cpus[VAR_3])))
   return (VAR_4);
 }

 return (0);
}
