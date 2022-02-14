
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ n_matched; void* dof; } ;
struct TYPE_12__ {int dt_active; int dt_errno; TYPE_2__ dt_beganon; int * dt_vector; int * dt_errprog; } ;
typedef TYPE_1__ dtrace_hdl_t ;
typedef TYPE_2__ dtrace_enable_io_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,void*) ;
 void* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int *,int *) ;
 int VAR_14 ;

int
FUNC_7(dtrace_hdl_t *VAR_15)
{
 dtrace_enable_io_t VAR_16;
 void *VAR_17;
 int VAR_18, VAR_19;

 if (VAR_15->dt_active)
  return (FUNC_3(VAR_15, VAR_10));
 if (VAR_15->dt_errprog != ((void*)0) &&
     FUNC_6(VAR_15, VAR_15->dt_errprog, ((void*)0)) == -1 && (
     VAR_15->dt_errno != VAR_13 || VAR_15->dt_vector == ((void*)0)))
  return (-1);

 if ((VAR_17 = FUNC_5(VAR_15)) == ((void*)0))
  return (-1);

 VAR_16.dof = VAR_17;
 VAR_16.n_matched = 0;
 VAR_19 = FUNC_1(VAR_15, VAR_0, &VAR_16);
 VAR_18 = VAR_14;
 FUNC_4(VAR_15, VAR_17);

 if (VAR_19 == -1 && (VAR_18 != VAR_13 || VAR_15->dt_vector == ((void*)0)))
  return (FUNC_3(VAR_15, VAR_18));

 if (FUNC_1(VAR_15, VAR_1, &VAR_15->dt_beganon) == -1) {
  if (VAR_14 == VAR_3)
   return (FUNC_3(VAR_15, VAR_6));

  if (VAR_14 == VAR_4)
   return (FUNC_3(VAR_15, VAR_8));

  if (VAR_14 == VAR_11)
   return (FUNC_3(VAR_15, VAR_9));

  if (VAR_14 == VAR_2)
   return (FUNC_3(VAR_15, VAR_7));

  if (VAR_14 == VAR_12)
   return (FUNC_3(VAR_15, VAR_5));

  return (FUNC_3(VAR_15, VAR_14));
 }

 VAR_15->dt_active = 1;

 if (FUNC_2(VAR_15) == -1)
  return (FUNC_3(VAR_15, VAR_14));

 return (FUNC_0(VAR_15));
}
