
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;

const char *
FUNC_3 (rtx *VAR_5)
{
  enum rtx_code VAR_6;

  VAR_6 = FUNC_0 (VAR_5[1]);
  if (VAR_6 == VAR_0 || VAR_6 == VAR_1 || VAR_6 == VAR_2 || VAR_6 == VAR_3 || VAR_6 == VAR_4)
    {
      FUNC_1 (VAR_5[1], FUNC_2 (VAR_6));
      return "isel %0,%3,%2,%j1";
    }
  else
    return "isel %0,%2,%3,%j1";
}
