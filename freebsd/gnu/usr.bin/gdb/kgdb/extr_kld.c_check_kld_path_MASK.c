
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*) ;
 char** VAR_0 ;
 size_t FUNC_1 (char*,char const*,size_t) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3 (char *VAR_1, size_t VAR_2)
{
 const char **VAR_3;
 char *VAR_4;

 VAR_4 = VAR_1 + FUNC_2(VAR_1);
 VAR_3 = VAR_0;
 while (*VAR_3 != ((void*)0)) {
  if (FUNC_1(VAR_1, *VAR_3, VAR_2) < VAR_2) {
   if (FUNC_0(VAR_1))
    return (1);
  }


  *VAR_4 = '\0';
  VAR_3++;
 }
 return (0);
}
