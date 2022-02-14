
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int HOST_WIDE_INT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ,int) ;
 int VAR_9 ;
 scalar_t__ FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (scalar_t__,int ,int ,int,scalar_t__) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (scalar_t__,int ,scalar_t__,int ,int,scalar_t__,scalar_t__,int,int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__,int ,scalar_t__,int ,int,int ,int) ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (int,int ,scalar_t__,scalar_t__,int ,int ,int ) ;
 int FUNC_13 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_14 (int ,int,scalar_t__,int ,int ,int) ;
 int FUNC_15 (int) ;
 scalar_t__ FUNC_16 (int,scalar_t__) ;
 scalar_t__ FUNC_17 () ;
 scalar_t__ FUNC_18 (int) ;
 scalar_t__ FUNC_19 () ;
 scalar_t__** VAR_10 ;
 int FUNC_20 () ;

__attribute__((used)) static rtx
FUNC_21 (enum machine_mode VAR_11, rtx VAR_12, HOST_WIDE_INT VAR_13)
{
  rtx VAR_14, VAR_15;
  tree VAR_16;
  int VAR_17;

  VAR_17 = FUNC_15 (VAR_13);
  VAR_16 = FUNC_3 (VAR_4, VAR_17);

  if (VAR_13 == 2 && VAR_0 >= 1)
    {
      VAR_14 = FUNC_18 (VAR_11);
      VAR_14 = FUNC_10 (VAR_14, VAR_2, VAR_12, VAR_9, VAR_11, 0, 1);
      VAR_14 = FUNC_12 (VAR_11, VAR_7, VAR_14, VAR_12, VAR_3,
      0, VAR_5);
      return FUNC_14 (VAR_6, VAR_11, VAR_14, VAR_16, VAR_3, 0);
    }
  if (VAR_0 >= 2)
    {
      int VAR_18 = FUNC_2 (VAR_11) - VAR_17;

      VAR_14 = FUNC_18 (VAR_11);
      VAR_14 = FUNC_10 (VAR_14, VAR_2, VAR_12, VAR_9, VAR_11, 0, -1);
      if (VAR_10[VAR_11][VAR_18] > FUNC_0 (1))
 VAR_14 = FUNC_12 (VAR_11, VAR_8, VAR_14, FUNC_1 (VAR_13 - 1),
        VAR_3, 0, VAR_5);
      else
 VAR_14 = FUNC_14 (VAR_6, VAR_11, VAR_14,
        FUNC_3 (VAR_4, VAR_18),
        VAR_3, 1);
      VAR_14 = FUNC_12 (VAR_11, VAR_7, VAR_14, VAR_12, VAR_3,
      0, VAR_5);
      return FUNC_14 (VAR_6, VAR_11, VAR_14, VAR_16, VAR_3, 0);
    }

  VAR_15 = FUNC_17 ();
  VAR_14 = FUNC_4 (VAR_11, VAR_12);
  FUNC_5 (VAR_14, VAR_9, VAR_1, VAR_11, VAR_15);
  FUNC_13 (VAR_14, FUNC_1 (VAR_13 - 1));
  FUNC_9 (VAR_15);
  return FUNC_14 (VAR_6, VAR_11, VAR_14, VAR_16, VAR_3, 0);
}
