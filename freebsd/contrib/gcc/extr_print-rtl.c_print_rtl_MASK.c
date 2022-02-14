
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef int FILE ;





 int FUNC_0 (scalar_t__) ;


 scalar_t__ FUNC_1 (scalar_t__) ;

 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (char*,int *) ;
 int * VAR_1 ;
 int FUNC_6 (scalar_t__) ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;

void
FUNC_7 (FILE *VAR_4, rtx VAR_5)
{
  rtx VAR_6;

  VAR_1 = VAR_4;
  VAR_3 = 0;

  if (VAR_5 == 0)
    {
      FUNC_5 (VAR_2, VAR_4);
      FUNC_5 ("(nil)\n", VAR_4);
    }
  else
    switch (FUNC_0 (VAR_5))
      {
      case 130:
      case 129:
      case 132:
      case 128:
      case 131:
      case 133:
 for (VAR_6 = VAR_5; VAR_6 != 0; VAR_6 = FUNC_1 (VAR_6))
   if (! VAR_0
       || !FUNC_3 (VAR_6) || FUNC_2 (VAR_6) < 0)
     {
       FUNC_5 (VAR_2, VAR_1);
       FUNC_6 (VAR_6);
       FUNC_4 (VAR_1, "\n");
     }
 break;

      default:
 FUNC_5 (VAR_2, VAR_1);
 FUNC_6 (VAR_5);
      }
}
