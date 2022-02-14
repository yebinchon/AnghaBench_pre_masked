
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int portnode ;
typedef scalar_t__ phandle_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,char*,int*,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (scalar_t__,char*) ;
 int FUNC_4 (char*,int,char*,int) ;

phandle_t
FUNC_5(phandle_t VAR_1, uint32_t VAR_2)
{
 phandle_t VAR_3, VAR_4;
 uint32_t VAR_5;
 char VAR_6[VAR_0];


 FUNC_4(VAR_6, sizeof(VAR_6), "port@%d", VAR_2);
 VAR_4 = FUNC_3(VAR_1, VAR_6);
 if (VAR_4 != 0)
  return (VAR_4);


 VAR_3 = FUNC_3(VAR_1, "ports");
 if (VAR_3 == 0)
  return (0);

 for (VAR_4 = FUNC_0(VAR_3); VAR_4 != 0; VAR_4 = FUNC_2(VAR_4)) {
  if (FUNC_1(VAR_4, "reg", &VAR_5, sizeof(uint32_t)) <= 0 ||
      VAR_5 != VAR_2)
   continue;

  return (VAR_4);
 }

 return (0);
}
