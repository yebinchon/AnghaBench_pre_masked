
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
 scalar_t__ FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;

size_t
FUNC_6(phandle_t VAR_1)
{
 phandle_t VAR_2;
 char *VAR_3;
 size_t VAR_4 = 0;
 int VAR_5;

 for (VAR_4 = 0, VAR_2 = FUNC_0(VAR_1); VAR_2 != 0;
      VAR_2 = FUNC_2(VAR_2)) {
  VAR_5 = FUNC_1(VAR_2, "name", (void **)&VAR_3);
  if (VAR_5 == -1)
   continue;
  if (FUNC_4(VAR_3, "endpoint") == 0)
   VAR_4++;
  else if (FUNC_5(VAR_3, "endpoint@", 9) == 0)
   VAR_4++;
  FUNC_3(VAR_3, VAR_0);
 }

 return (VAR_4);
}
