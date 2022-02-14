
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 char* FUNC_0 (struct type*,int) ;
 scalar_t__ FUNC_1 (char*,char) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_3 (struct type *VAR_0, int VAR_1, int VAR_2)
{




  char *VAR_3 = FUNC_0 (VAR_0, VAR_1);

  if (FUNC_2 (VAR_3, "operator", 8) != 0)
    return 0;

  VAR_3 += 8;
  if (! FUNC_1 (" \t\f\n\r", *VAR_3))
    return 0;

  while (FUNC_1 (" \t\f\n\r", *VAR_3))
    VAR_3++;

  if (!('a' <= *VAR_3 && *VAR_3 <= 'z')
      && !('A' <= *VAR_3 && *VAR_3 <= 'Z')
      && *VAR_3 != '_')


    return 0;
  else if (FUNC_2 (VAR_3, "new", 3) == 0)
    VAR_3 += 3;
  else if (FUNC_2 (VAR_3, "delete", 6) == 0)
    VAR_3 += 6;
  else


    return 1;


  if (('a' <= *VAR_3 && *VAR_3 <= 'z')
      || ('A' <= *VAR_3 && *VAR_3 <= 'Z')
      || ('0' <= *VAR_3 && *VAR_3 <= '9')
      || *VAR_3 == '_')


    return 1;



  return 0;
}
