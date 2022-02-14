
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__,int,scalar_t__*,int ,int,int) ;
 scalar_t__ FUNC_7 (scalar_t__) ;

rtx
FUNC_8 (rtx VAR_2, rtx *VAR_3, int VAR_4, int VAR_5)
{
  rtx VAR_6;
  int VAR_7;
  rtx VAR_8;


  if (!FUNC_2 (VAR_2)
      || ! FUNC_5 (VAR_2))
    return 0;
  VAR_8 = FUNC_7 (VAR_2);

  VAR_6 = FUNC_4 (FUNC_3 (VAR_8), 0);



  VAR_7
    = FUNC_0 (FUNC_4 (FUNC_3 (VAR_8), 2)) == VAR_0
      && FUNC_4 (FUNC_4 (FUNC_3 (VAR_8), 2), 0) == FUNC_1 (VAR_2);

  return FUNC_6 (VAR_2, VAR_6, VAR_7, VAR_3, VAR_1,
     VAR_4, VAR_5);
}
