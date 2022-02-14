
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__,int ) ;
 scalar_t__ FUNC_6 (scalar_t__,int ,int) ;
 int FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (int,int ) ;
 scalar_t__ FUNC_9 (int,int,scalar_t__,scalar_t__) ;
 int FUNC_10 (int,int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (int,int,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_12 (int,int,scalar_t__,scalar_t__,int) ;
 int FUNC_13 (scalar_t__,scalar_t__) ;

void
FUNC_14 (bool VAR_0, rtx VAR_1, rtx VAR_2)
{
  enum machine_mode VAR_3 = FUNC_2 (VAR_1);
  enum machine_mode VAR_4 = FUNC_3 (VAR_3);
  int VAR_5 = FUNC_4 (VAR_3);
  int VAR_6 = 0, VAR_7 = -1;
  bool VAR_8 = 1, VAR_9 = 1;
  int VAR_10;
  rtx VAR_11;

  for (VAR_10 = 0; VAR_10 < VAR_5; ++VAR_10)
    {
      VAR_11 = FUNC_6 (VAR_2, 0, VAR_10);
      if (!FUNC_1 (VAR_11))
 VAR_6++, VAR_7 = VAR_10;
      else if (VAR_11 != FUNC_0 (VAR_4))
 VAR_9 = 0;
      if (VAR_10 > 0 && !FUNC_13 (VAR_11, FUNC_6 (VAR_2, 0, 0)))
 VAR_8 = 0;
    }


  if (VAR_6 == 0)
    {
      FUNC_7 (VAR_1, FUNC_8 (VAR_3, FUNC_5 (VAR_2, 0)));
      return;
    }


  if (VAR_8
      && FUNC_9 (VAR_0, VAR_3, VAR_1,
         FUNC_6 (VAR_2, 0, 0)))
    return;



  if (VAR_6 == 1)
    {
      if (VAR_9
   && FUNC_11 (VAR_0, VAR_3, VAR_1,
        FUNC_6 (VAR_2, 0, VAR_7),
        VAR_7))
 return;

      if (FUNC_12 (VAR_0, VAR_3, VAR_1, VAR_2, VAR_7))
 return;
    }

  FUNC_10 (VAR_0, VAR_3, VAR_1, VAR_2);
}
