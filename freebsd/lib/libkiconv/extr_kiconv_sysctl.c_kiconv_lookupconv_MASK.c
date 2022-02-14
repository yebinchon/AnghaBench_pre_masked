
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (char*,char const*) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,size_t*,int *,int ) ;

int
FUNC_5(const char *VAR_3)
{
 size_t VAR_4;

 if (FUNC_4("kern.iconv.drvlist", ((void*)0), &VAR_4, ((void*)0), 0) == -1)
  return (VAR_2);
 if (VAR_4 > 0) {
  char *VAR_5, *VAR_6;

  VAR_5 = FUNC_1(VAR_4);
  if (VAR_5 == ((void*)0))
   return (VAR_1);
  if (FUNC_4("kern.iconv.drvlist", VAR_5, &VAR_4, ((void*)0), 0) == -1) {
   FUNC_0(VAR_5);
   return (VAR_2);
  }
  for (VAR_6 = VAR_5; *VAR_6 != '\0'; VAR_6 += FUNC_3(VAR_6) + 1)
   if (FUNC_2(VAR_6, VAR_3) == 0) {
    FUNC_0(VAR_5);
    return (0);
   }
 }
 return (VAR_0);
}
