
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
 int FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__,scalar_t__) ;
 int FUNC_5 (int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (int,int ,scalar_t__) ;
 scalar_t__ FUNC_12 (int ,scalar_t__) ;
 scalar_t__ FUNC_13 (int ,scalar_t__,int ) ;
 int FUNC_14 (int,scalar_t__) ;
 scalar_t__ FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_17 (int,int ,int ) ;
 scalar_t__ FUNC_18 (int,int,scalar_t__,scalar_t__) ;

void
FUNC_19 (enum rtx_code VAR_8, rtx VAR_9, rtx VAR_10,
                       rtx VAR_11, rtx VAR_12, rtx VAR_13)
{
  enum machine_mode VAR_14 = FUNC_0 (VAR_9);
  rtx VAR_15, VAR_16, VAR_17 = FUNC_15 (VAR_1, VAR_2);

  FUNC_2 (FUNC_9 ());

  VAR_15 = FUNC_8 ();
  FUNC_3 (VAR_15);
  VAR_15 = FUNC_12 (VAR_6, VAR_15);

  if (VAR_11 == VAR_4)
    VAR_11 = VAR_13;
  FUNC_4 (VAR_14, VAR_11, VAR_9);

  if (VAR_8 == VAR_3)
    VAR_16 = FUNC_11 (VAR_14, FUNC_14 (VAR_14, VAR_11), VAR_10);
  else if (VAR_8 == VAR_0)
    VAR_16 = FUNC_17 (VAR_14, FUNC_10 (2, VAR_11, VAR_10), VAR_5);
  else
    VAR_16 = FUNC_18 (VAR_8, VAR_14, VAR_11, VAR_10);

  if (VAR_12 != VAR_4)
    FUNC_2 (FUNC_16 (VAR_6, VAR_12, FUNC_1 (VAR_16)));
  FUNC_2 (FUNC_16 (VAR_6, VAR_13, VAR_16));

  FUNC_5 (VAR_14, VAR_17, VAR_9, VAR_13);

  VAR_16 = FUNC_13 (VAR_6, VAR_17, VAR_7);
  FUNC_6 (VAR_16, VAR_15);

  FUNC_2 (FUNC_7 ());
}
