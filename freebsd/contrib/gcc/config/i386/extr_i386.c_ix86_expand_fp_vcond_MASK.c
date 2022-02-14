
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int,int *,int *) ;

bool
FUNC_5 (rtx VAR_1[])
{
  enum rtx_code VAR_2 = FUNC_0 (VAR_1[3]);
  rtx VAR_3;

  VAR_2 = FUNC_4 (VAR_1[0], VAR_2,
        &VAR_1[4], &VAR_1[5]);
  if (VAR_2 == VAR_0)
    return 0;

  if (FUNC_2 (VAR_1[0], VAR_2, VAR_1[4],
     VAR_1[5], VAR_1[1], VAR_1[2]))
    return 1;

  VAR_3 = FUNC_1 (VAR_1[0], VAR_2, VAR_1[4], VAR_1[5],
        VAR_1[1], VAR_1[2]);
  FUNC_3 (VAR_1[0], VAR_3, VAR_1[1], VAR_1[2]);
  return 1;
}
