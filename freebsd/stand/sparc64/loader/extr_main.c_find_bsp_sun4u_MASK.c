
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint32_t ;
typedef int type ;
typedef scalar_t__ phandle_t ;
typedef int cpuid ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,char*,char*,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 char* FUNC_3 () ;
 scalar_t__ FUNC_4 (char*,char*) ;

__attribute__((used)) static phandle_t
FUNC_5(phandle_t VAR_0, uint32_t VAR_1)
{
 char VAR_2[sizeof("cpu")];
 phandle_t VAR_3;
 uint32_t VAR_4;

 for (; VAR_0 > 0; VAR_0 = FUNC_2(VAR_0)) {
  VAR_3 = FUNC_0(VAR_0);
  if (VAR_3 > 0) {
   VAR_3 = FUNC_5(VAR_3, VAR_1);
   if (VAR_3 > 0)
    return (VAR_3);
  } else {
   if (FUNC_1(VAR_0, "device_type", VAR_2,
       sizeof(VAR_2)) <= 0)
    continue;
   if (FUNC_4(VAR_2, "cpu") != 0)
    continue;
   if (FUNC_1(VAR_0, FUNC_3(), &VAR_4,
       sizeof(VAR_4)) <= 0)
    continue;
   if (VAR_4 == VAR_1)
    return (VAR_0);
  }
 }
 return (0);
}
