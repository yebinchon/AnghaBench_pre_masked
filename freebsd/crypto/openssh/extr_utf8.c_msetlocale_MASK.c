
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char const*) ;
 int * FUNC_1 (int ,char*) ;
 int * FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;

void
FUNC_4(void)
{
 const char *VAR_1[] = { "LC_ALL", "LC_CTYPE", "LANG", ((void*)0) };
 char *VAR_2;
 int VAR_3;





 for (VAR_3 = 0; VAR_1[VAR_3] != ((void*)0); VAR_3++) {
  if ((VAR_2 = FUNC_0(VAR_1[VAR_3])) == ((void*)0))
   continue;
  if (FUNC_3(VAR_2, "TR", 2) != 0)
   break;




  if ((FUNC_2(VAR_2, "UTF-8") != ((void*)0) ||
      FUNC_2(VAR_2, "UTF8") != ((void*)0)) &&
      (FUNC_1(VAR_0, "C.UTF-8") != ((void*)0) ||
      FUNC_1(VAR_0, "POSIX.UTF-8") != ((void*)0)))
   return;
  FUNC_1(VAR_0, "C");
  return;
 }

 FUNC_1(VAR_0, "");
}
