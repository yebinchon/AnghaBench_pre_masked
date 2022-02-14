
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ dtrace_workstatus_t ;
typedef scalar_t__ dtrace_optval_t ;
struct TYPE_6__ {scalar_t__* dt_options; int dt_lastagg; int dt_lastswitch; } ;
typedef TYPE_1__ dtrace_hdl_t ;
typedef int dtrace_consume_rec_f ;
typedef int dtrace_consume_probe_f ;
typedef int FILE ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;





 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int *,int *,int *,void*) ;
 int FUNC_3 (TYPE_1__*) ;

dtrace_workstatus_t
FUNC_4(dtrace_hdl_t *VAR_5, FILE *VAR_6,
    dtrace_consume_probe_f *VAR_7, dtrace_consume_rec_f *VAR_8, void *VAR_9)
{
 int VAR_10 = FUNC_3(VAR_5);
 dtrace_optval_t VAR_11 = VAR_5->dt_options[VAR_0];
 dtrace_workstatus_t VAR_12;

 switch (VAR_10) {
 case 132:
 case 131:
 case 128:





  VAR_5->dt_lastswitch = 0;
  VAR_5->dt_lastagg = 0;
  VAR_12 = VAR_2;
  break;

 case 130:
 case 129:
  VAR_12 = VAR_4;
  break;

 case -1:
  return (VAR_3);
 }

 if ((VAR_10 == 130 || VAR_10 == 129) &&
     VAR_11 != VAR_1) {






  FUNC_0(VAR_12 == VAR_4);
  return (VAR_12);
 }

 if (FUNC_1(VAR_5) == -1)
  return (VAR_3);

 if (FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9) == -1)
  return (VAR_3);

 return (VAR_12);
}
