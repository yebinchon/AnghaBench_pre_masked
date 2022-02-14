
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int,int ,scalar_t__,scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__,scalar_t__) ;

__attribute__((used)) static rtx
FUNC_9 (rtx VAR_3)
{
  rtx VAR_4, VAR_5;

  if (FUNC_5 (VAR_3))
    VAR_4 = FUNC_3 (FUNC_7 (VAR_3));
  else
    return VAR_1;
  VAR_5 = FUNC_4 (VAR_4, 0);



  if (FUNC_0 (FUNC_4 (VAR_4, 2)) == VAR_0
      && FUNC_4 (FUNC_4 (VAR_4, 2), 0) == FUNC_2 (VAR_3))
    {
      enum rtx_code VAR_6 = FUNC_8 (VAR_5, VAR_3);
      if (VAR_6 == VAR_2)
 return VAR_1;

      VAR_5 = FUNC_6 (VAR_6, FUNC_1 (VAR_5), FUNC_4 (VAR_5, 0),
        FUNC_4 (VAR_5, 1));
    }

  return VAR_5;
}
