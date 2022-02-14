
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int ,int ,int ) ;
 int FUNC_3 (int ,int *) ;

rtx
FUNC_4 (rtx VAR_2)
{
  enum rtx_code VAR_3;
  VAR_3 = FUNC_3 (VAR_2, ((void*)0));
  if (VAR_3 == VAR_1)
    return VAR_0;
  else
    return FUNC_2 (VAR_3,
      FUNC_0 (VAR_2), FUNC_1 (VAR_2, 0),
      FUNC_1 (VAR_2, 1));
}
