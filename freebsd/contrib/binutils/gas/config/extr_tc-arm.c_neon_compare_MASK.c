
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct neon_type_el {scalar_t__ type; int size; } ;
typedef enum neon_shape { ____Placeholder_neon_shape } neon_shape ;
struct TYPE_4__ {int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {int reg; scalar_t__ isreg; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 TYPE_2__ VAR_8 ;
 struct neon_type_el FUNC_3 (int,int,int,unsigned int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,unsigned int,int) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_10 (unsigned VAR_9, unsigned VAR_10, int VAR_11)
{
  if (VAR_8.operands[2].isreg)
    {
      if (VAR_11)
        FUNC_6 ();
      FUNC_5 (VAR_4, VAR_9, VAR_7);
    }
  else
    {
      enum neon_shape VAR_12 = FUNC_9 (VAR_0, VAR_2, VAR_1);
      struct neon_type_el VAR_13 = FUNC_3 (2, VAR_12,
        VAR_5 | VAR_7, VAR_10 | VAR_6);

      VAR_8.instruction = FUNC_2 (VAR_8.instruction);
      VAR_8.instruction |= FUNC_1 (VAR_8.operands[0].reg) << 12;
      VAR_8.instruction |= FUNC_0 (VAR_8.operands[0].reg) << 22;
      VAR_8.instruction |= FUNC_1 (VAR_8.operands[1].reg);
      VAR_8.instruction |= FUNC_0 (VAR_8.operands[1].reg) << 5;
      VAR_8.instruction |= FUNC_8 (VAR_12) << 6;
      VAR_8.instruction |= (VAR_13.type == VAR_3) << 10;
      VAR_8.instruction |= FUNC_7 (VAR_13.size) << 18;

      VAR_8.instruction = FUNC_4 (VAR_8.instruction);
    }
}
