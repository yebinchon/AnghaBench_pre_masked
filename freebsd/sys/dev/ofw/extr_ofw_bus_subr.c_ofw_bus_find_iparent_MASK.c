
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ phandle_t ;
typedef int iparent ;


 scalar_t__ FUNC_0 (scalar_t__,char*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,char*,scalar_t__*,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

phandle_t
FUNC_4(phandle_t VAR_0)
{
 phandle_t VAR_1;

 if (FUNC_2(VAR_0, "interrupt-parent", &VAR_1,
      sizeof(VAR_1)) == -1) {
  for (VAR_1 = VAR_0; VAR_1 != 0;
      VAR_1 = FUNC_1(VAR_1)) {
   if (FUNC_0(VAR_1, "interrupt-controller"))
    break;
  }
  VAR_1 = FUNC_3(VAR_1);
 }
 return (VAR_1);
}
