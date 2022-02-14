
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int processorid_t ;
typedef scalar_t__ dtrace_optval_t ;
struct TYPE_10__ {int dtbd_size; int * dtbd_data; } ;
struct TYPE_11__ {int dtat_maxcpu; int dtat_ncpu; int* dtat_cpus; scalar_t__ dtat_ncpus; TYPE_2__ dtat_buf; } ;
struct TYPE_9__ {scalar_t__* dt_options; TYPE_3__ dt_aggregate; } ;
typedef TYPE_1__ dtrace_hdl_t ;
typedef TYPE_2__ dtrace_bufdesc_t ;
typedef TYPE_3__ dt_aggregate_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 void* FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,char*,scalar_t__*) ;
 void* FUNC_5 (int) ;

int
FUNC_6(dtrace_hdl_t *VAR_6)
{
 dt_aggregate_t *VAR_7 = &VAR_6->dt_aggregate;
 dtrace_optval_t VAR_8, VAR_9;
 dtrace_bufdesc_t *VAR_10 = &VAR_7->dtat_buf;
 int VAR_11, VAR_12;

 FUNC_0(VAR_7->dtat_maxcpu == 0);
 FUNC_0(VAR_7->dtat_ncpu == 0);
 FUNC_0(VAR_7->dtat_cpus == ((void*)0));

 VAR_7->dtat_maxcpu = FUNC_3(VAR_6, VAR_4) + 1;
 VAR_7->dtat_ncpu = FUNC_3(VAR_6, VAR_5);
 VAR_7->dtat_cpus = FUNC_5(VAR_7->dtat_ncpu * sizeof (processorid_t));

 if (VAR_7->dtat_cpus == ((void*)0))
  return (FUNC_1(VAR_6, VAR_3));




 VAR_8 = VAR_6->dt_options[VAR_0];

 VAR_11 = FUNC_4(VAR_6, "aggsize", &VAR_8);
 FUNC_0(VAR_11 == 0);

 if (VAR_8 == 0 || VAR_8 == VAR_1)
  return (0);

 VAR_10 = &VAR_7->dtat_buf;
 VAR_10->dtbd_size = VAR_8;

 if ((VAR_10->dtbd_data = FUNC_5(VAR_10->dtbd_size)) == ((void*)0))
  return (FUNC_1(VAR_6, VAR_3));




 VAR_11 = FUNC_4(VAR_6, "cpu", &VAR_9);
 FUNC_0(VAR_11 == 0 && VAR_9 != VAR_1);

 if (VAR_9 != VAR_2) {
  FUNC_0(VAR_9 < VAR_7->dtat_ncpu);
  VAR_7->dtat_cpus[VAR_7->dtat_ncpus++] = (processorid_t)VAR_9;

  return (0);
 }

 VAR_7->dtat_ncpus = 0;
 for (VAR_12 = 0; VAR_12 < VAR_7->dtat_maxcpu; VAR_12++) {
  if (FUNC_2(VAR_6, VAR_12) == -1)
   continue;

  VAR_7->dtat_cpus[VAR_7->dtat_ncpus++] = VAR_12;
 }

 return (0);
}
