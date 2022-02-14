
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdt_property {int dummy; } ;


 int FUNC_0 (char**,int) ;
 struct fdt_property* FUNC_1 (int ,int,char*,int*) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (int ,int,char*,char***,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (char const) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (char*,char*,int) ;

void
FUNC_8(const char *VAR_1)
{
 char *VAR_2;
 int VAR_3, VAR_4, VAR_5;
 const struct fdt_property *VAR_6;
 char *VAR_7[10];

 VAR_2 = (char *)VAR_1 + FUNC_6(VAR_1) - 1;
 while (VAR_2 > VAR_1 && FUNC_4(*(VAR_1 - 1)))
  VAR_1--;

 if (VAR_2 == VAR_1)
  return;

 VAR_4 = FUNC_2(VAR_0, "/chosen");
 if (VAR_4 < 0)
  return;

 VAR_6 = FUNC_1(VAR_0, VAR_4, "stdout", &VAR_3);


 if (VAR_6 == ((void*)0) || (VAR_6 != ((void*)0) && VAR_3 == 0)) {

  FUNC_0(VAR_7, 10 * sizeof(char));
  FUNC_5((char *)&VAR_7, "serial");
  if (FUNC_6(VAR_2) > 3)

   return;

  FUNC_7((char *)VAR_7 + 6, VAR_2, 3);
  VAR_5 = FUNC_2(VAR_0, (const char *)VAR_7);
  if (VAR_5 < 0)




   return;

  FUNC_3(VAR_0, VAR_4, "stdout", &VAR_7,
      FUNC_6((char *)&VAR_7) + 1);
  FUNC_3(VAR_0, VAR_4, "stdin", &VAR_7,
      FUNC_6((char *)&VAR_7) + 1);
 }
}
