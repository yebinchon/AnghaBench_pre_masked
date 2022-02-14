
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* machine; } ;
struct TYPE_4__ {unsigned int mask; unsigned int fmask; scalar_t__ fp_save_offset; scalar_t__ fp_sp_offset; scalar_t__ gp_save_offset; scalar_t__ gp_sp_offset; scalar_t__ num_fp; scalar_t__ num_gp; int initialized; scalar_t__ fp_reg_size; scalar_t__ gp_reg_size; scalar_t__ cprestore_size; scalar_t__ args_size; scalar_t__ var_size; scalar_t__ total_size; } ;
struct TYPE_5__ {scalar_t__ varargs_size; TYPE_1__ frame; int global_pointer; } ;
typedef scalar_t__ HOST_WIDE_INT ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 TYPE_3__* VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (unsigned int) ;
 int VAR_16 ;

HOST_WIDE_INT
FUNC_5 (HOST_WIDE_INT VAR_17)
{
  unsigned int VAR_18;
  HOST_WIDE_INT VAR_19;
  HOST_WIDE_INT VAR_20;
  HOST_WIDE_INT VAR_21;
  HOST_WIDE_INT VAR_22;
  HOST_WIDE_INT VAR_23;
  HOST_WIDE_INT VAR_24;
  HOST_WIDE_INT VAR_25;
  unsigned int VAR_26;
  unsigned int VAR_27;

  VAR_9->machine->global_pointer = FUNC_3 ();

  VAR_24 = 0;
  VAR_25 = 0;
  VAR_26 = 0;
  VAR_27 = 0;
  VAR_20 = FUNC_2 (VAR_17);
  VAR_21 = VAR_13;
  VAR_22 = FUNC_2 (VAR_6) - VAR_21;




  if (VAR_20 == 0 && VAR_12)
    VAR_22 = VAR_21 = 0;






  if (VAR_21 == 0 && VAR_10)
    VAR_21 = 4 * VAR_8;

  VAR_19 = VAR_20 + VAR_21 + VAR_22;


  for (VAR_18 = VAR_3; VAR_18 <= VAR_4; VAR_18++)
    if (FUNC_4 (VAR_18))
      {
 VAR_24 += FUNC_1 (VAR_15);
 VAR_26 |= 1 << (VAR_18 - VAR_3);
      }


  if (VAR_11)
    {
      unsigned int VAR_28;
      for (VAR_28 = 0; ; ++VAR_28)
 {
   VAR_18 = FUNC_0 (VAR_28);
   if (VAR_18 == VAR_5)
     break;
   VAR_24 += FUNC_1 (VAR_15);
   VAR_26 |= 1 << (VAR_18 - VAR_3);
 }
    }



  for (VAR_18 = (VAR_2 - VAR_0 + 1);
       VAR_18 >= VAR_1;
       VAR_18 -= VAR_0)
    {
      if (FUNC_4 (VAR_18))
 {
   VAR_25 += VAR_0 * VAR_7;
   VAR_27 |= ((1 << VAR_0) - 1) << (VAR_18 - VAR_1);
 }
    }

  VAR_23 = FUNC_2 (VAR_24);
  VAR_19 += VAR_23 + FUNC_2 (VAR_25);


  VAR_19 += VAR_14;
  VAR_19 += FUNC_2 (VAR_9->machine->varargs_size);


  VAR_9->machine->frame.total_size = VAR_19;
  VAR_9->machine->frame.var_size = VAR_20;
  VAR_9->machine->frame.args_size = VAR_21;
  VAR_9->machine->frame.cprestore_size = VAR_22;
  VAR_9->machine->frame.gp_reg_size = VAR_24;
  VAR_9->machine->frame.fp_reg_size = VAR_25;
  VAR_9->machine->frame.mask = VAR_26;
  VAR_9->machine->frame.fmask = VAR_27;
  VAR_9->machine->frame.initialized = VAR_16;
  VAR_9->machine->frame.num_gp = VAR_24 / VAR_8;
  VAR_9->machine->frame.num_fp = VAR_25 / (VAR_0 * VAR_7);

  if (VAR_26)
    {
      HOST_WIDE_INT VAR_29;

      VAR_29 = (VAR_21 + VAR_22 + VAR_20
  + VAR_24 - FUNC_1 (VAR_15));
      VAR_9->machine->frame.gp_sp_offset = VAR_29;
      VAR_9->machine->frame.gp_save_offset = VAR_29 - VAR_19;
    }
  else
    {
      VAR_9->machine->frame.gp_sp_offset = 0;
      VAR_9->machine->frame.gp_save_offset = 0;
    }

  if (VAR_27)
    {
      HOST_WIDE_INT VAR_30;

      VAR_30 = (VAR_21 + VAR_22 + VAR_20
  + VAR_23 + VAR_25
  - VAR_0 * VAR_7);
      VAR_9->machine->frame.fp_sp_offset = VAR_30;
      VAR_9->machine->frame.fp_save_offset = VAR_30 - VAR_19;
    }
  else
    {
      VAR_9->machine->frame.fp_sp_offset = 0;
      VAR_9->machine->frame.fp_save_offset = 0;
    }


  return VAR_19;
}
