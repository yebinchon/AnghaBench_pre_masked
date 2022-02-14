
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_9 (int,scalar_t__,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_10 (int,scalar_t__*,scalar_t__*) ;
 int FUNC_11 (int,scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_14 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_15 (scalar_t__,int,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_16 (scalar_t__,scalar_t__) ;

int
FUNC_17 (rtx VAR_8[])
{
  enum machine_mode VAR_9 = FUNC_1 (VAR_8[0]);
  enum rtx_code VAR_10 = FUNC_0 (VAR_8[1]);
  rtx VAR_11, VAR_12, VAR_13, VAR_14;

  if (VAR_2 && FUNC_2 (VAR_9))
    {
      enum machine_mode VAR_15;




      VAR_15 = FUNC_1 (VAR_6);
      if (VAR_15 == VAR_4)
 VAR_15 = FUNC_1 (VAR_7);
      if (VAR_15 != VAR_9)
 return 0;

      VAR_10 = FUNC_15 (VAR_8[0], VAR_10,
            &VAR_6,
            &VAR_7);
      if (VAR_10 == VAR_3)
 return 0;

      if (FUNC_13 (VAR_8[0], VAR_10, VAR_6,
         VAR_7, VAR_8[2],
         VAR_8[3]))
 return 1;

      VAR_11 = FUNC_12 (VAR_8[0], VAR_10, VAR_6,
     VAR_7, VAR_8[2], VAR_8[3]);
      FUNC_14 (VAR_8[0], VAR_11, VAR_8[2], VAR_8[3]);
      return 1;
    }




  VAR_12 = FUNC_10 (VAR_10, &VAR_13, &VAR_14);




  if (!FUNC_5 (VAR_12, VAR_4))
    {
      FUNC_6 (!VAR_13 && !VAR_14);
      VAR_11 = FUNC_7 (VAR_1);
      FUNC_11 (VAR_10, VAR_11);
      VAR_10 = VAR_0;
      VAR_6 = VAR_11;
      VAR_7 = VAR_5;
      VAR_12 = FUNC_10 (VAR_10, &VAR_13, &VAR_14);
    }
  if (VAR_14 && FUNC_16 (VAR_8[0], VAR_8[3]))
    {
      VAR_11 = FUNC_7 (VAR_9);
      FUNC_4 (VAR_11, VAR_8[3]);
      VAR_8[3] = VAR_11;
    }
  if (VAR_13 && FUNC_16 (VAR_8[0], VAR_8[2]))
    {
      VAR_11 = FUNC_7 (VAR_9);
      FUNC_4 (VAR_11, VAR_8[2]);
      VAR_8[2] = VAR_11;
    }

  FUNC_3 (FUNC_9 (VAR_4, VAR_8[0],
     FUNC_8 (VAR_9, VAR_12,
      VAR_8[2], VAR_8[3])));
  if (VAR_14)
    FUNC_3 (FUNC_9 (VAR_4, VAR_8[0],
       FUNC_8 (VAR_9, VAR_14,
        VAR_8[3], VAR_8[0])));
  if (VAR_13)
    FUNC_3 (FUNC_9 (VAR_4, VAR_8[0],
       FUNC_8 (VAR_9, VAR_13,
        VAR_8[2], VAR_8[0])));

  return 1;
}
