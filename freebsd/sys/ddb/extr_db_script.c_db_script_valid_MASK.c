
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (char const*) ;
 char* FUNC_2 (char**,char*) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_5, const char *VAR_6)
{
 char *VAR_7, *VAR_8;

 if (FUNC_1(VAR_5) == 0)
  return (VAR_3);
 if (FUNC_1(VAR_5) >= VAR_2)
  return (VAR_3);
 if (FUNC_1(VAR_6) >= VAR_1)
  return (VAR_3);
 VAR_7 = VAR_4;
 FUNC_0(VAR_7, VAR_6);
 while ((VAR_8 = FUNC_2(&VAR_7, ";")) != ((void*)0)) {
  if (FUNC_1(VAR_8) >= VAR_0)
   return (VAR_3);
 }
 return (0);
}
