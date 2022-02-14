
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mod_depend {int dummy; } ;


 char* FUNC_0 (char*,int,char const*,int,struct mod_depend const*) ;
 char* VAR_0 ;

__attribute__((used)) static char *
FUNC_1(const char *VAR_1, int VAR_2,
    const struct mod_depend *VAR_3)
{
 char *VAR_4, *VAR_5, *VAR_6;




 for (VAR_4 = VAR_0; *VAR_4; VAR_4 = VAR_5 + 1) {

  for (VAR_5 = VAR_4; (*VAR_5 != 0) && (*VAR_5 != ';'); VAR_5++);
  VAR_6 = FUNC_0(VAR_4, VAR_5 - VAR_4, VAR_1,
      VAR_2, VAR_3);
  if (VAR_6 != ((void*)0))
   return (VAR_6);
  if (*VAR_5 == 0)
   break;
 }
 return (((void*)0));
}
