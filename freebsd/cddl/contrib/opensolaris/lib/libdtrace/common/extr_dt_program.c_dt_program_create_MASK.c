
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int dp_dofversion; } ;
typedef TYPE_1__ dtrace_prog_t ;
struct TYPE_10__ {int dt_programs; } ;
typedef TYPE_2__ dtrace_hdl_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 TYPE_1__* FUNC_2 (TYPE_2__*,int) ;

dtrace_prog_t *
FUNC_3(dtrace_hdl_t *VAR_2)
{
 dtrace_prog_t *VAR_3 = FUNC_2(VAR_2, sizeof (dtrace_prog_t));

 if (VAR_3 != ((void*)0)) {
  FUNC_0(&VAR_2->dt_programs, VAR_3);
 } else {
  (void) FUNC_1(VAR_2, VAR_1);
  return (((void*)0));
 }






 VAR_3->dp_dofversion = VAR_0;

 return (VAR_3);
}
