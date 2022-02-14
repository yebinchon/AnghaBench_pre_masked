
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CORE_ADDR ;


 int FUNC_0 (scalar_t__,char*,int) ;

void
FUNC_1 (CORE_ADDR VAR_0, char *VAR_1, int VAR_2)
{
  char *VAR_3;
  int VAR_4;
  int VAR_5;

  VAR_3 = VAR_1;
  while (1)
    {
      if (VAR_3 - VAR_1 >= VAR_2)
 {
   VAR_1[VAR_2 - 1] = '\0';
   break;
 }
      VAR_5 = VAR_2 - (VAR_3 - VAR_1);
      if (VAR_5 > 8)
 VAR_5 = 8;
      FUNC_0 (VAR_0 + (int) (VAR_3 - VAR_1), VAR_3, VAR_5);
      for (VAR_4 = 0; VAR_4 < VAR_5 && *VAR_3; VAR_4++, VAR_3++)
 ;

      if (VAR_4 < VAR_5 && !*VAR_3)
 break;
    }
}
