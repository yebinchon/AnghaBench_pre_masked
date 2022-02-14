
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int rtx ;
struct TYPE_2__ {scalar_t__ reg_save_b0; scalar_t__ total_size; int mask; scalar_t__ spill_size; scalar_t__ spill_cfa_off; } ;
typedef scalar_t__ HOST_WIDE_INT ;


 unsigned int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 unsigned int FUNC_3 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ,unsigned int) ;
 TYPE_1__ VAR_2 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,unsigned int) ;
 int VAR_4 ;
 int VAR_5 ;

void
FUNC_10 (rtx VAR_6)
{
  rtx VAR_7;

  if (FUNC_4 (VAR_2.mask, FUNC_0 (0)))
    {
      if (VAR_2.reg_save_b0 != 0)
 VAR_7 = FUNC_9 (VAR_0, VAR_2.reg_save_b0);
      else
 {
   HOST_WIDE_INT VAR_8;
   unsigned int VAR_9;



   VAR_8 = (VAR_2.spill_cfa_off
   + VAR_2.spill_size);
   for (VAR_9 = FUNC_3 (1); VAR_9 <= FUNC_3 (31); ++VAR_9)
     if (FUNC_4 (VAR_2.mask, VAR_9))
       VAR_8 -= 8;


   if (VAR_3)
     VAR_7 = VAR_4;
   else
     {
       VAR_7 = VAR_5;
       VAR_8 += VAR_2.total_size;
     }


   if (FUNC_1 (VAR_8))
     FUNC_5 (FUNC_7 (VAR_6, VAR_7, FUNC_2 (VAR_8)));
   else
     {
       FUNC_6 (VAR_6, FUNC_2 (VAR_8));
       FUNC_5 (FUNC_7 (VAR_6, VAR_7, VAR_6));
     }

   VAR_7 = FUNC_8 (VAR_1, VAR_6);
 }
    }
  else
    VAR_7 = FUNC_9 (VAR_0, FUNC_0 (0));

  FUNC_6 (VAR_6, VAR_7);
}
