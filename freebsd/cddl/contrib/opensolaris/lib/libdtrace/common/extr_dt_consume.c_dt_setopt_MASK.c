
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int optdata ;
struct TYPE_4__ {char const* dtsda_option; int * dtsda_handle; int const* dtsda_probe; int dtsda_newval; int dtsda_oldval; } ;
typedef TYPE_1__ dtrace_setoptdata_t ;
typedef int dtrace_probedata_t ;
typedef int dtrace_hdl_t ;


 char* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int *,int const*,char*) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 char* FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char const*,int *) ;
 scalar_t__ FUNC_7 (int *,char const*,char const*) ;
 int FUNC_8 (char*,int,char*,char const*,char const*,char const*) ;
 int FUNC_9 (char const*) ;

int
FUNC_10(dtrace_hdl_t *VAR_0, const dtrace_probedata_t *VAR_1,
    const char *VAR_2, const char *VAR_3)
{
 int VAR_4, VAR_5;
 char *VAR_6;
 const char *VAR_7;
 dtrace_setoptdata_t VAR_8;

 FUNC_1(&VAR_8, sizeof (VAR_8));
 (void) FUNC_6(VAR_0, VAR_2, &VAR_8.dtsda_oldval);

 if (FUNC_7(VAR_0, VAR_2, VAR_3) == 0) {
  (void) FUNC_6(VAR_0, VAR_2, &VAR_8.dtsda_newval);
  VAR_8.dtsda_probe = VAR_1;
  VAR_8.dtsda_option = VAR_2;
  VAR_8.dtsda_handle = VAR_0;

  if ((VAR_5 = FUNC_3(VAR_0, &VAR_8)) != 0)
   return (VAR_5);

  return (0);
 }

 VAR_7 = FUNC_4(VAR_0, FUNC_5(VAR_0));
 VAR_4 = FUNC_9(VAR_2) + FUNC_9(VAR_3) + FUNC_9(VAR_7) + 80;
 VAR_6 = FUNC_0(VAR_4);

 (void) FUNC_8(VAR_6, VAR_4, "couldn't set option \"%s\" to \"%s\": %s\n",
     VAR_2, VAR_3, VAR_7);

 if ((VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_6)) == 0)
  return (0);

 return (VAR_5);
}
