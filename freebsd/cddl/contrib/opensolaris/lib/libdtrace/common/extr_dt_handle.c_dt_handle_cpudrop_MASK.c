
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u_longlong_t ;
typedef int str ;
typedef int processorid_t ;
struct TYPE_7__ {scalar_t__ (* dt_drophdlr ) (TYPE_2__*,int ) ;int dt_droparg; scalar_t__ dt_droptags; } ;
typedef TYPE_1__ dtrace_hdl_t ;
typedef scalar_t__ dtrace_dropkind_t ;
struct TYPE_8__ {int dtdda_drops; char* dtdda_msg; scalar_t__ dtdda_kind; int dtdda_cpu; TYPE_1__* dtdda_handle; } ;
typedef TYPE_2__ dtrace_dropdata_t ;
typedef int drop ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 char* FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (char*,int,char*,char*,...) ;
 size_t FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int ) ;

int
FUNC_7(dtrace_hdl_t *VAR_4, processorid_t VAR_5,
    dtrace_dropkind_t VAR_6, uint64_t VAR_7)
{
 dtrace_dropdata_t VAR_8;
 char VAR_9[80], *VAR_10;
 int VAR_11;

 FUNC_0(VAR_6 == VAR_1 || VAR_6 == VAR_0);

 FUNC_1(&VAR_8, sizeof (VAR_8));
 VAR_8.dtdda_handle = VAR_4;
 VAR_8.dtdda_cpu = VAR_5;
 VAR_8.dtdda_kind = VAR_6;
 VAR_8.dtdda_drops = VAR_7;
 VAR_8.dtdda_msg = VAR_9;

 if (VAR_4->dt_droptags) {
  (void) FUNC_4(VAR_9, sizeof (VAR_9), "[%s] ", FUNC_2(VAR_6));
  VAR_10 = &VAR_9[FUNC_5(VAR_9)];
  VAR_11 = sizeof (VAR_9) - (VAR_10 - VAR_9);
 } else {
  VAR_10 = VAR_9;
  VAR_11 = sizeof (VAR_9);
 }

 (void) FUNC_4(VAR_10, VAR_11, "%llu %sdrop%s on CPU %d\n",
     (u_longlong_t)VAR_7,
     VAR_6 == VAR_1 ? "" : "aggregation ",
     VAR_7 > 1 ? "s" : "", VAR_5);

 if (VAR_4->dt_drophdlr == ((void*)0))
  return (FUNC_3(VAR_4, VAR_3));

 if ((*VAR_4->dt_drophdlr)(&VAR_8, VAR_4->dt_droparg) == VAR_2)
  return (FUNC_3(VAR_4, VAR_3));

 return (0);
}
