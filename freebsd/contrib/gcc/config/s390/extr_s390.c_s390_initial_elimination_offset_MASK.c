
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int frame_size; int first_save_gpr_slot; int gprs_offset; } ;
typedef int HOST_WIDE_INT ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int,int) ;
 int FUNC_4 () ;

HOST_WIDE_INT
FUNC_5 (int VAR_5, int VAR_6)
{
  HOST_WIDE_INT VAR_7;
  int VAR_8;


  if (!FUNC_3 (VAR_5, VAR_6))
    return 0;

  switch (VAR_5)
    {
    case 129:
      VAR_7 = (FUNC_2()
  + VAR_1
  + VAR_4);
      break;

    case 131:
      FUNC_4 ();
      VAR_7 = VAR_3.frame_size + VAR_1;
      break;

    case 128:
      FUNC_4 ();
      VAR_8 = VAR_0 - VAR_3.first_save_gpr_slot;
      FUNC_0 (VAR_8 >= 0);
      VAR_7 = VAR_3.frame_size + VAR_3.gprs_offset;
      VAR_7 += VAR_8 * VAR_2;
      break;

    case 130:
      VAR_7 = 0;
      break;

    default:
      FUNC_1 ();
    }

  return VAR_7;
}
