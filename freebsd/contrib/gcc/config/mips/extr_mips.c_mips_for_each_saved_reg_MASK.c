
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int mips_save_restore_fn ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_6__ {TYPE_2__* machine; } ;
struct TYPE_4__ {int fmask; scalar_t__ fp_sp_offset; int mask; scalar_t__ gp_sp_offset; } ;
struct TYPE_5__ {TYPE_1__ frame; } ;
typedef scalar_t__ HOST_WIDE_INT ;


 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_3__* VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int,int,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_3 (HOST_WIDE_INT VAR_10, mips_save_restore_fn VAR_11)
{


  enum machine_mode VAR_12;
  HOST_WIDE_INT VAR_13;
  int VAR_14;





  VAR_13 = VAR_8->machine->frame.gp_sp_offset - VAR_10;
  for (VAR_14 = VAR_5; VAR_14 >= VAR_4; VAR_14--)
    if ((((VAR_8->machine->frame.mask) & (1L << (VAR_14 - VAR_4))) != 0))
      {
 FUNC_2 (VAR_9, VAR_14, VAR_13, VAR_11);
 VAR_13 -= FUNC_1 (VAR_9);
      }



  VAR_13 = VAR_8->machine->frame.fp_sp_offset - VAR_10;
  VAR_12 = (VAR_7 ? VAR_6 : VAR_0);
  for (VAR_14 = (VAR_3 - VAR_1 + 1);
       VAR_14 >= VAR_2;
       VAR_14 -= VAR_1)
    if ((((VAR_8->machine->frame.fmask) & (1L << (VAR_14 - VAR_2))) != 0))
      {
 FUNC_2 (VAR_12, VAR_14, VAR_13, VAR_11);
 VAR_13 -= FUNC_1 (VAR_12);
      }

}
