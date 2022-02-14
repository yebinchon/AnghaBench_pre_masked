
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ rtx ;
struct TYPE_2__ {scalar_t__ truncated_to_mode; scalar_t__ last_death; scalar_t__ last_set_sign_bit_copies; scalar_t__ last_set_nonzero_bits; scalar_t__ last_set_mode; scalar_t__ last_set_value; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 unsigned int VAR_0 ;
 size_t FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (scalar_t__) ;
 unsigned int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int ,unsigned int) ;
 scalar_t__ FUNC_9 (scalar_t__,int) ;
 int** VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (int ,int ,scalar_t__) ;
 int VAR_7 ;
 int FUNC_11 (scalar_t__,scalar_t__,scalar_t__) ;
 TYPE_1__* VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_12 (rtx VAR_10)
{
  rtx VAR_11;
  unsigned int VAR_12;

  for (VAR_11 = FUNC_5 (VAR_10); VAR_11; VAR_11 = FUNC_9 (VAR_11, 1))
    {
      if (FUNC_6 (VAR_11) == VAR_2
   && FUNC_7 (FUNC_9 (VAR_11, 0)))
 {
   unsigned int VAR_13 = FUNC_4 (FUNC_9 (VAR_11, 0));
   unsigned int VAR_14
     = VAR_13 + (VAR_13 < VAR_0
         ? VAR_4[VAR_13][FUNC_1 (FUNC_9 (VAR_11, 0))]
         : 1);

   for (VAR_12 = VAR_13; VAR_12 < VAR_14; VAR_12++)
     VAR_8[VAR_12].last_death = VAR_10;
 }
      else if (FUNC_6 (VAR_11) == VAR_3)
 FUNC_11 (FUNC_9 (VAR_11, 0), VAR_10, VAR_1);
    }

  if (FUNC_0 (VAR_10))
    {
      for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++)
 if (FUNC_8 (VAR_9, VAR_12))
   {
     VAR_8[VAR_12].last_set_value = 0;
     VAR_8[VAR_12].last_set_mode = 0;
     VAR_8[VAR_12].last_set_nonzero_bits = 0;
     VAR_8[VAR_12].last_set_sign_bit_copies = 0;
     VAR_8[VAR_12].last_death = 0;
     VAR_8[VAR_12].truncated_to_mode = 0;
   }

      VAR_5 = VAR_6 = FUNC_2 (VAR_10);





      FUNC_10 (FUNC_3 (VAR_10), VAR_7, VAR_1);
    }
  else
    FUNC_10 (FUNC_3 (VAR_10), VAR_7, VAR_10);
}
