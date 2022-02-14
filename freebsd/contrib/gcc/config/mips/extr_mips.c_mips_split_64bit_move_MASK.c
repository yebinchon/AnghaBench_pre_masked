
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int) ;
 scalar_t__ FUNC_9 (int ,int ) ;

void
FUNC_10 (rtx VAR_0, rtx VAR_1)
{
  if (FUNC_0 (VAR_0))
    {

      FUNC_3 (FUNC_6 (FUNC_2 (VAR_0), FUNC_8 (VAR_1, 0)));
      FUNC_3 (FUNC_5 (VAR_0, FUNC_8 (VAR_1, 1),
       FUNC_2 (VAR_0)));
    }
  else if (FUNC_0 (VAR_1))
    {

      FUNC_4 (FUNC_8 (VAR_0, 0), FUNC_8 (VAR_1, 0));
      FUNC_3 (FUNC_7 (FUNC_8 (VAR_0, 1), VAR_1));
    }
  else
    {


      rtx VAR_2;

      VAR_2 = FUNC_8 (VAR_0, 0);
      if (FUNC_1 (VAR_2)
   && FUNC_9 (VAR_2, VAR_1))
 {
   FUNC_4 (FUNC_8 (VAR_0, 1), FUNC_8 (VAR_1, 1));
   FUNC_4 (VAR_2, FUNC_8 (VAR_1, 0));
 }
      else
 {
   FUNC_4 (VAR_2, FUNC_8 (VAR_1, 0));
   FUNC_4 (FUNC_8 (VAR_0, 1), FUNC_8 (VAR_1, 1));
 }
    }
}
