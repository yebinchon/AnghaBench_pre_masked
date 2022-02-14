
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__,int,int ) ;

int
FUNC_4 (rtx VAR_0, rtx VAR_1, int VAR_2)
{
  rtx VAR_3 = FUNC_0 (VAR_0);

  if (VAR_1 == VAR_3)
    return 1;

  if (! FUNC_2 (VAR_0, VAR_1) || ! FUNC_1 ())
    return 0;

  FUNC_3 (VAR_0, VAR_3, VAR_1, VAR_2, 0);
  return 1;
}
