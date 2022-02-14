
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct neon_type_el {scalar_t__ type; int size; } ;
typedef enum neon_shape { ____Placeholder_neon_shape } neon_shape ;
typedef enum neon_opc { ____Placeholder_neon_opc } neon_opc ;
struct TYPE_4__ {int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {unsigned int imm; unsigned int reg; scalar_t__ regisimm; scalar_t__ isreg; scalar_t__ present; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;




 int FUNC_4 () ;
 TYPE_2__ VAR_15 ;
 struct neon_type_el FUNC_5 (int,int,int,...) ;
 int FUNC_6 (unsigned int,unsigned int*,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (unsigned int*,int ,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int,int ,int) ;
 int FUNC_12 (unsigned int) ;

__attribute__((used)) static void
FUNC_13 (void)
{
  if (VAR_15.operands[2].present && VAR_15.operands[2].isreg)
    {
      enum neon_shape VAR_16 = FUNC_10 (VAR_1, VAR_5, VAR_3);
      FUNC_5 (3, VAR_16, VAR_13);

      VAR_15.instruction = FUNC_3 (VAR_15.instruction);
      FUNC_11 (FUNC_9 (VAR_16), 0, -1);
    }
  else
    {
      enum neon_shape VAR_17 = FUNC_10 (VAR_2, VAR_4, VAR_3);
      struct neon_type_el VAR_18 = FUNC_5 (2, VAR_17,
        VAR_12 | VAR_9 | VAR_10 | VAR_11 | VAR_8 | VAR_14, VAR_7);
      enum neon_opc VAR_19 = VAR_15.instruction & 0x0fffffff;
      unsigned VAR_20;
      int VAR_21;

      if (VAR_18.type == VAR_6)
        return;

      VAR_15.instruction = FUNC_2 (VAR_15.instruction);

      VAR_20 = VAR_15.operands[1].imm;
      if (VAR_18.size == 64)
 {


   if (VAR_20 != (VAR_15.operands[1].regisimm ?
     VAR_15.operands[1].reg : 0))
     {

       VAR_20 = 0xdeadbeef;
     }
 }

      switch (VAR_19)
        {
        case 130:
          VAR_21 = FUNC_6 (VAR_20, &VAR_20, VAR_18.size);
          break;

        case 128:
          VAR_21 = FUNC_6 (VAR_20, &VAR_20, VAR_18.size);
          break;

        case 131:

          FUNC_8 (&VAR_20, 0, VAR_18.size);
          VAR_21 = FUNC_6 (VAR_20, &VAR_20, VAR_18.size);
          break;

        case 129:

          FUNC_8 (&VAR_20, 0, VAR_18.size);
          VAR_21 = FUNC_6 (VAR_20, &VAR_20, VAR_18.size);
          break;

        default:
          FUNC_4 ();
        }

      if (VAR_21 == VAR_0)
        return;

      VAR_15.instruction |= FUNC_9 (VAR_17) << 6;
      VAR_15.instruction |= FUNC_1 (VAR_15.operands[0].reg) << 12;
      VAR_15.instruction |= FUNC_0 (VAR_15.operands[0].reg) << 22;
      VAR_15.instruction |= VAR_21 << 8;
      FUNC_12 (VAR_20);

      VAR_15.instruction = FUNC_7 (VAR_15.instruction);
    }
}
