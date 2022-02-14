
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int rtx ;
struct TYPE_3__ {int outgoing_args; int saved_regs; int locals_base; } ;
typedef TYPE_1__ arm_stack_offsets ;
typedef int HOST_WIDE_INT ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 TYPE_1__* FUNC_3 () ;
 int * VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,size_t) ;
 int FUNC_12 (int ,int ) ;
 int VAR_8 ;
 scalar_t__* VAR_9 ;
 int VAR_10 ;

void
FUNC_13 (void)
{
  HOST_WIDE_INT VAR_11;
  arm_stack_offsets *VAR_12;
  int VAR_13;


  if (FUNC_1 (FUNC_2 ()))
    return;

  VAR_12 = FUNC_3 ();
  VAR_11 = VAR_12->outgoing_args - VAR_12->saved_regs;

  if (VAR_7)
    {
      FUNC_4 (FUNC_8 (VAR_10, VAR_8));
      VAR_11 = VAR_12->locals_base - VAR_12->saved_regs;
    }

  FUNC_5 (VAR_11 >= 0);
  if (VAR_11)
    {
      if (VAR_11 < 512)
 FUNC_4 (FUNC_6 (VAR_10, VAR_10,
          FUNC_0 (VAR_11)));
      else
 {

   rtx VAR_14 = FUNC_11 (VAR_2, VAR_0);

   FUNC_4 (FUNC_8 (VAR_14, FUNC_0 (VAR_11)));
   FUNC_4 (FUNC_6 (VAR_10, VAR_10, VAR_14));
 }
    }



  FUNC_4 (FUNC_9 (VAR_10));

  if (VAR_6 || !VAR_3)
    FUNC_4 (FUNC_7 ());



  for (VAR_13 = 0; VAR_13 < 13; VAR_13++)
    if (VAR_9[VAR_13] && !VAR_5[VAR_13])
      FUNC_4 (FUNC_10 (VAR_4, FUNC_11 (VAR_2, VAR_13)));

  if (! VAR_9[VAR_1])
    FUNC_4 (FUNC_12 (VAR_4, FUNC_11 (VAR_2, VAR_1)));
}
