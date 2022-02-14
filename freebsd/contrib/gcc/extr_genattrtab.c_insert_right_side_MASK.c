
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (scalar_t__,int,int) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static rtx
FUNC_5 (enum rtx_code VAR_4, rtx VAR_5, rtx VAR_6, int VAR_7, int VAR_8)
{
  rtx VAR_9;


  if (VAR_4 == VAR_0 && VAR_6 == VAR_3)
    return VAR_5;
  if (VAR_4 == VAR_0 && VAR_6 == VAR_2)
    return VAR_2;
  if (VAR_4 == VAR_0 && VAR_5 == VAR_3)
    return VAR_6;
  if (VAR_4 == VAR_0 && VAR_5 == VAR_2)
    return VAR_2;
  if (VAR_4 == VAR_1 && VAR_6 == VAR_3)
    return VAR_3;
  if (VAR_4 == VAR_1 && VAR_6 == VAR_2)
    return VAR_5;
  if (VAR_4 == VAR_1 && VAR_5 == VAR_3)
    return VAR_3;
  if (VAR_4 == VAR_1 && VAR_5 == VAR_2)
    return VAR_6;
  if (FUNC_2 (VAR_5, VAR_6))
    return VAR_5;

  if (FUNC_0 (VAR_6) == VAR_4)
    {
      VAR_5 = FUNC_5 (VAR_4, VAR_5, FUNC_1 (VAR_6, 0),
          VAR_7, VAR_8);
      VAR_5 = FUNC_5 (VAR_4, VAR_5, FUNC_1 (VAR_6, 1),
          VAR_7, VAR_8);

      return VAR_5;
    }

  if (FUNC_0 (VAR_5) == VAR_4)
    {
      rtx VAR_10 = FUNC_5 (VAR_4, FUNC_1 (VAR_5, 1),
       VAR_6, VAR_7, VAR_8);
      if (VAR_10 != FUNC_1 (VAR_5, 1))

 VAR_9 = FUNC_3 (VAR_4, FUNC_1 (VAR_5, 0), VAR_10);
      else
 VAR_9 = VAR_5;
    }
  else
    {

      VAR_9 = FUNC_3 (VAR_4, VAR_5, VAR_6);
    }

  return FUNC_4 (VAR_9, VAR_7, VAR_8);
}
