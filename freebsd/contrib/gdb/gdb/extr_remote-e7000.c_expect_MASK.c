
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4 (char *VAR_3)
{
  char *VAR_4 = VAR_3;
  int VAR_5;
  int VAR_6 = 0;

  while (1)
    {
      VAR_5 = FUNC_3 (VAR_2);

      if (VAR_0)
 {
   if (VAR_5 == '\r' || VAR_5 == '\n')
     {
       if (!VAR_6)
  FUNC_2 ('\n');
       VAR_6 = 1;
     }
   else
     {
       VAR_6 = 0;
       FUNC_2 (VAR_5);
     }
   FUNC_0 (VAR_1);
 }
      if (FUNC_1 (VAR_5) == FUNC_1 (*VAR_4++))
 {
   if (*VAR_4 == '\0')
     return;
 }
      else
 {
   VAR_4 = VAR_3;

   if (FUNC_1 (VAR_5) == FUNC_1 (VAR_3[0]))
     VAR_4++;
 }
    }
}
