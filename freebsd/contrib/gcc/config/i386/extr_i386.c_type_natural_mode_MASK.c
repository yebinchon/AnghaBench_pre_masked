
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int HOST_WIDE_INT ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;

__attribute__((used)) static enum machine_mode
FUNC_10 (tree VAR_5)
{
  enum machine_mode VAR_6 = FUNC_5 (VAR_5);

  if (FUNC_3 (VAR_5) == VAR_3 && !FUNC_7 (VAR_6))
    {
      HOST_WIDE_INT VAR_7 = FUNC_9 (VAR_5);
      if ((VAR_7 == 8 || VAR_7 == 16)

   && FUNC_6 (VAR_5) > 1)
 {
   enum machine_mode VAR_8 = FUNC_5 (FUNC_4 (VAR_5));

   if (FUNC_3 (FUNC_4 (VAR_5)) == VAR_2)
     VAR_6 = VAR_0;
   else
     VAR_6 = VAR_1;


   for (; VAR_6 != VAR_4; VAR_6 = FUNC_2 (VAR_6))
     if (FUNC_1 (VAR_6) == FUNC_6 (VAR_5)
  && FUNC_0 (VAR_6) == VAR_8)
       return VAR_6;

   FUNC_8 ();
 }
    }

  return VAR_6;
}
