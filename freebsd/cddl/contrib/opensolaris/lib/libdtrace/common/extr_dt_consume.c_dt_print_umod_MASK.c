
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef char* u_longlong_t ;
struct ps_prochandle {int dummy; } ;
typedef int objname ;
struct TYPE_8__ {int * dt_vector; } ;
typedef TYPE_1__ dtrace_hdl_t ;
typedef scalar_t__ caddr_t ;
typedef int c ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ps_prochandle*,scalar_t__,char*,int) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,int *,char const*,char*) ;
 struct ps_prochandle* FUNC_3 (TYPE_1__*,scalar_t__,int,int ) ;
 int FUNC_4 (TYPE_1__*,struct ps_prochandle*) ;
 int FUNC_5 (TYPE_1__*,struct ps_prochandle*) ;
 int FUNC_6 (TYPE_1__*,struct ps_prochandle*) ;
 int FUNC_7 (char*,int,char*,char*) ;

int
FUNC_8(dtrace_hdl_t *VAR_3, FILE *VAR_4, const char *VAR_5, caddr_t VAR_6)
{

 uint64_t VAR_7 = ((uint64_t *)VAR_6)[0];

 uint64_t VAR_8 = ((uint64_t *)VAR_6)[1];
 int VAR_9 = 0;

 char VAR_10[VAR_0], VAR_11[VAR_0 * 2];
 struct ps_prochandle *VAR_12;

 if (VAR_5 == ((void*)0))
  VAR_5 = "  %-50s";





 if (VAR_3->dt_vector == ((void*)0))
  VAR_12 = FUNC_3(VAR_3, VAR_7, VAR_2 | VAR_1, 0);
 else
  VAR_12 = ((void*)0);

 if (VAR_12 != ((void*)0))
  FUNC_4(VAR_3, VAR_12);

 if (VAR_12 != ((void*)0) && FUNC_0(VAR_12, VAR_8, VAR_10, sizeof (VAR_10)) != 0) {
  (void) FUNC_7(VAR_11, sizeof (VAR_11), "%s", FUNC_1(VAR_10));
 } else {
  (void) FUNC_7(VAR_11, sizeof (VAR_11), "0x%llx", (u_longlong_t)VAR_8);
 }

 VAR_9 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_11);

 if (VAR_12 != ((void*)0)) {
  FUNC_6(VAR_3, VAR_12);
  FUNC_5(VAR_3, VAR_12);
 }

 return (VAR_9);
}
