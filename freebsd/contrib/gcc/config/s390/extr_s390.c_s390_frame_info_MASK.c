
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int frame_size; int backchain_offset; int f0_offset; int f4_offset; int f8_offset; int high_fprs; int gprs_offset; int first_save_gpr_slot; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 TYPE_1__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4 (void)
{
  int VAR_16;

  VAR_9.frame_size = FUNC_3 ();
  if (!VAR_4 && VAR_9.frame_size > 0x7fff0000)
    FUNC_2 ("total size of local variables exceeds architecture limit");

  if (!VAR_6)
    {
      VAR_9.backchain_offset = 0;
      VAR_9.f0_offset = 16 * VAR_8;
      VAR_9.f4_offset = VAR_9.f0_offset + 2 * 8;
      VAR_9.f8_offset = -VAR_9.high_fprs * 8;
      VAR_9.gprs_offset = (VAR_9.first_save_gpr_slot
           * VAR_8);
    }
  else if (VAR_5)
    {
      VAR_9.backchain_offset = (VAR_2
         - VAR_8);
      VAR_9.gprs_offset
 = (VAR_9.backchain_offset
    - (VAR_3 - VAR_9.first_save_gpr_slot + 1)
    * VAR_8);

      if (VAR_4)
 {
   VAR_9.f4_offset
     = (VAR_9.gprs_offset
        - 8 * (FUNC_1 (2) + FUNC_1 (3)));

   VAR_9.f0_offset
     = (VAR_9.f4_offset
        - 8 * (FUNC_1 (0) + FUNC_1 (1)));
 }
      else
 {


   VAR_9.f0_offset
     = ((VAR_9.gprs_offset
  & ~(VAR_1 / VAR_0 - 1))
        - 8 * (FUNC_1 (0) + FUNC_1 (1)));

   VAR_9.f4_offset
     = (VAR_9.f0_offset
        - 8 * (FUNC_1 (2) + FUNC_1 (3)));
 }
    }
  else
    {
      VAR_9.f4_offset
 = (VAR_2
    - 8 * (FUNC_1 (2) + FUNC_1 (3)));

      VAR_9.f0_offset
 = (VAR_9.f4_offset
    - 8 * (FUNC_1 (0) + FUNC_1 (1)));

      VAR_9.gprs_offset
 = VAR_9.f0_offset - VAR_10;
    }

  if (VAR_13
      && !VAR_7
      && VAR_9.frame_size == 0
      && !VAR_11
      && !VAR_12
      && !VAR_15)
    return;

  if (!VAR_6)
    VAR_9.frame_size += (VAR_2
         + VAR_14
         + VAR_9.high_fprs * 8);
  else
    {
      if (VAR_5)
 VAR_9.frame_size += VAR_8;



      VAR_9.f8_offset = (FUNC_0 (FUNC_0 (VAR_9.f0_offset,
            VAR_9.f4_offset),
       VAR_9.gprs_offset)
         - VAR_9.high_fprs * 8);

      VAR_9.frame_size += VAR_9.high_fprs * 8;

      for (VAR_16 = 0; VAR_16 < 8; VAR_16++)
 if (FUNC_1 (VAR_16))
   VAR_9.frame_size += 8;

      VAR_9.frame_size += VAR_10;



      VAR_9.frame_size = ((VAR_9.frame_size +
           VAR_1 / VAR_0 - 1)
          & ~(VAR_1 / VAR_0 - 1));

      VAR_9.frame_size += VAR_14;
    }
}
