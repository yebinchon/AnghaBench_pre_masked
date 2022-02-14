
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ phandle_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,char*,void**) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (char*,char const*) ;

phandle_t
FUNC_5(phandle_t VAR_1, const char *VAR_2)
{
 char *VAR_3;
 int VAR_4;
 phandle_t VAR_5;

 for (VAR_5 = FUNC_0(VAR_1); VAR_5 != 0; VAR_5 = FUNC_2(VAR_5)) {
  VAR_4 = FUNC_1(VAR_5, "name", (void **)&VAR_3);
  if (VAR_4 == -1)
   continue;
  if (FUNC_4(VAR_3, VAR_2) == 0) {
   FUNC_3(VAR_3, VAR_0);
   return (VAR_5);
  }

  FUNC_3(VAR_3, VAR_0);
 }

 return (0);
}
