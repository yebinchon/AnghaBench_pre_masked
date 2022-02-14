
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (int ) ;

 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;


 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

 int FUNC_12 () ;

__attribute__((used)) static bool
FUNC_13 (tree VAR_1)
{
  enum machine_mode VAR_2 = FUNC_10 (VAR_1);
  if (FUNC_3 (VAR_2)
      && (!FUNC_11 (VAR_1) || FUNC_7 (VAR_1) > 128))
    return 1;
  if (FUNC_7 (VAR_1) < 128)
    return 0;

  if (FUNC_0 (VAR_1))
    {

      switch (FUNC_5 (VAR_1))
 {
 case 129:
 case 128:
 case 130:
   {
     tree VAR_3;

     if (FUNC_8 (VAR_1))
       {
  tree VAR_4, VAR_5;
  int VAR_6;

  for (VAR_4 = FUNC_8 (VAR_1), VAR_6 = 0;
       FUNC_1 (VAR_4, VAR_6, VAR_5); VAR_6++)
    if (FUNC_13
        (FUNC_2 (VAR_5)))
      return 1;
       }

     for (VAR_3 = FUNC_9 (VAR_1); VAR_3; VAR_3 = FUNC_4 (VAR_3))
       {
  if (FUNC_5 (VAR_3) == VAR_0
      && FUNC_13 (FUNC_6 (VAR_3)))
    return 1;
       }
     break;
   }

 case 131:

   if (FUNC_13 (FUNC_6 (VAR_1)))
     return 1;
   break;

 default:
   FUNC_12 ();
 }
    }
  return 0;
}
