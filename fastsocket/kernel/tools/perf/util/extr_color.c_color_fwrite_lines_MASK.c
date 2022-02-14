
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 char const* VAR_0 ;
 scalar_t__ FUNC_0 (char,int *) ;
 scalar_t__ FUNC_1 (char const*,int *) ;
 int FUNC_2 (char const*,size_t,int,int *) ;
 char* FUNC_3 (char const*,char,size_t) ;

int FUNC_4(FILE *VAR_1, const char *VAR_2,
  size_t VAR_3, const char *VAR_4)
{
 if (!*VAR_2)
  return FUNC_2(VAR_4, VAR_3, 1, VAR_1) != 1;

 while (VAR_3) {
  char *VAR_5 = FUNC_3(VAR_4, '\n', VAR_3);

  if (VAR_5 != VAR_4 && (FUNC_1(VAR_2, VAR_1) < 0 ||
    FUNC_2(VAR_4, VAR_5 ? (size_t)(VAR_5 - VAR_4) : VAR_3, 1, VAR_1) != 1 ||
    FUNC_1(VAR_0, VAR_1) < 0))
   return -1;
  if (!VAR_5)
   return 0;
  if (FUNC_0('\n', VAR_1) < 0)
   return -1;
  VAR_3 -= VAR_5 + 1 - VAR_4;
  VAR_4 = VAR_5 + 1;
 }
 return 0;
}
