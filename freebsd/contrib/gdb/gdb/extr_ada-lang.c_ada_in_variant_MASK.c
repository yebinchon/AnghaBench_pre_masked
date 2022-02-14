
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
typedef int LONGEST ;


 char* FUNC_0 (struct type*,int) ;
 int FUNC_1 (char const*,int,int *,int*) ;

int
FUNC_2 (LONGEST VAR_0, struct type *VAR_1, int VAR_2)
{
  const char *VAR_3 = FUNC_0 (VAR_1, VAR_2);
  int VAR_4;

  VAR_4 = 0;
  while (1)
    {
      switch (VAR_3[VAR_4])
 {
 case '\0':
   return 0;
 case 'S':
   {
     LONGEST VAR_5;
     if (!FUNC_1 (VAR_3, VAR_4 + 1, &VAR_5, &VAR_4))
       return 0;
     if (VAR_0 == VAR_5)
       return 1;
     break;
   }
 case 'R':
   {
     LONGEST VAR_6, VAR_7;
     if (!FUNC_1 (VAR_3, VAR_4 + 1, &VAR_6, &VAR_4)
  || VAR_3[VAR_4] != 'T' || !FUNC_1 (VAR_3, VAR_4 + 1, &VAR_7, &VAR_4))
       return 0;
     if (VAR_0 >= VAR_6 && VAR_0 <= VAR_7)
       return 1;
     break;
   }
 case 'O':
   return 1;
 default:
   return 0;
 }
    }
}
