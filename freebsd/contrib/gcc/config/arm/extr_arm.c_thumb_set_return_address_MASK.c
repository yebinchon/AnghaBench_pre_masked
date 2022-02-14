
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int rtx ;
struct TYPE_3__ {int soft_frame; int saved_args; int outgoing_args; } ;
typedef TYPE_1__ arm_stack_offsets ;
typedef int HOST_WIDE_INT ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int) ;
 int VAR_8 ;
 unsigned long FUNC_10 () ;

void
FUNC_11 (rtx VAR_9, rtx VAR_10)
{
  arm_stack_offsets *VAR_11;
  HOST_WIDE_INT VAR_12;
  int VAR_13;
  rtx VAR_14;
  unsigned long VAR_15;

  FUNC_2 (FUNC_8 (VAR_6, VAR_9));

  VAR_15 = FUNC_10 ();
  if (VAR_15 & (1 << VAR_0))
    {
      VAR_11 = FUNC_1 ();


      if (VAR_7)
 {
   VAR_12 = VAR_11->soft_frame - VAR_11->saved_args;
   VAR_13 = VAR_5;
 }
      else
 {
   VAR_12 = VAR_11->outgoing_args - VAR_11->saved_args;
   VAR_13 = VAR_3;
 }

      if (VAR_4)
 VAR_12 -= 16;

      VAR_12 -= 4;


      VAR_14 = FUNC_7 (VAR_2, VAR_13);
      if ((VAR_13 != VAR_3 && VAR_12 >= 128)
   || VAR_12 >= 1024)
 {
   FUNC_2 (FUNC_6 (VAR_10, FUNC_0 (VAR_12)));
   FUNC_2 (FUNC_4 (VAR_10, VAR_10, VAR_8));
   VAR_14 = VAR_10;
 }
      else
 VAR_14 = FUNC_9 (VAR_14, VAR_12);

      FUNC_3 (FUNC_5 (VAR_1, VAR_14), VAR_9);
    }
  else
    FUNC_3 (FUNC_7 (VAR_1, VAR_0), VAR_9);
}
