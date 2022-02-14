
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int X_add_number; void* X_op; } ;
typedef TYPE_1__ expressionS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int* VAR_6 ;
 char* VAR_7 ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3 (expressionS *VAR_8)
{
  int VAR_9;

  if (*VAR_7 == '\''
      && VAR_7[1] != '\'')
    {
      VAR_8->X_op = VAR_4;
      VAR_8->X_add_number = 0;
      return;
    }



  for (VAR_9 = VAR_5 - 1; VAR_9 >= 0; VAR_9--)
    {
      int VAR_10;

      VAR_6[VAR_9] = 0;
      for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++)
 {
   if (*VAR_7 == '\'')
     {
       if (VAR_7[1] != '\'')
  break;
       ++VAR_7;
     }
   VAR_6[VAR_9] <<= 8;
   VAR_6[VAR_9] += *VAR_7;
   ++VAR_7;
 }

      if (VAR_9 < VAR_5 - 1)
 {



   for (; VAR_10 < VAR_0; VAR_10++)
     VAR_6[VAR_9] <<= 8;
 }

      if (*VAR_7 == '\''
   && VAR_7[1] != '\'')
 break;
    }

  if (VAR_9 < 0)
    {
      FUNC_1 (FUNC_0("character constant too large"));
      VAR_9 = 0;
    }

  if (VAR_9 > 0)
    {
      int VAR_11;
      int VAR_12;

      VAR_11 = VAR_5 - VAR_9;
      for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
 VAR_6[VAR_12] = VAR_6[VAR_9 + VAR_12];
      VAR_9 = VAR_11;
    }

  FUNC_2 (VAR_2 == 16);
  if (VAR_9 > 2)
    {
      VAR_8->X_op = VAR_3;
      VAR_8->X_add_number = VAR_9;
    }
  else
    {
      VAR_8->X_op = VAR_4;
      if (VAR_9 < 2)
 VAR_8->X_add_number = VAR_6[0] & VAR_1;
      else
 VAR_8->X_add_number =
   (((VAR_6[1] & VAR_1)
     << VAR_2)
    | (VAR_6[0] & VAR_1));
    }


  ++VAR_7;
}
