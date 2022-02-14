
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;

int
FUNC_4 (rtx VAR_4)
{
  rtx VAR_5 = FUNC_3 (VAR_4);
  enum rtx_code VAR_6, VAR_7;

  if (!VAR_5)
    return 0;
  if (FUNC_0 (FUNC_1 (VAR_5)) != VAR_0)
    return 0;

  VAR_6 = FUNC_0 (FUNC_2 (FUNC_1 (VAR_5), 1));
  VAR_7 = FUNC_0 (FUNC_2 (FUNC_1 (VAR_5), 2));

  return ((VAR_7 == VAR_2 && (VAR_6 == VAR_1 || VAR_6 == VAR_3))
   || (VAR_6 == VAR_2 && (VAR_7 == VAR_1 || VAR_7 == VAR_3)));
}
