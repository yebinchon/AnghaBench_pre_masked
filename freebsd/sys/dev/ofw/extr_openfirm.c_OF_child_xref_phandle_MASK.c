
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rxref ;
typedef scalar_t__ phandle_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,char*,scalar_t__*,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static phandle_t
FUNC_3(phandle_t VAR_0, phandle_t VAR_1)
{
 phandle_t VAR_2, VAR_3;







 for (VAR_2 = FUNC_0(VAR_0); VAR_2 != 0; VAR_2 = FUNC_2(VAR_2)) {
  VAR_3 = FUNC_3(VAR_2, VAR_1);
  if (VAR_3 != -1)
   return (VAR_3);

  if (FUNC_1(VAR_2, "phandle", &VAR_3, sizeof(VAR_3)) ==
      -1 && FUNC_1(VAR_2, "ibm,phandle", &VAR_3,
      sizeof(VAR_3)) == -1 && FUNC_1(VAR_2,
      "linux,phandle", &VAR_3, sizeof(VAR_3)) == -1)
   continue;

  if (VAR_3 == VAR_1)
   return (VAR_2);
 }

 return (-1);
}
