
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef char* u_longlong_t ;
struct TYPE_3__ {char* dts_object; } ;
typedef TYPE_1__ dtrace_syminfo_t ;
typedef int dtrace_hdl_t ;
typedef scalar_t__ caddr_t ;
typedef int c ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,char const*,char*) ;
 scalar_t__ FUNC_1 (int *,scalar_t__,int *,TYPE_1__*) ;
 int FUNC_2 (char*,int,char*,char*) ;

int
FUNC_3(dtrace_hdl_t *VAR_1, FILE *VAR_2, const char *VAR_3, caddr_t VAR_4)
{

 uint64_t VAR_5 = *((uint64_t *)VAR_4);
 dtrace_syminfo_t VAR_6;
 char VAR_7[VAR_0 * 2];

 if (VAR_3 == ((void*)0))
  VAR_3 = "  %-50s";

 if (FUNC_1(VAR_1, VAR_5, ((void*)0), &VAR_6) == 0) {
  (void) FUNC_2(VAR_7, sizeof (VAR_7), "%s", VAR_6.dts_object);
 } else {
  (void) FUNC_2(VAR_7, sizeof (VAR_7), "0x%llx", (u_longlong_t)VAR_5);
 }

 if (FUNC_0(VAR_1, VAR_2, VAR_3, VAR_7) < 0)
  return (-1);

 return (0);
}
