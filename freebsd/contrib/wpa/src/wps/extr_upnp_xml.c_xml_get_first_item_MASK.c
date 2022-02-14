
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*,char const*,int) ;
 char* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (char const*,char const**,char const**,char const**) ;

char * FUNC_6(const char *VAR_0, const char *VAR_1)
{
 const char *VAR_2 = VAR_1;
 int VAR_3 = FUNC_2(VAR_1);
 const char *VAR_4, *VAR_5, *VAR_6;
 char *VAR_7;






 for (;;) {
  if (FUNC_5(VAR_0, &VAR_4, &VAR_5, &VAR_6))
   return ((void*)0);
  VAR_0 = VAR_6;
  if (!FUNC_3(VAR_5, VAR_2, VAR_3) &&
      *VAR_4 != '/' &&
      (VAR_5[VAR_3] == '>' ||
       !FUNC_0(VAR_5[VAR_3]))) {
   break;
  }
 }
 VAR_6 = VAR_0;
 while (*VAR_6 && *VAR_6 != '<')
  VAR_6++;
 VAR_7 = FUNC_4(1 + (VAR_6 - VAR_0));
 if (VAR_7 == ((void*)0))
  return ((void*)0);
 FUNC_1(VAR_7, VAR_0, VAR_6 - VAR_0);
 return VAR_7;
}
