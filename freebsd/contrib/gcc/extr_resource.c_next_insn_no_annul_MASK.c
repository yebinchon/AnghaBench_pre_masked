
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_8 (scalar_t__,int ,int ) ;

__attribute__((used)) static rtx
FUNC_9 (rtx VAR_4)
{
  if (VAR_4)
    {


      if (FUNC_3 (VAR_4)
   && FUNC_1 (VAR_4)
   && FUNC_4 (FUNC_7 (VAR_4)) != VAR_4)
 {
   rtx VAR_5 = FUNC_4 (VAR_4);
   enum rtx_code VAR_6 = FUNC_0 (VAR_5);

   while ((VAR_6 == VAR_1 || VAR_6 == VAR_2 || VAR_6 == VAR_0)
   && FUNC_2 (VAR_5))
     {
       VAR_4 = VAR_5;
       VAR_5 = FUNC_4 (VAR_4);
       VAR_6 = FUNC_0 (VAR_5);
     }
 }

      VAR_4 = FUNC_4 (VAR_4);
      if (VAR_4 && FUNC_5 (VAR_4)
   && FUNC_0 (FUNC_6 (VAR_4)) == VAR_3)
 VAR_4 = FUNC_8 (FUNC_6 (VAR_4), 0, 0);
    }

  return VAR_4;
}
