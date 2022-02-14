
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef int HOST_WIDE_INT ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int) ;

void
FUNC_12 (rtx *VAR_3)
{
  rtx VAR_4 = FUNC_2 (VAR_2, FUNC_1 (VAR_3[0], 0));
  rtx VAR_5 = FUNC_2 (VAR_2, FUNC_1 (VAR_3[1], 0));
  HOST_WIDE_INT VAR_6 = FUNC_0 (VAR_3[2]);
  HOST_WIDE_INT VAR_7 = 0;

  while (VAR_6 >= 12)
    {
      FUNC_3 (FUNC_5 (VAR_4, VAR_5, VAR_4, VAR_5));
      VAR_6 -= 12;
    }

  if (VAR_6 >= 8)
    {
      FUNC_3 (FUNC_6 (VAR_4, VAR_5, VAR_4, VAR_5));
      VAR_6 -= 8;
    }

  if (VAR_6 >= 4)
    {
      rtx VAR_8 = FUNC_9 (VAR_2);
      FUNC_3 (FUNC_8 (VAR_8, FUNC_10 (VAR_2, VAR_5)));
      FUNC_3 (FUNC_8 (FUNC_10 (VAR_2, VAR_4), VAR_8));
      VAR_6 -= 4;
      VAR_7 += 4;
    }

  if (VAR_6 >= 2)
    {
      rtx VAR_9 = FUNC_9 (VAR_0);
      FUNC_3 (FUNC_4 (VAR_9, FUNC_10 (VAR_0,
           FUNC_11 (VAR_5, VAR_7))));
      FUNC_3 (FUNC_4 (FUNC_10 (VAR_0, FUNC_11 (VAR_4, VAR_7)),
       VAR_9));
      VAR_6 -= 2;
      VAR_7 += 2;
    }

  if (VAR_6)
    {
      rtx VAR_10 = FUNC_9 (VAR_1);
      FUNC_3 (FUNC_7 (VAR_10, FUNC_10 (VAR_1,
           FUNC_11 (VAR_5, VAR_7))));
      FUNC_3 (FUNC_7 (FUNC_10 (VAR_1, FUNC_11 (VAR_4, VAR_7)),
       VAR_10));
    }
}
