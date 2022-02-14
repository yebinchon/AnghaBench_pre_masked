
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (int,scalar_t__) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_13 (int ,scalar_t__) ;
 scalar_t__ FUNC_14 (int,int,scalar_t__) ;
 scalar_t__ FUNC_15 (int ,int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_16 (int,int,int) ;
 scalar_t__ FUNC_17 (scalar_t__,scalar_t__) ;

void
FUNC_18 (enum rtx_code VAR_9, enum machine_mode VAR_10,
    rtx VAR_11[])
{
  rtx VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
  bool VAR_18;
  bool VAR_19 = 0;
  bool VAR_20 = FUNC_3 (VAR_10);
  enum machine_mode VAR_21 = VAR_10;

  if (VAR_20)
    {
      VAR_21 = FUNC_0 (VAR_10);
      VAR_19 = 1;
    }
  else if (VAR_6)
    VAR_19 = FUNC_2 (VAR_10);



  if (VAR_19)
    VAR_12 = FUNC_16 (VAR_21, VAR_20, VAR_9 == VAR_0);
  else
    VAR_12 = VAR_5;

  VAR_16 = VAR_11[0];
  VAR_17 = VAR_11[1];



  VAR_18 = 0;
  if (FUNC_1 (VAR_16))
    {
      if (VAR_19 && FUNC_17 (VAR_16, VAR_17))
 VAR_18 = 1;
      else
 VAR_16 = FUNC_7 (VAR_10);
    }
  if (FUNC_1 (VAR_17) && !VAR_18)
    VAR_17 = FUNC_6 (VAR_10, VAR_17);

  if (VAR_20)
    {
      VAR_13 = FUNC_15 (VAR_9 == VAR_4 ? VAR_8 : VAR_1, VAR_10, VAR_17, VAR_12);
      VAR_13 = FUNC_12 (VAR_7, VAR_16, VAR_13);
      FUNC_4 (VAR_13);
    }
  else
    {
      VAR_13 = FUNC_14 (VAR_9, VAR_10, VAR_17);
      VAR_13 = FUNC_12 (VAR_7, VAR_16, VAR_13);
      if (VAR_12)
        {
          VAR_14 = FUNC_13 (VAR_7, VAR_12);
          VAR_15 = FUNC_9 (VAR_7, FUNC_11 (VAR_2, VAR_3));
          FUNC_4 (FUNC_10 (VAR_7,
           FUNC_8 (3, VAR_13, VAR_14, VAR_15)));
        }
      else
 FUNC_4 (VAR_13);
    }

  if (VAR_16 != VAR_11[0])
    FUNC_5 (VAR_11[0], VAR_16);
}
