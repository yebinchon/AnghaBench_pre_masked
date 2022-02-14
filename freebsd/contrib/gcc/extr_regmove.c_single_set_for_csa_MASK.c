
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_5 (scalar_t__,int ,int) ;
 int FUNC_6 (scalar_t__,int ) ;
 scalar_t__ FUNC_7 (scalar_t__) ;

__attribute__((used)) static rtx
FUNC_8 (rtx VAR_5)
{
  int VAR_6;
  rtx VAR_7 = FUNC_7 (VAR_5);
  if (VAR_7)
    return VAR_7;

  if (!FUNC_1 (VAR_5)
      || FUNC_0 (FUNC_2 (VAR_5)) != VAR_2)
    return VAR_1;

  VAR_7 = FUNC_2 (VAR_5);
  if (FUNC_0 (FUNC_5 (VAR_7, 0, 0)) != VAR_3)
    return VAR_1;

  for (VAR_6 = 1; VAR_6 < FUNC_6 (VAR_7, 0); ++VAR_6)
    {
      rtx VAR_8 = FUNC_5 (VAR_7, 0, VAR_6);


      if (FUNC_0 (VAR_8) == VAR_3
   && FUNC_4 (VAR_8) == FUNC_3 (VAR_8))
 ;
      else if (FUNC_0 (VAR_8) != VAR_0
        && FUNC_0 (VAR_8) != VAR_4)
 return VAR_1;
    }

  return FUNC_5 (VAR_7, 0, 0);
}
