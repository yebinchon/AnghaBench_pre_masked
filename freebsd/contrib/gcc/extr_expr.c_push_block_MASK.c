
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_4 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ,int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int) ;
 int VAR_5 ;
 int VAR_6 ;

rtx
FUNC_14 (rtx VAR_7, int VAR_8, int VAR_9)
{
  rtx VAR_10;

  VAR_7 = FUNC_7 (VAR_3, VAR_5, VAR_7, 1);
  if (FUNC_0 (VAR_7))
    FUNC_6 (FUNC_13 (VAR_7, VAR_8));
  else if (FUNC_5 (VAR_7) && VAR_8 == 0)
    FUNC_6 (VAR_7);
  else
    {
      VAR_10 = FUNC_8 (VAR_3, VAR_7);
      if (VAR_8 != 0)
 VAR_10 = FUNC_9 (VAR_3, VAR_4, VAR_10, FUNC_1 (VAR_8),
        VAR_10, 0, VAR_2);
      FUNC_6 (VAR_10);
    }


  if (0)



    {
      VAR_10 = VAR_6;
      if (VAR_8 != 0 && VAR_9)
 VAR_10 = FUNC_13 (VAR_10, VAR_8);
    }
  else
    {
      if (FUNC_3 (VAR_7) == VAR_0)
 VAR_10 = FUNC_13 (VAR_6,
         -FUNC_4 (VAR_7) - (VAR_9 ? 0 : VAR_8));
      else if (VAR_8 != 0 && !VAR_9)
 VAR_10 = FUNC_10 (VAR_3, VAR_6,
        FUNC_12 (VAR_3, FUNC_13 (VAR_7, VAR_8)));
      else
 VAR_10 = FUNC_10 (VAR_3, VAR_6,
        FUNC_12 (VAR_3, VAR_7));
    }

  return FUNC_11 (FUNC_2 (VAR_1), VAR_10);
}
