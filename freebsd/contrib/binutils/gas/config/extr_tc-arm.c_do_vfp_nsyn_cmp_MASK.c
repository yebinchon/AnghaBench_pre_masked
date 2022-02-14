
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef enum neon_shape { ____Placeholder_neon_shape } neon_shape ;
struct TYPE_4__ {int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {scalar_t__ isreg; } ;


 void* FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;


 int const VAR_9 ;
 int const VAR_10 ;
 int VAR_11 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 TYPE_2__ VAR_12 ;
 int FUNC_8 (int,int,int,int) ;
 int FUNC_9 (int,int ,int ) ;

__attribute__((used)) static void
FUNC_10 (void)
{
  if (VAR_12.operands[1].isreg)
    {
      enum neon_shape VAR_13 = FUNC_9 (VAR_2, VAR_0, VAR_4);
      FUNC_8 (2, VAR_13, VAR_5 | VAR_11, VAR_6 | VAR_7 | VAR_8 | VAR_11);

      if (VAR_13 == VAR_2)
        {
          VAR_12.instruction = FUNC_1 (VAR_12.instruction);
          FUNC_7 ();
        }
      else
        {
          VAR_12.instruction = FUNC_0 (VAR_12.instruction);
          FUNC_5 ();
        }
    }
  else
    {
      enum neon_shape VAR_14 = FUNC_9 (VAR_3, VAR_1, VAR_4);
      FUNC_8 (2, VAR_14, VAR_6 | VAR_7 | VAR_8 | VAR_11, VAR_5);

      switch (VAR_12.instruction & 0x0fffffff)
        {
        case 129:
          VAR_12.instruction += VAR_10 - 129;
          break;
        case 128:
          VAR_12.instruction += VAR_9 - 128;
          break;
        default:
          FUNC_2 ();
        }

      if (VAR_14 == VAR_3)
        {
          VAR_12.instruction = FUNC_1 (VAR_12.instruction);
          FUNC_6 ();
        }
      else
        {
          VAR_12.instruction = FUNC_0 (VAR_12.instruction);
          FUNC_4 ();
        }
    }
  FUNC_3 ();
}
