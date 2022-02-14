
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_2__ {int last_set_nonzero_bits; scalar_t__ last_set; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 unsigned int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__,int) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_11 (scalar_t__) ;

__attribute__((used)) static void
FUNC_12 (rtx VAR_2, rtx VAR_3)
{
  rtx VAR_4, VAR_5;
  unsigned int VAR_6 = FUNC_4 (FUNC_9 (VAR_3));
  enum machine_mode VAR_7 = FUNC_0 (VAR_3);

  if (FUNC_1 (VAR_7) > VAR_0)
    return;

  for (VAR_4 = FUNC_3 (VAR_2); VAR_4;)
    {
      VAR_2 = FUNC_10 (VAR_4, 0);
      VAR_5 = FUNC_11 (VAR_2);

      if (! VAR_5 || !FUNC_5 (FUNC_6 (VAR_5))
   || FUNC_4 (FUNC_6 (VAR_5)) != VAR_6
   || FUNC_0 (FUNC_6 (VAR_5)) != FUNC_0 (FUNC_9 (VAR_3)))
 {
   VAR_4 = FUNC_10 (VAR_4, 1);
   continue;
 }

      if (VAR_1[VAR_6].last_set == VAR_2)
 {
   if (FUNC_8 (VAR_3) > 0)
     VAR_1[VAR_6].last_set_nonzero_bits &= FUNC_2 (VAR_7);
 }

      if (FUNC_5 (FUNC_7 (VAR_5)))
 {
   VAR_6 = FUNC_4 (FUNC_7 (VAR_5));
   VAR_4 = FUNC_3 (VAR_2);
 }
      else
 break;
    }
}
