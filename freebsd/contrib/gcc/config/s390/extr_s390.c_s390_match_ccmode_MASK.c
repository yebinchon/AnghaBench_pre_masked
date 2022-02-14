
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int) ;

bool
FUNC_5 (rtx VAR_3, enum machine_mode VAR_4)
{
  int VAR_5;


  if (VAR_4 == VAR_2)
    return 0;

  if (FUNC_0 (FUNC_1 (VAR_3)) == VAR_1)
    return FUNC_4 (FUNC_1 (VAR_3), VAR_4);

  if (FUNC_0 (FUNC_1 (VAR_3)) == VAR_0)
      for (VAR_5 = 0; VAR_5 < FUNC_3 (FUNC_1 (VAR_3), 0); VAR_5++)
        {
          rtx VAR_6 = FUNC_2 (FUNC_1 (VAR_3), 0, VAR_5);
          if (FUNC_0 (VAR_6) == VAR_1)
            if (!FUNC_4 (VAR_6, VAR_4))
              return 0;
        }

  return 1;
}
