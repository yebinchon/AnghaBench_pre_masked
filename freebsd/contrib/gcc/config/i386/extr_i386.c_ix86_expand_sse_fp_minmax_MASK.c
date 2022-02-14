
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef int rtvec ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int,int ,int) ;
 int FUNC_6 (int,int,int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;

__attribute__((used)) static bool
FUNC_8 (rtx VAR_9, enum rtx_code VAR_10, rtx VAR_11,
      rtx VAR_12, rtx VAR_13, rtx VAR_14)
{
  enum machine_mode VAR_15;
  bool VAR_16;
  rtx VAR_17;

  if (VAR_10 == VAR_0)
    ;
  else if (VAR_10 == VAR_3)
    {
      VAR_17 = VAR_13;
      VAR_13 = VAR_14;
      VAR_14 = VAR_17;
    }
  else
    return 0;

  if (FUNC_7 (VAR_11, VAR_13) && FUNC_7 (VAR_12, VAR_14))
    VAR_16 = 1;
  else if (FUNC_7 (VAR_12, VAR_13) && FUNC_7 (VAR_11, VAR_14))
    VAR_16 = 0;
  else
    return 0;

  VAR_15 = FUNC_0 (VAR_9);



  if (!VAR_7 || !VAR_8)
    {
      int VAR_18 = VAR_16 ? VAR_5 : VAR_4;
      rtvec VAR_19;

      VAR_13 = FUNC_2 (VAR_15, VAR_13);
      VAR_19 = FUNC_3 (2, VAR_13, VAR_14);
      VAR_17 = FUNC_5 (VAR_15, VAR_19, VAR_18);
    }
  else
    {
      VAR_10 = VAR_16 ? VAR_2 : VAR_1;
      VAR_17 = FUNC_6 (VAR_10, VAR_15, VAR_13, VAR_14);
    }

  FUNC_1 (FUNC_4 (VAR_6, VAR_9, VAR_17));
  return 1;
}
