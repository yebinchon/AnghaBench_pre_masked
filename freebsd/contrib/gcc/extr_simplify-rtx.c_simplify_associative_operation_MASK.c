
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 scalar_t__ FUNC_2 (int,int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int,int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static rtx
FUNC_5 (enum rtx_code VAR_0, enum machine_mode VAR_1,
    rtx VAR_2, rtx VAR_3)
{
  rtx VAR_4;


  if (FUNC_0 (VAR_3) == VAR_0)
    {

      if (FUNC_0 (VAR_2) == VAR_0)
 {
   VAR_4 = FUNC_3 (VAR_0, VAR_1, VAR_2, FUNC_1 (VAR_3, 0));
   return FUNC_3 (VAR_0, VAR_1, VAR_4, FUNC_1 (VAR_3, 1));
 }


      if (! FUNC_4 (VAR_3, VAR_2))
 return FUNC_3 (VAR_0, VAR_1, VAR_3, VAR_2);

      VAR_4 = VAR_2;
      VAR_2 = VAR_3;
      VAR_3 = VAR_4;
    }

  if (FUNC_0 (VAR_2) == VAR_0)
    {

      if (FUNC_4 (FUNC_1 (VAR_2, 1), VAR_3))
 {
   VAR_4 = FUNC_3 (VAR_0, VAR_1, FUNC_1 (VAR_2, 0), VAR_3);
   return FUNC_3 (VAR_0, VAR_1, VAR_4, FUNC_1 (VAR_2, 1));
 }


      VAR_4 = FUNC_4 (FUNC_1 (VAR_2, 1), VAR_3)
     ? FUNC_2 (VAR_0, VAR_1, VAR_3, FUNC_1 (VAR_2, 1))
     : FUNC_2 (VAR_0, VAR_1, FUNC_1 (VAR_2, 1), VAR_3);
      if (VAR_4 != 0)
        return FUNC_3 (VAR_0, VAR_1, FUNC_1 (VAR_2, 0), VAR_4);


      VAR_4 = FUNC_4 (FUNC_1 (VAR_2, 0), VAR_3)
     ? FUNC_2 (VAR_0, VAR_1, VAR_3, FUNC_1 (VAR_2, 0))
     : FUNC_2 (VAR_0, VAR_1, FUNC_1 (VAR_2, 0), VAR_3);
      if (VAR_4 != 0)
        return FUNC_3 (VAR_0, VAR_1, VAR_4, FUNC_1 (VAR_2, 1));
    }

  return 0;
}
