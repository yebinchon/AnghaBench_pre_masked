
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *) ;
 int FUNC_1 (char const*,int,char*,char const*,...) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int *,char*,char const*) ;
 int * FUNC_4 (char*,char const*) ;

int
FUNC_5(const char *VAR_0, int VAR_1,
    const char *VAR_2, const char *VAR_3[])
{
 char *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(((void*)0), "%s", VAR_2);
 if (VAR_4 == ((void*)0)) {
  FUNC_1(VAR_0, VAR_1, "Can't read file: %s", VAR_2);
  FUNC_0(((void*)0));
  return (0);
 }

 for (VAR_5 = 0; VAR_3[VAR_5] != ((void*)0); ++VAR_5) {
  if (FUNC_4(VAR_4, VAR_3[VAR_5]) != ((void*)0)) {
   FUNC_1(VAR_0, VAR_1, "Invalid string in %s: %s", VAR_2,
       VAR_3[VAR_5]);
   FUNC_0(((void*)0));
   FUNC_2(VAR_4);
   return(0);
  }
 }

 FUNC_2(VAR_4);
 return (0);
}
