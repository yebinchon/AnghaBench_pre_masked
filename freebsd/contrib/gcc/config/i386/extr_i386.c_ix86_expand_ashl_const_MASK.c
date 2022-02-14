
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_2__ {int add; int shift_const; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_9 (rtx VAR_3, int VAR_4, enum machine_mode VAR_5)
{
  if (VAR_4 == 1)
    {
      FUNC_1 ((VAR_5 == VAR_0
    ? FUNC_3
    : FUNC_2) (VAR_3, VAR_3, VAR_3));
    }
  else if (!VAR_2
    && VAR_4 * VAR_1->add <= VAR_1->shift_const)
    {
      int VAR_6;
      for (VAR_6=0; VAR_6<VAR_4; VAR_6++)
 {
   FUNC_1 ((VAR_5 == VAR_0
        ? FUNC_3
        : FUNC_2) (VAR_3, VAR_3, VAR_3));
 }
    }
  else
    FUNC_1 ((VAR_5 == VAR_0
  ? FUNC_5
  : FUNC_4) (VAR_3, VAR_3, FUNC_0 (VAR_4)));
}
