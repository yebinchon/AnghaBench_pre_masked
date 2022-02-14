
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_7 () ;

__attribute__((used)) static bool
FUNC_8 (void)
{
  rtx VAR_7, VAR_8;



  if (VAR_4
      || VAR_5
      || VAR_6)
    return 1;

  VAR_7 = FUNC_7 ();

  for (VAR_8 = FUNC_3 (VAR_7); VAR_8 != VAR_1; VAR_8 = FUNC_3 (VAR_8))
    {
      if (FUNC_2 (VAR_8))
 {
   rtx VAR_9;
   VAR_9 = FUNC_4 (VAR_8);
   if (FUNC_0 (VAR_9) == VAR_2)
     {
       enum machine_mode VAR_10 = FUNC_1 (FUNC_5 (VAR_9));

       if (FUNC_6 (VAR_10))
  return 1;
       if (VAR_3 && VAR_10 == VAR_0)
  return 1;
     }
 }
    }

  return 0;
}
