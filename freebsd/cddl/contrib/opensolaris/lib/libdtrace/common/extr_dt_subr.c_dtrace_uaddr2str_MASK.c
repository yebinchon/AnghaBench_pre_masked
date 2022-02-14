
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uintmax_t ;
typedef scalar_t__ uint64_t ;
typedef int u_longlong_t ;
struct ps_prochandle {int dummy; } ;
typedef scalar_t__ pid_t ;
typedef int objname ;
typedef int name ;
typedef int dtrace_hdl_t ;
typedef int c ;
struct TYPE_3__ {scalar_t__ st_value; } ;
typedef TYPE_1__ GElf_Sym ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ps_prochandle*,scalar_t__,char*,int,TYPE_1__*) ;
 scalar_t__ FUNC_1 (struct ps_prochandle*,scalar_t__,char*,int) ;
 char* FUNC_2 (char*) ;
 struct ps_prochandle* FUNC_3 (int *,scalar_t__,int,int ) ;
 int FUNC_4 (int *,struct ps_prochandle*) ;
 int FUNC_5 (int *,struct ps_prochandle*) ;
 int FUNC_6 (int *,struct ps_prochandle*) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*,int,char*,char*,...) ;

int
FUNC_9(dtrace_hdl_t *VAR_3, pid_t VAR_4,
    uint64_t VAR_5, char *VAR_6, int VAR_7)
{
 char VAR_8[VAR_0], VAR_9[VAR_0], VAR_10[VAR_0 * 2];
 struct ps_prochandle *VAR_11 = ((void*)0);
 GElf_Sym VAR_12;
 char *VAR_13;

 if (VAR_4 != 0)
  VAR_11 = FUNC_3(VAR_3, VAR_4, VAR_2 | VAR_1, 0);

 if (VAR_11 == ((void*)0)) {
   (void) FUNC_8(VAR_10, sizeof (VAR_10), "0x%jx", (uintmax_t)VAR_5);
  return (FUNC_7(VAR_10, VAR_6, VAR_7));
 }

 FUNC_4(VAR_3, VAR_11);

 if (FUNC_0(VAR_11, VAR_5, VAR_8, sizeof (VAR_8), &VAR_12) == 0) {
  (void) FUNC_1(VAR_11, VAR_5, VAR_9, sizeof (VAR_9));

  VAR_13 = FUNC_2(VAR_9);

  if (VAR_5 > VAR_12.st_value) {
   (void) FUNC_8(VAR_10, sizeof (VAR_10), "%s`%s+0x%llx", VAR_13,
       VAR_8, (u_longlong_t)(VAR_5 - VAR_12.st_value));
  } else {
   (void) FUNC_8(VAR_10, sizeof (VAR_10), "%s`%s", VAR_13, VAR_8);
  }
 } else if (FUNC_1(VAR_11, VAR_5, VAR_9, sizeof (VAR_9)) != 0) {
  (void) FUNC_8(VAR_10, sizeof (VAR_10), "%s`0x%jx",
    FUNC_2(VAR_9), (uintmax_t)VAR_5);
 } else {
   (void) FUNC_8(VAR_10, sizeof (VAR_10), "0x%jx", (uintmax_t)VAR_5);
 }

 FUNC_6(VAR_3, VAR_11);
 FUNC_5(VAR_3, VAR_11);

 return (FUNC_7(VAR_10, VAR_6, VAR_7));
}
