
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int,int ,int ,int ) ;
 int FUNC_4 (int,int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;

bool
FUNC_6 (enum rtx_code VAR_5, rtx VAR_6)
{
  if (FUNC_1 (FUNC_0 (VAR_3[0])) != VAR_1)
    return 0;

  VAR_6 = FUNC_2 (FUNC_0 (VAR_3[0]), VAR_6);
  if (VAR_5 == VAR_0 || VAR_5 == VAR_2)
    {
      rtx VAR_7 = FUNC_5 (VAR_3[0], VAR_3[1]);
      FUNC_3 (VAR_5, VAR_6, VAR_7, VAR_4);
    }
  else
    FUNC_4 (VAR_5, 0, VAR_6,
         VAR_3[0], VAR_3[1]);
  return 1;
}
