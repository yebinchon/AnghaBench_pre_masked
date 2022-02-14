
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dt_statusgen; int dt_stopped; int * dt_status; int dt_endedon; } ;
typedef TYPE_1__ dtrace_hdl_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int *,int *) ;
 int FUNC_1 (TYPE_1__*,int ,int *) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_2 ;

int
FUNC_3(dtrace_hdl_t *VAR_3)
{
 int VAR_4 = VAR_3->dt_statusgen;

 if (VAR_3->dt_stopped)
  return (0);

 if (FUNC_1(VAR_3, VAR_1, &VAR_3->dt_endedon) == -1)
  return (FUNC_2(VAR_3, VAR_2));

 VAR_3->dt_stopped = 1;




 if (FUNC_1(VAR_3, VAR_0, &VAR_3->dt_status[VAR_4]) == -1)
  return (FUNC_2(VAR_3, VAR_2));

 if (FUNC_0(VAR_3, &VAR_3->dt_status[VAR_4 ^ 1],
     &VAR_3->dt_status[VAR_4]) == -1)
  return (-1);

 return (0);
}
