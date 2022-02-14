
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int const FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;



 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;

 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,int ) ;

rtx
FUNC_11 (rtx VAR_1, rtx VAR_2)
{
  while (1)
    switch (FUNC_1 (VAR_2))
      {
      case 129:
 VAR_2 = FUNC_6 (VAR_2);
 break;
      case 130:
      case 131:
      case 128:
 VAR_2 = FUNC_7 (VAR_2, 0);
 break;
      default:
 goto done;
      }
 done:
  if ((FUNC_3 (VAR_2)
       && ! FUNC_0 (VAR_1)
       && !FUNC_5 (VAR_1)
       && FUNC_1 (VAR_1) != 129)
      || (FUNC_5 (VAR_2)
   && (FUNC_4 (VAR_2) < VAR_0
       || FUNC_10 (VAR_2, VAR_1))))
    {
      rtx VAR_3 = FUNC_9 (FUNC_2 (VAR_1));
      FUNC_8 (VAR_3, VAR_1);
      return VAR_3;
    }
  return VAR_1;
}
