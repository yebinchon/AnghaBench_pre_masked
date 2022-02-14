
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,char*) ;
 int VAR_0 ;

void
FUNC_4 (rtx VAR_1, int VAR_2)
{
  int VAR_3,VAR_4;
  rtx VAR_5;

  VAR_4 = VAR_2 == 0 ? 1 : VAR_2 < 0 ? -VAR_2 : VAR_2;



  if (VAR_2 < 0)
    for (VAR_3 = VAR_4 / 2; VAR_3 > 0; VAR_3--)
      {
 if (FUNC_1 (VAR_1) == 0)
   break;
 VAR_1 = FUNC_1 (VAR_1);
      }

  for (VAR_3 = VAR_4, VAR_5 = VAR_1; VAR_3 > 0 && VAR_5 != 0; VAR_3--, VAR_5 = FUNC_0 (VAR_5))
    {
      FUNC_2 (VAR_5);
      FUNC_3 (VAR_0, "\n");
    }
}
