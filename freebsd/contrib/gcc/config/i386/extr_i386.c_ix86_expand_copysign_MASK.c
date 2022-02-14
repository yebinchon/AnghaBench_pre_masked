
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef int rtvec ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ,int *,int ,int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (int ,int *,int ,int ,int ,int ) ;
 int FUNC_10 (int,int ,int ,...) ;
 int FUNC_11 (int,int ) ;
 int FUNC_12 (int,int ,int) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ,int,int ,int) ;

void
FUNC_15 (rtx VAR_6[])
{
  enum machine_mode VAR_7, VAR_8;
  rtx VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;

  VAR_9 = VAR_6[0];
  VAR_10 = VAR_6[1];
  VAR_11 = VAR_6[2];

  VAR_7 = FUNC_3 (VAR_9);
  VAR_8 = VAR_7 == VAR_3 ? VAR_5 : VAR_4;

  if (FUNC_2 (VAR_10) == VAR_1)
    {
      rtvec VAR_14;

      if (FUNC_13 (FUNC_1 (VAR_10)))
 VAR_10 = FUNC_14 (VAR_0, VAR_7, VAR_10, VAR_7);

      if (VAR_10 == FUNC_0 (VAR_7))
 VAR_10 = FUNC_0 (VAR_8);
      else
        {
   if (VAR_7 == VAR_3)
     VAR_14 = FUNC_10 (4, VAR_10, FUNC_0 (VAR_3),
                           FUNC_0 (VAR_3), FUNC_0 (VAR_3));
   else
     VAR_14 = FUNC_10 (2, VAR_10, FUNC_0 (VAR_2));
          VAR_10 = FUNC_5 (VAR_8, FUNC_11 (VAR_8, VAR_14));
 }

      VAR_12 = FUNC_12 (VAR_7, 0, 0);

      if (VAR_7 == VAR_3)
 FUNC_4 (FUNC_8 (VAR_9, VAR_10, VAR_11, VAR_12));
      else
 FUNC_4 (FUNC_6 (VAR_9, VAR_10, VAR_11, VAR_12));
    }
  else
    {
      VAR_13 = FUNC_12 (VAR_7, 0, 1);
      VAR_12 = FUNC_12 (VAR_7, 0, 0);

      if (VAR_7 == VAR_3)
 FUNC_4 (FUNC_9 (VAR_9, ((void*)0), VAR_10, VAR_11, VAR_13, VAR_12));
      else
 FUNC_4 (FUNC_7 (VAR_9, ((void*)0), VAR_10, VAR_11, VAR_13, VAR_12));
    }
}
