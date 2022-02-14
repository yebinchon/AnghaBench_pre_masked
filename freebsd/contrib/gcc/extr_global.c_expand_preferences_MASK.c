
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ rtx ;
struct TYPE_2__ {int hard_reg_full_preferences; int hard_reg_preferences; int hard_reg_copy_preferences; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 size_t FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__,int) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_11 () ;
 int* VAR_2 ;
 scalar_t__ FUNC_12 (scalar_t__) ;

__attribute__((used)) static void
FUNC_13 (void)
{
  rtx VAR_3;
  rtx VAR_4;
  rtx VAR_5;




  for (VAR_3 = FUNC_11 (); VAR_3; VAR_3 = FUNC_3 (VAR_3))
    if (FUNC_1 (VAR_3)
 && (VAR_5 = FUNC_12 (VAR_3)) != 0
 && FUNC_7 (FUNC_8 (VAR_5))
 && VAR_2[FUNC_4 (FUNC_8 (VAR_5))] >= 0)
      for (VAR_4 = FUNC_5 (VAR_3); VAR_4; VAR_4 = FUNC_10 (VAR_4, 1))
 if (FUNC_6 (VAR_4) == VAR_0
     && FUNC_7 (FUNC_10 (VAR_4, 0))
     && VAR_2[FUNC_4 (FUNC_10 (VAR_4, 0))] >= 0
     && ! FUNC_0 (VAR_2[FUNC_4 (FUNC_8 (VAR_5))],
       VAR_2[FUNC_4 (FUNC_10 (VAR_4, 0))]))
   {
     int VAR_6 = VAR_2[FUNC_4 (FUNC_8 (VAR_5))];
     int VAR_7 = VAR_2[FUNC_4 (FUNC_10 (VAR_4, 0))];

     if (FUNC_10 (VAR_4, 0) == FUNC_9 (VAR_5))
       {
  FUNC_2 (VAR_1[VAR_6].hard_reg_copy_preferences,
      VAR_1[VAR_7].hard_reg_copy_preferences);
  FUNC_2 (VAR_1[VAR_7].hard_reg_copy_preferences,
      VAR_1[VAR_6].hard_reg_copy_preferences);
       }

     FUNC_2 (VAR_1[VAR_6].hard_reg_preferences,
         VAR_1[VAR_7].hard_reg_preferences);
     FUNC_2 (VAR_1[VAR_7].hard_reg_preferences,
         VAR_1[VAR_6].hard_reg_preferences);
     FUNC_2 (VAR_1[VAR_6].hard_reg_full_preferences,
         VAR_1[VAR_7].hard_reg_full_preferences);
     FUNC_2 (VAR_1[VAR_7].hard_reg_full_preferences,
         VAR_1[VAR_6].hard_reg_full_preferences);
   }
}
