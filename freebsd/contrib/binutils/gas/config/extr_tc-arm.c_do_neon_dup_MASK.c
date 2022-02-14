
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct neon_type_el {int size; } ;
typedef enum neon_shape { ____Placeholder_neon_shape } neon_shape ;
struct TYPE_4__ {int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {unsigned int reg; scalar_t__ isscalar; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_1 ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (unsigned int) ;
 unsigned int FUNC_5 (unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 () ;
 TYPE_2__ VAR_12 ;
 struct neon_type_el FUNC_7 (int,int,int,int) ;
 unsigned int FUNC_8 (unsigned int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,int ,int ) ;
 scalar_t__ FUNC_12 (int ) ;

__attribute__((used)) static void
FUNC_13 (void)
{
  if (VAR_12.operands[1].isscalar)
    {
      enum neon_shape VAR_13 = FUNC_11 (VAR_3, VAR_6, VAR_4);
      struct neon_type_el VAR_14 = FUNC_7 (2, VAR_13,
        VAR_10, VAR_9 | VAR_7 | VAR_8 | VAR_11);
      unsigned VAR_15 = VAR_14.size >> 3;
      unsigned VAR_16 = FUNC_5 (VAR_12.operands[1].reg);
      int VAR_17 = FUNC_9 (VAR_14.size);
      unsigned VAR_18 = FUNC_4 (VAR_12.operands[1].reg) << VAR_17;

      if (FUNC_12 (VAR_1) == VAR_0)
        return;

      VAR_12.instruction = FUNC_3 (VAR_12.instruction);
      VAR_12.instruction |= FUNC_1 (VAR_12.operands[0].reg) << 12;
      VAR_12.instruction |= FUNC_0 (VAR_12.operands[0].reg) << 22;
      VAR_12.instruction |= FUNC_1 (VAR_16);
      VAR_12.instruction |= FUNC_0 (VAR_16) << 5;
      VAR_12.instruction |= FUNC_10 (VAR_13) << 6;
      VAR_12.instruction |= VAR_18 << 17;
      VAR_12.instruction |= VAR_15 << 16;

      VAR_12.instruction = FUNC_8 (VAR_12.instruction);
    }
  else
    {
      enum neon_shape VAR_19 = FUNC_11 (VAR_2, VAR_5, VAR_4);
      struct neon_type_el VAR_20 = FUNC_7 (2, VAR_19,
        VAR_9 | VAR_7 | VAR_8 | VAR_11, VAR_10);

      VAR_12.instruction = FUNC_2 (VAR_12.instruction);
      switch (VAR_20.size)
        {
        case 8: VAR_12.instruction |= 0x400000; break;
        case 16: VAR_12.instruction |= 0x000020; break;
        case 32: VAR_12.instruction |= 0x000000; break;
        default: break;
        }
      VAR_12.instruction |= FUNC_1 (VAR_12.operands[1].reg) << 12;
      VAR_12.instruction |= FUNC_1 (VAR_12.operands[0].reg) << 16;
      VAR_12.instruction |= FUNC_0 (VAR_12.operands[0].reg) << 7;
      VAR_12.instruction |= FUNC_10 (VAR_19) << 21;


      FUNC_6 ();
    }
}
