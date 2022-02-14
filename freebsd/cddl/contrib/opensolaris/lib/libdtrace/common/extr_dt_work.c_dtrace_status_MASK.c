
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ hrtime_t ;
typedef scalar_t__ dtrace_optval_t ;
struct TYPE_10__ {int dt_statusgen; scalar_t__* dt_options; scalar_t__ dt_laststatus; scalar_t__ dt_stopped; TYPE_6__* dt_status; int dt_active; } ;
typedef TYPE_1__ dtrace_hdl_t ;
struct TYPE_11__ {scalar_t__ dtst_filled; scalar_t__ dtst_exiting; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_1__*,TYPE_6__*,TYPE_6__*) ;
 int FUNC_1 (TYPE_1__*,int ,TYPE_6__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_9 ;
 scalar_t__ FUNC_4 () ;

int
FUNC_5(dtrace_hdl_t *VAR_10)
{
 int VAR_11 = VAR_10->dt_statusgen;
 dtrace_optval_t VAR_12 = VAR_10->dt_options[VAR_3];
 hrtime_t VAR_13 = FUNC_4();

 if (!VAR_10->dt_active)
  return (VAR_6);

 if (VAR_10->dt_stopped)
  return (VAR_8);

 if (VAR_10->dt_laststatus != 0) {
  if (VAR_13 - VAR_10->dt_laststatus < VAR_12)
   return (VAR_6);

  VAR_10->dt_laststatus += VAR_12;
 } else {
  VAR_10->dt_laststatus = VAR_13;
 }

 if (FUNC_1(VAR_10, VAR_0, &VAR_10->dt_status[VAR_11]) == -1)
  return (FUNC_2(VAR_10, VAR_9));

 VAR_10->dt_statusgen ^= 1;

 if (FUNC_0(VAR_10, &VAR_10->dt_status[VAR_10->dt_statusgen],
     &VAR_10->dt_status[VAR_11]) == -1)
  return (-1);

 if (VAR_10->dt_status[VAR_11].dtst_exiting) {
  if (!VAR_10->dt_stopped)
   (void) FUNC_3(VAR_10);

  return (VAR_4);
 }

 if (VAR_10->dt_status[VAR_11].dtst_filled == 0)
  return (VAR_7);

 if (VAR_10->dt_options[VAR_1] != VAR_2)
  return (VAR_7);

 if (!VAR_10->dt_stopped) {
  if (FUNC_3(VAR_10) == -1)
   return (-1);
 }

 return (VAR_5);
}
