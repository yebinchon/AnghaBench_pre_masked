
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int s ;
struct TYPE_13__ {scalar_t__ di_vers; } ;
struct TYPE_12__ {scalar_t__ di_vers; } ;
struct TYPE_15__ {TYPE_2__ dx_ptrid; TYPE_1__ dx_souid; } ;
struct TYPE_14__ {scalar_t__ dt_vmax; int dt_tls; int dt_globals; int dt_aggs; int dt_macros; TYPE_4__ dt_xlators; } ;
typedef TYPE_3__ dtrace_hdl_t ;
typedef TYPE_4__ dt_xlator_t ;
typedef scalar_t__ dt_version_t ;
typedef int dt_idhash_f ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int *,TYPE_3__*) ;
 int FUNC_2 (TYPE_4__*,TYPE_4__*) ;
 TYPE_4__* FUNC_3 (TYPE_4__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (scalar_t__,char*,int) ;

int
FUNC_6(dtrace_hdl_t *VAR_3, dt_version_t VAR_4)
{
 char VAR_5[VAR_0];
 dt_xlator_t *VAR_6, *VAR_7;

 if (VAR_4 > VAR_3->dt_vmax)
  return (FUNC_4(VAR_3, VAR_1));
 else if (VAR_4 == VAR_3->dt_vmax)
  return (0);

 FUNC_0("reducing api version to %s\n",
     FUNC_5(VAR_4, VAR_5, sizeof (VAR_5)));

 VAR_3->dt_vmax = VAR_4;

 for (VAR_6 = FUNC_3(&VAR_3->dt_xlators); VAR_6 != ((void*)0); VAR_6 = VAR_7) {
  VAR_7 = FUNC_3(VAR_6);
  if ((VAR_6->dx_souid.di_vers != 0 && VAR_6->dx_souid.di_vers > VAR_4) ||
      (VAR_6->dx_ptrid.di_vers != 0 && VAR_6->dx_ptrid.di_vers > VAR_4))
   FUNC_2(&VAR_3->dt_xlators, VAR_6);
 }

 (void) FUNC_1(VAR_3->dt_macros, (dt_idhash_f *)VAR_2, VAR_3);
 (void) FUNC_1(VAR_3->dt_aggs, (dt_idhash_f *)VAR_2, VAR_3);
 (void) FUNC_1(VAR_3->dt_globals, (dt_idhash_f *)VAR_2, VAR_3);
 (void) FUNC_1(VAR_3->dt_tls, (dt_idhash_f *)VAR_2, VAR_3);

 return (0);
}
