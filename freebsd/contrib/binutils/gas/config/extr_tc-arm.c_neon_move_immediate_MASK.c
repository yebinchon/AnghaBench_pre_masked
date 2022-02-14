
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct neon_type_el {scalar_t__ type; int size; } ;
typedef enum neon_shape { ____Placeholder_neon_shape } neon_shape ;
struct TYPE_4__ {int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {unsigned int imm; unsigned int reg; int immisfloat; scalar_t__ regisimm; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 TYPE_2__ VAR_12 ;
 struct neon_type_el FUNC_5 (int,int,int,int ) ;
 int FUNC_6 (unsigned int,unsigned int,int,unsigned int*,int*,int,scalar_t__) ;
 int FUNC_7 (unsigned int*,unsigned int*,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (unsigned int) ;

__attribute__((used)) static void
FUNC_11 (void)
{
  enum neon_shape VAR_13 = FUNC_9 (VAR_1, VAR_3, VAR_2);
  struct neon_type_el VAR_14 = FUNC_5 (2, VAR_13,
    VAR_10 | VAR_7 | VAR_8 | VAR_9 | VAR_6 | VAR_11, VAR_5);
  unsigned VAR_15, VAR_16 = 0, VAR_17;
  int VAR_18, VAR_19, VAR_20;

  FUNC_3 (VAR_14.type == VAR_4,
              FUNC_2("operand size must be specified for immediate VMOV"));


  VAR_18 = (VAR_12.instruction & (1 << 5)) != 0;

  VAR_15 = VAR_12.operands[1].imm;
  if (VAR_12.operands[1].regisimm)
    VAR_16 = VAR_12.operands[1].reg;

  FUNC_3 (VAR_14.size < 32 && (VAR_15 & ~((1 << VAR_14.size) - 1)) != 0,
              FUNC_2("immediate has bits set outside the operand size"));

  VAR_20 = VAR_12.operands[1].immisfloat;

  if ((VAR_19 = FUNC_6 (VAR_15, VAR_16, VAR_20, &VAR_17, &VAR_18,
                                        VAR_14.size, VAR_14.type)) == VAR_0)
    {

      FUNC_7 (&VAR_15, &VAR_16, VAR_14.size);



      VAR_18 = !VAR_18;
      if ((VAR_19 = FUNC_6 (VAR_15, VAR_16, VAR_20, &VAR_17,
         &VAR_18, VAR_14.size, VAR_14.type)) == VAR_0)
        {
          FUNC_4 (FUNC_2("immediate out of range"));
          return;
        }
    }

  VAR_12.instruction &= ~(1 << 5);
  VAR_12.instruction |= VAR_18 << 5;

  VAR_12.instruction |= FUNC_1 (VAR_12.operands[0].reg) << 12;
  VAR_12.instruction |= FUNC_0 (VAR_12.operands[0].reg) << 22;
  VAR_12.instruction |= FUNC_8 (VAR_13) << 6;
  VAR_12.instruction |= VAR_19 << 8;

  FUNC_10 (VAR_17);
}
