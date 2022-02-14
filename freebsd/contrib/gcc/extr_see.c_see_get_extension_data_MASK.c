
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (int ) ;
 int VAR_4 ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_9 (int ) ;

__attribute__((used)) static enum rtx_code
FUNC_10 (rtx VAR_6, enum machine_mode *VAR_7)
{
  rtx VAR_8, VAR_9, VAR_10;

  if (!VAR_6 || !FUNC_2 (VAR_6))
    return VAR_4;


  if (FUNC_0 (FUNC_3 (VAR_6)) == VAR_1)
    return VAR_0;

  VAR_10 = FUNC_9 (VAR_6);
  if (!VAR_10)
    return VAR_0;
  VAR_8 = FUNC_6 (VAR_10);
  VAR_9 = FUNC_5 (VAR_10);



  if (!FUNC_4 (VAR_9) && !FUNC_7 (VAR_9))
    return VAR_4;

  if (FUNC_0 (VAR_8) != VAR_2 && FUNC_0 (VAR_8) != VAR_5)
    return VAR_4;

  if (!FUNC_4 (FUNC_8 (VAR_8, 0))
      && !(FUNC_0 (FUNC_8 (VAR_8, 0)) == VAR_3
    && FUNC_4 (FUNC_7 (FUNC_8 (VAR_8, 0)))))
    return VAR_4;

  *VAR_7 = FUNC_1 (FUNC_8 (VAR_8, 0));

  if (FUNC_0 (VAR_8) == VAR_2)
    return VAR_2;
  return VAR_5;
}
