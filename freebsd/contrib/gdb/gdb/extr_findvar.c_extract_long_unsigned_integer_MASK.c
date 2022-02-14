
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LONGEST ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int) ;

int
FUNC_1 (const void *VAR_2, int VAR_3, LONGEST *VAR_4)
{
  char *VAR_5, *VAR_6;
  int VAR_7;

  VAR_7 = VAR_3;
  if (VAR_1 == VAR_0)
    {
      for (VAR_5 = (char *) VAR_2;
    VAR_7 > (int) sizeof (LONGEST) && VAR_5 < (char *) VAR_2 + VAR_3;
    VAR_5++)
 {
   if (*VAR_5 == 0)
     VAR_7--;
   else
     break;
 }
      VAR_6 = VAR_5;
    }
  else
    {
      VAR_6 = (char *) VAR_2;
      for (VAR_5 = (char *) VAR_2 + VAR_3 - 1;
    VAR_7 > (int) sizeof (LONGEST) && VAR_5 >= (char *) VAR_2;
    VAR_5--)
 {
   if (*VAR_5 == 0)
     VAR_7--;
   else
     break;
 }
    }

  if (VAR_7 <= (int) sizeof (LONGEST))
    {
      *VAR_4 = (LONGEST) FUNC_0 (VAR_6,
        sizeof (LONGEST));
      return 1;
    }

  return 0;
}
