
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
typedef int paths ;
typedef int name ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 char* VAR_2 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*,int,char*,char*,...) ;
 scalar_t__ FUNC_4 (char*,struct stat*) ;
 char* FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (char*,char*,size_t*,int *,int ) ;

__attribute__((used)) static int
FUNC_7(void)
{
 char VAR_3[VAR_1], VAR_4[VAR_1 * 8], *VAR_5;
 struct stat VAR_6;
 size_t VAR_7;

 FUNC_3(VAR_3, sizeof(VAR_3), "g_%s", VAR_2);



 if (FUNC_2(VAR_3) >= 0)
  return (0);
 FUNC_0(VAR_4, sizeof(VAR_4));
 VAR_7 = sizeof(VAR_4);
 if (FUNC_6("kern.module_path", VAR_4, &VAR_7, ((void*)0), 0) < 0)
  FUNC_1(VAR_0, "sysctl(kern.module_path)");
 for (VAR_5 = FUNC_5(VAR_4, ";"); VAR_5 != ((void*)0); VAR_5 = FUNC_5(((void*)0), ";")) {
  FUNC_3(VAR_3, sizeof(VAR_3), "%s/geom_%s.ko", VAR_5, VAR_2);



  if (FUNC_4(VAR_3, &VAR_6) == 0)
   return (1);
 }
 return (0);
}
