
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int REAL_VALUE_TYPE ;
typedef int HOST_WIDE_INT ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int ,int ,int ) ;
 int FUNC_10 (int ,int,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_11 (int,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (int *,int ,int,int,int ) ;
 scalar_t__ FUNC_14 (int *,int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,int ,int ,int ) ;

__attribute__((used)) static rtx
FUNC_17 (tree VAR_8, rtx VAR_9, rtx VAR_10)
{
  tree VAR_11 = FUNC_3 (VAR_8, 1);
  tree VAR_12, VAR_13;

  if (! FUNC_16 (VAR_11, VAR_3, VAR_3, VAR_4))
    return 0;

  VAR_12 = FUNC_6 (VAR_11);
  VAR_13 = FUNC_6 (FUNC_0 (VAR_11));

  if (FUNC_1 (VAR_13) == VAR_2
      && ! FUNC_2 (VAR_13))
    {
      REAL_VALUE_TYPE VAR_14;
      REAL_VALUE_TYPE VAR_15;
      HOST_WIDE_INT VAR_16;

      VAR_15 = FUNC_4 (VAR_13);
      VAR_16 = FUNC_15 (&VAR_15);
      FUNC_13 (&VAR_14, VAR_5, VAR_16, VAR_16 < 0 ? -1 : 0, 0);
      if (FUNC_14 (&VAR_15, &VAR_14))
 {



   if ((VAR_16 >= -1 && VAR_16 <= 2)
       || (VAR_6
    && ! VAR_7
    && FUNC_12 (VAR_16) <= VAR_1))
     {
       enum machine_mode VAR_17 = FUNC_7 (FUNC_5 (VAR_8));
       rtx VAR_18 = FUNC_9 (VAR_12, VAR_10, VAR_5, 0);
       VAR_18 = FUNC_11 (VAR_17, VAR_18);
       return FUNC_10 (VAR_18, VAR_17, VAR_16);
     }
 }
    }

  if (! VAR_6)
    return VAR_0;
  return FUNC_8 (VAR_8, VAR_9, VAR_10);
}
