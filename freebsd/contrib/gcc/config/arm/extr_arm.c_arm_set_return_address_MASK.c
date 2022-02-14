
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int rtx ;
struct TYPE_3__ {int outgoing_args; int frame; } ;
typedef TYPE_1__ arm_stack_offsets ;
typedef int HOST_WIDE_INT ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_1 () ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int) ;
 int VAR_3 ;
 int FUNC_8 (int ,int) ;
 int VAR_4 ;

void
FUNC_9 (rtx VAR_5, rtx VAR_6)
{
  arm_stack_offsets *VAR_7;
  HOST_WIDE_INT VAR_8;
  rtx VAR_9;
  unsigned long VAR_10;

  VAR_10 = FUNC_1 ();

  if ((VAR_10 & (1 << VAR_0)) == 0)
    FUNC_4 (FUNC_7 (VAR_1, VAR_0), VAR_5);
  else
    {
      if (VAR_2)
 VAR_9 = FUNC_8(VAR_3, -4);
      else
 {

   VAR_7 = FUNC_2 ();
   VAR_8 = VAR_7->outgoing_args - (VAR_7->frame + 4);


   if (VAR_8 >= 4096)
     {
       FUNC_3 (FUNC_5 (VAR_6, VAR_4,
         FUNC_0 (VAR_8 & ~4095)));
       VAR_9 = VAR_6;
       VAR_8 &= 4095;
     }
   else
     VAR_9 = VAR_4;

   VAR_9 = FUNC_8 (VAR_9, VAR_8);
 }
      FUNC_4 (FUNC_6 (VAR_1, VAR_9), VAR_5);
    }
}
