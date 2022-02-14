
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int,scalar_t__) ;
 scalar_t__ FUNC_3 (int,int,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int,int,scalar_t__,int) ;

__attribute__((used)) static rtx
FUNC_5 (rtx VAR_0, enum rtx_code VAR_1, enum machine_mode VAR_2,
        rtx VAR_3, int VAR_4)
{
  rtx VAR_5 = FUNC_4 (VAR_1, VAR_2, VAR_3, VAR_4);
  if (VAR_5)
    return VAR_5;

  if (!VAR_0)
    VAR_0 = FUNC_3 (VAR_1, FUNC_1 (VAR_3), VAR_3, FUNC_0 (VAR_4));
  if (FUNC_1 (VAR_0) != VAR_2)
    VAR_0 = FUNC_2 (VAR_2, VAR_0);
  return VAR_0;
}
