
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_flags {int is_fp; int is_and; int is_or; } ;
typedef int rtx ;


 int VAR_0 ;

 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void
FUNC_6 (rtx VAR_2, struct reg_flags *VAR_3)
{
  rtx VAR_4 = FUNC_4 (VAR_2);

  switch (FUNC_1 (VAR_4))
    {
    case 129:
      return;

    case 128:
      return;

    default:
      if (FUNC_0 (VAR_4)
   && FUNC_3 (FUNC_2 (FUNC_5 (VAR_4, 0))))



 VAR_3->is_fp = 1;




      else if (FUNC_1 (VAR_4) == VAR_0)
 VAR_3->is_and = 1;
      else if (FUNC_1 (VAR_4) == VAR_1)
 VAR_3->is_or = 1;

      break;
    }
}
