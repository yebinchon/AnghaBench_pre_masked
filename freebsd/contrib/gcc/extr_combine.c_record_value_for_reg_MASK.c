
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_2__ {int last_set_mode; scalar_t__ last_set_table_tick; int last_set_invalid; scalar_t__ last_set_sign_bit_copies; scalar_t__ last_set_nonzero_bits; void* last_set_value; scalar_t__ last_set_label; scalar_t__ truncated_to_mode; scalar_t__ last_death; void* last_set; } ;


 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_1 (void*) ;
 size_t FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (void*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int FUNC_6 (void*) ;
 void* FUNC_7 (void*,int) ;
 int VAR_5 ;
 void* FUNC_8 (void*) ;
 int FUNC_9 (void*,void*,int) ;
 scalar_t__ FUNC_10 (void*) ;
 void* FUNC_11 (size_t,int ) ;
 void* FUNC_12 (void*) ;
 int FUNC_13 (void**,void*,scalar_t__,int) ;
 int** VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_14 (void*,int) ;
 int VAR_8 ;
 scalar_t__ FUNC_15 (void*,size_t) ;
 scalar_t__ FUNC_16 (void*,void*) ;
 TYPE_1__* VAR_9 ;
 void* FUNC_17 (void*,void*,void*) ;
 int VAR_10 ;
 int FUNC_18 (void*) ;

__attribute__((used)) static void
FUNC_19 (rtx VAR_11, rtx VAR_12, rtx VAR_13)
{
  unsigned int VAR_14 = FUNC_6 (VAR_11);
  unsigned int VAR_15
    = VAR_14 + (VAR_14 < VAR_1
        ? VAR_6[VAR_14][FUNC_2 (VAR_11)] : 1);
  unsigned int VAR_16;



  if (VAR_13 && VAR_12 && FUNC_16 (VAR_11, VAR_13))
    {
      rtx VAR_17;



      VAR_10 = FUNC_5 (VAR_12);
      VAR_17 = FUNC_12 (VAR_11);





      if (VAR_17)
 {
   if (FUNC_0 (VAR_17)
       && FUNC_1 (FUNC_7 (VAR_17, 0)) == VAR_0
       && FUNC_1 (FUNC_7 (VAR_17, 1)) == VAR_0)
     VAR_17 = FUNC_7 (VAR_17, 0);
   else if (FUNC_9 (VAR_13, VAR_11, 1) >= 2)
     {


       if (FUNC_10 (VAR_17) > VAR_3)
  VAR_17 = FUNC_11 (FUNC_2 (VAR_17), VAR_5);
     }

   VAR_13 = FUNC_17 (FUNC_8 (VAR_13), VAR_11, VAR_17);
 }
    }





  for (VAR_16 = VAR_14; VAR_16 < VAR_15; VAR_16++)
    {
      if (VAR_12)
 VAR_9[VAR_16].last_set = VAR_12;

      VAR_9[VAR_16].last_set_value = 0;
      VAR_9[VAR_16].last_set_mode = 0;
      VAR_9[VAR_16].last_set_nonzero_bits = 0;
      VAR_9[VAR_16].last_set_sign_bit_copies = 0;
      VAR_9[VAR_16].last_death = 0;
      VAR_9[VAR_16].truncated_to_mode = 0;
    }


  if (VAR_13)
    FUNC_18 (VAR_13);
  for (VAR_16 = VAR_14; VAR_16 < VAR_15; VAR_16++)
    {
      VAR_9[VAR_16].last_set_label = VAR_7;
      if (!VAR_12 || (VAR_13 && VAR_9[VAR_16].last_set_table_tick == VAR_7))
 VAR_9[VAR_16].last_set_invalid = 1;
      else
 VAR_9[VAR_16].last_set_invalid = 0;
    }




  if (VAR_13 && ! FUNC_13 (&VAR_13, VAR_12,
       VAR_9[VAR_14].last_set_label, 0))
    {
      VAR_13 = FUNC_8 (VAR_13);
      if (! FUNC_13 (&VAR_13, VAR_12,
         VAR_9[VAR_14].last_set_label, 1))
 VAR_13 = 0;
    }




  VAR_9[VAR_14].last_set_value = VAR_13;

  if (VAR_13)
    {
      enum machine_mode VAR_18 = FUNC_2 (VAR_11);
      VAR_10 = FUNC_5 (VAR_12);
      VAR_9[VAR_14].last_set_mode = VAR_18;
      if (FUNC_4 (VAR_18) == VAR_4
   && FUNC_3 (VAR_18) <= VAR_2)
 VAR_18 = VAR_8;
      VAR_9[VAR_14].last_set_nonzero_bits = FUNC_14 (VAR_13, VAR_18);
      VAR_9[VAR_14].last_set_sign_bit_copies
 = FUNC_15 (VAR_13, FUNC_2 (VAR_11));
    }
}
