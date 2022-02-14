
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int processorid_t ;
struct TYPE_4__ {int * dts_options; int dts_activity; } ;
typedef TYPE_1__ dtrace_state_t ;
typedef int dtrace_optval_t ;
typedef int cpu_setup_t ;
struct TYPE_5__ {TYPE_1__* dta_state; } ;


 int FUNC_0 (int ) ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 TYPE_3__ VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(cpu_setup_t VAR_9, processorid_t VAR_10)
{
 FUNC_0(FUNC_1(&VAR_6));
 FUNC_3(&VAR_8);

 switch (VAR_9) {
 case 129: {
  dtrace_state_t *VAR_11;
  dtrace_optval_t *VAR_12, VAR_13, VAR_14;




  if ((VAR_11 = VAR_7.dta_state) == ((void*)0))
   break;

  if (VAR_11->dts_activity != VAR_4)
   break;

  VAR_12 = VAR_11->dts_options;
  VAR_14 = VAR_12[VAR_2];

  if (VAR_14 != VAR_5 && VAR_14 != VAR_3 && VAR_14 != VAR_10)
   break;







  VAR_13 = VAR_12[VAR_0];
  VAR_12[VAR_0] = VAR_1;
  VAR_12[VAR_2] = (dtrace_optval_t)VAR_10;

  (void) FUNC_2(VAR_11);

  VAR_12[VAR_0] = VAR_13;
  VAR_12[VAR_2] = VAR_14;

  break;
 }

 case 128:




  break;

 default:
  break;
 }

 FUNC_4(&VAR_8);
 return (0);
}
