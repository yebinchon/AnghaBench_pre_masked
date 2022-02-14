
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int pd ;
struct TYPE_14__ {int dt_errno; } ;
typedef TYPE_1__ dtrace_hdl_t ;
typedef int (* dtrace_aggregate_walk_f ) (TYPE_1__*,int ,TYPE_3__*) ;
struct TYPE_15__ {int dtpa_allunprint; int * dtpa_fp; TYPE_1__* dtpa_dtp; } ;
typedef TYPE_3__ dt_print_aggdata_t ;
typedef int FILE ;


 int FUNC_0 (TYPE_3__*,int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ,TYPE_3__*) ;
 int FUNC_3 (TYPE_1__*,int ,TYPE_3__*) ;

int
FUNC_4(dtrace_hdl_t *VAR_1, FILE *VAR_2,
    dtrace_aggregate_walk_f *VAR_3)
{
 dt_print_aggdata_t VAR_4;

 FUNC_0(&VAR_4, sizeof (VAR_4));

 VAR_4.dtpa_dtp = VAR_1;
 VAR_4.dtpa_fp = VAR_2;
 VAR_4.dtpa_allunprint = 1;

 if (VAR_3 == ((void*)0))
  VAR_3 = FUNC_2;

 if ((*VAR_3)(VAR_1, VAR_0, &VAR_4) == -1)
  return (FUNC_1(VAR_1, VAR_1->dt_errno));

 return (0);
}
