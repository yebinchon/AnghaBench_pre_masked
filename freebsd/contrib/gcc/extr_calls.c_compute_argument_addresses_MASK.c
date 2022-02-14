
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int constant; } ;
struct TYPE_4__ {unsigned int boundary; scalar_t__ where_pad; TYPE_1__ size; int slot_offset; int offset; } ;
struct arg_data {scalar_t__ reg; scalar_t__ partial; int mode; void* stack_slot; void* stack; TYPE_2__ locate; int tree_value; int pass_on_stack; } ;
typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (scalar_t__,int) ;
 scalar_t__ VAR_6 ;
 void* FUNC_6 (int,scalar_t__) ;
 scalar_t__ FUNC_7 (int ,scalar_t__,scalar_t__) ;
 int FUNC_8 (unsigned int,int ,int) ;
 scalar_t__ FUNC_9 (scalar_t__,int) ;
 int FUNC_10 (void*,int ) ;
 int FUNC_11 (void*,unsigned int) ;
 int FUNC_12 (void*,int ,int) ;
 int FUNC_13 (void*,int ) ;

__attribute__((used)) static void
FUNC_14 (struct arg_data *VAR_7, rtx VAR_8, int VAR_9)
{
  if (VAR_8)
    {
      rtx VAR_10 = VAR_8;
      int VAR_11, VAR_12 = 0;

      if (FUNC_2 (VAR_8) == VAR_3)
 VAR_10 = FUNC_5 (VAR_8, 0), VAR_12 = FUNC_3 (FUNC_5 (VAR_8, 1));

      for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++)
 {
   rtx VAR_13 = FUNC_0 (VAR_7[VAR_11].locate.offset);
   rtx VAR_14 = FUNC_0 (VAR_7[VAR_11].locate.slot_offset);
   rtx VAR_15;
   unsigned int VAR_16, VAR_17;
   unsigned int VAR_18 = 0;
   enum machine_mode VAR_19 = VAR_5;


   if (! VAR_7[VAR_11].pass_on_stack
       && VAR_7[VAR_11].reg != 0
       && VAR_7[VAR_11].partial == 0)
     continue;

   if (FUNC_2 (VAR_13) == VAR_1)
     VAR_15 = FUNC_9 (VAR_10, FUNC_3 (VAR_13));
   else
     VAR_15 = FUNC_7 (VAR_4, VAR_10, VAR_13);

   VAR_15 = FUNC_9 (VAR_15, VAR_12);

   if (VAR_7[VAR_11].partial != 0)
     {


       VAR_18 = VAR_7[VAR_11].locate.size.constant;
       VAR_19 = FUNC_8 (VAR_18 * VAR_0,
         VAR_2, 1);
       VAR_7[VAR_11].stack = FUNC_6 (VAR_19, VAR_15);
       FUNC_13 (VAR_7[VAR_11].stack, FUNC_1 (VAR_18));
     }
   else
     {
       VAR_7[VAR_11].stack = FUNC_6 (VAR_7[VAR_11].mode, VAR_15);
       FUNC_12 (VAR_7[VAR_11].stack,
      FUNC_4 (VAR_7[VAR_11].tree_value), 1);
     }
   VAR_16 = VAR_0;
   VAR_17 = VAR_7[VAR_11].locate.boundary;
   if (VAR_7[VAR_11].locate.where_pad != VAR_6)
     VAR_16 = VAR_17;
   else if (FUNC_2 (VAR_13) == VAR_1)
     {
       VAR_16 = FUNC_3 (VAR_13) * VAR_0 | VAR_17;
       VAR_16 = VAR_16 & -VAR_16;
     }
   FUNC_11 (VAR_7[VAR_11].stack, VAR_16);

   if (FUNC_2 (VAR_14) == VAR_1)
     VAR_15 = FUNC_9 (VAR_10, FUNC_3 (VAR_14));
   else
     VAR_15 = FUNC_7 (VAR_4, VAR_10, VAR_14);

   VAR_15 = FUNC_9 (VAR_15, VAR_12);

   if (VAR_7[VAR_11].partial != 0)
     {


       VAR_7[VAR_11].stack_slot = FUNC_6 (VAR_19, VAR_15);
       FUNC_13 (VAR_7[VAR_11].stack_slot, FUNC_1 (VAR_18));
     }
   else
     {
       VAR_7[VAR_11].stack_slot = FUNC_6 (VAR_7[VAR_11].mode, VAR_15);
       FUNC_12 (VAR_7[VAR_11].stack_slot,
      FUNC_4 (VAR_7[VAR_11].tree_value), 1);
     }
   FUNC_11 (VAR_7[VAR_11].stack_slot, VAR_7[VAR_11].locate.boundary);





   FUNC_10 (VAR_7[VAR_11].stack, 0);
   FUNC_10 (VAR_7[VAR_11].stack_slot, 0);
 }
    }
}
