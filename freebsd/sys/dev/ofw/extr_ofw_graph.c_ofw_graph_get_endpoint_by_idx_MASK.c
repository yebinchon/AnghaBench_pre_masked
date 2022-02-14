
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ phandle_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,char*,scalar_t__*,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,char*) ;

phandle_t
FUNC_4(phandle_t VAR_0, uint32_t VAR_1)
{
 phandle_t VAR_2, VAR_3;
 uint32_t VAR_4;


 VAR_2 = FUNC_3(VAR_0, "endpoint");
 if (VAR_2 != 0)
  return (VAR_2);


 for (VAR_3 = FUNC_0(VAR_0); VAR_3 != 0; VAR_3 = FUNC_2(VAR_3)) {
  if (FUNC_1(VAR_3, "reg", &VAR_4, sizeof(uint32_t)) <= 0 ||
      VAR_4 != VAR_1)
   continue;

  return (VAR_3);
 }

 return (0);
}
