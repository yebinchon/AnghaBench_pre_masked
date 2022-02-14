
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int) ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int,int,int ,int ) ;

__attribute__((used)) static rtx
FUNC_7 (rtx VAR_6, int VAR_7)
{
  enum machine_mode VAR_8;
  enum rtx_code VAR_9, VAR_10;
  rtx VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;

  VAR_11 = FUNC_3 (VAR_6, VAR_7);
  if (!FUNC_0 (VAR_11))
    return VAR_3;

  VAR_8 = FUNC_2 (VAR_6);
  VAR_9 = FUNC_1 (VAR_6);
  VAR_12 = FUNC_3 (VAR_6, !VAR_7);

  VAR_10 = FUNC_1 (VAR_11);
  VAR_13 = FUNC_3 (VAR_11, 0);
  VAR_14 = FUNC_3 (VAR_11, 1);



  if (VAR_9 == VAR_0 && VAR_10 == VAR_5 && FUNC_1 (VAR_12) == VAR_2)
    {
      VAR_12 = FUNC_3 (VAR_12, 0);
      VAR_9 = VAR_1;
    }

  if (VAR_7 == 0)
    {

      VAR_15 = FUNC_6 (VAR_9, VAR_8, VAR_13, VAR_12);
      VAR_16 = FUNC_6 (VAR_9, VAR_8, VAR_14, VAR_12);
    }
  else
    {

      VAR_15 = FUNC_6 (VAR_9, VAR_8, VAR_12, VAR_13);
      VAR_16 = FUNC_6 (VAR_9, VAR_8, VAR_12, VAR_14);
    }

  VAR_17 = FUNC_4 (FUNC_6 (VAR_10, VAR_8,
           VAR_15, VAR_16));
  if (FUNC_1 (VAR_17) != VAR_9
      && FUNC_5 (VAR_17, VAR_4) < FUNC_5 (VAR_6, VAR_4))
    return VAR_17;

  return VAR_3;
}
