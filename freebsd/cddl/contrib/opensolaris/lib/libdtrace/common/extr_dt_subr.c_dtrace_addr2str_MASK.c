
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ u_longlong_t ;
struct TYPE_5__ {char* dts_object; char* dts_name; } ;
typedef TYPE_1__ dtrace_syminfo_t ;
typedef int dtrace_hdl_t ;
struct TYPE_6__ {scalar_t__ st_value; } ;
typedef TYPE_2__ GElf_Sym ;


 char* FUNC_0 (size_t) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int *,scalar_t__,TYPE_2__*,TYPE_1__*) ;
 int FUNC_3 (char*,size_t,char*,scalar_t__,...) ;
 scalar_t__ FUNC_4 (char*) ;

int
FUNC_5(dtrace_hdl_t *VAR_0, uint64_t VAR_1, char *VAR_2, int VAR_3)
{
 dtrace_syminfo_t VAR_4;
 GElf_Sym VAR_5;

 size_t VAR_6 = 20;
 char *VAR_7;
 int VAR_8;

 if ((VAR_8 = FUNC_2(VAR_0, VAR_1, &VAR_5, &VAR_4)) == 0)
  VAR_6 += FUNC_4(VAR_4.dts_object) + FUNC_4(VAR_4.dts_name) + 2;

 VAR_7 = FUNC_0(VAR_6);

 if (VAR_8 == 0 && VAR_1 != VAR_5.st_value) {
  (void) FUNC_3(VAR_7, VAR_6, "%s`%s+0x%llx", VAR_4.dts_object,
      VAR_4.dts_name, (u_longlong_t)VAR_1 - VAR_5.st_value);
 } else if (VAR_8 == 0) {
  (void) FUNC_3(VAR_7, VAR_6, "%s`%s",
      VAR_4.dts_object, VAR_4.dts_name);
 } else {





  if (FUNC_2(VAR_0, VAR_1, ((void*)0), &VAR_4) == 0) {
   (void) FUNC_3(VAR_7, VAR_6, "%s`0x%llx", VAR_4.dts_object,
       (u_longlong_t)VAR_1);
  } else {
   (void) FUNC_3(VAR_7, VAR_6, "0x%llx", (u_longlong_t)VAR_1);
  }
 }

 return (FUNC_1(VAR_7, VAR_2, VAR_3));
}
