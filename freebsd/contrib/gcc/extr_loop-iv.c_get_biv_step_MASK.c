
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct df_ref {int dummy; } ;
typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct df_ref*,scalar_t__,scalar_t__*,int*,int*,int,scalar_t__*) ;

__attribute__((used)) static bool
FUNC_3 (struct df_ref *VAR_2, rtx VAR_3, rtx *VAR_4,
       enum machine_mode *VAR_5, enum rtx_code *VAR_6,
       enum machine_mode *VAR_7, rtx *VAR_8)
{
  *VAR_7 = FUNC_0 (VAR_3);

  if (!FUNC_2 (VAR_2, VAR_3,
         VAR_4, VAR_5, VAR_6, *VAR_7,
         VAR_8))
    return 0;

  FUNC_1 ((*VAR_5 == *VAR_7) != (*VAR_6 != VAR_0));
  FUNC_1 (*VAR_5 != *VAR_7 || *VAR_8 == VAR_1);

  return 1;
}
