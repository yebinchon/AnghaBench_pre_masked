
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

 int VAR_2 ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,int) ;


 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_8 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_9 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_10 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_11 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_12 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_13 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_14 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_15 (int,int ,int ,scalar_t__*) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int) ;

int
FUNC_19 (rtx VAR_8[])
{
  enum rtx_code VAR_9 = FUNC_0 (VAR_8[1]);
  rtx VAR_10;
  rtx VAR_11 = VAR_3;
  bool VAR_12 = 0;
  enum machine_mode VAR_13 = FUNC_1 (VAR_8[0]);

  if (VAR_8[3] != VAR_4
      && VAR_8[3] != VAR_5)
    return 0;
  if (!FUNC_15 (VAR_9, VAR_6,
           VAR_7, &VAR_10))
     return 0;
  VAR_9 = FUNC_0 (VAR_10);

  if (FUNC_1 (FUNC_4 (VAR_10, 0)) == VAR_1
      || FUNC_1 (FUNC_4 (VAR_10, 0)) == VAR_0)
    {
      VAR_12 = 1;
      VAR_9 = FUNC_16 (VAR_9);
    }

  if (VAR_9 != VAR_2)
    {
      VAR_11 = VAR_5;
      if (VAR_12)
 FUNC_2 (VAR_10,
    FUNC_18
      (FUNC_0 (VAR_10)));
      else
 FUNC_2 (VAR_10, FUNC_17 (FUNC_0 (VAR_10)));
    }
  FUNC_3 (VAR_10, VAR_13);


  if ((VAR_9 == VAR_2) == (VAR_8[3] == VAR_5))
    {
      switch (FUNC_1 (VAR_8[0]))
 {
   case 129:
            FUNC_5 (FUNC_13 (VAR_8[0], VAR_8[2], VAR_11, VAR_10));
     break;
   case 130:
            FUNC_5 (FUNC_12 (VAR_8[0], VAR_8[2], VAR_11, VAR_10));
     break;
   case 128:
            FUNC_5 (FUNC_14 (VAR_8[0], VAR_8[2], VAR_11, VAR_10));
     break;
   case 131:
            FUNC_5 (FUNC_11 (VAR_8[0], VAR_8[2], VAR_11, VAR_10));
     break;
   default:
     FUNC_6 ();
 }
    }
  else
    {
      switch (FUNC_1 (VAR_8[0]))
 {
   case 129:
            FUNC_5 (FUNC_9 (VAR_8[0], VAR_8[2], VAR_11, VAR_10));
     break;
   case 130:
            FUNC_5 (FUNC_8 (VAR_8[0], VAR_8[2], VAR_11, VAR_10));
     break;
   case 128:
            FUNC_5 (FUNC_10 (VAR_8[0], VAR_8[2], VAR_11, VAR_10));
     break;
   case 131:
            FUNC_5 (FUNC_7 (VAR_8[0], VAR_8[2], VAR_11, VAR_10));
     break;
   default:
     FUNC_6 ();
 }
    }
  return 1;
}
