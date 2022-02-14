
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef int dw_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;

__attribute__((used)) static dw_t
FUNC_3 (rtx VAR_3, rtx VAR_4)
{
  rtx VAR_5, VAR_6;

  if (VAR_3 == VAR_4)

    return VAR_0;

  VAR_5 = FUNC_2 (VAR_3, 0);
  VAR_6 = FUNC_2 (VAR_4, 0);

  if (VAR_5 == VAR_6
      || (FUNC_1 (VAR_5) && FUNC_1 (VAR_6)
   && FUNC_0 (VAR_5) == FUNC_0 (VAR_6)))

    return VAR_0;
  else if ((FUNC_1 (VAR_5) && !FUNC_1 (VAR_6))
    || (!FUNC_1 (VAR_5) && FUNC_1 (VAR_6)))


    return VAR_1 - (VAR_1 - VAR_2) / 2;
  else

    return VAR_2;
}
