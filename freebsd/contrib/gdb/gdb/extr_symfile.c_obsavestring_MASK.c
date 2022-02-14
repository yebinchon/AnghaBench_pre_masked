
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obstack {int dummy; } ;


 scalar_t__ FUNC_0 (struct obstack*,int) ;

char *
FUNC_1 (const char *VAR_0, int VAR_1, struct obstack *VAR_2)
{
  char *VAR_3 = (char *) FUNC_0 (VAR_2, VAR_1 + 1);



  {
    const char *VAR_4 = VAR_0;
    char *VAR_5 = VAR_3;
    const char *VAR_6 = VAR_0 + VAR_1;
    while (VAR_4 != VAR_6)
      *VAR_5++ = *VAR_4++;
  }
  VAR_3[VAR_1] = 0;
  return VAR_3;
}
