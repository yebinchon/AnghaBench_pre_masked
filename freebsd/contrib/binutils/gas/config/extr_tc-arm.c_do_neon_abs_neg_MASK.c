
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct neon_type_el {scalar_t__ type; int size; } ;
typedef enum neon_shape { ____Placeholder_neon_shape } neon_shape ;
struct TYPE_4__ {int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {int reg; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
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
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 TYPE_2__ VAR_15 ;
 struct neon_type_el FUNC_2 (int,int,int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ,int ) ;
 scalar_t__ FUNC_7 (int,int ) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void
FUNC_9 (void)
{
  enum neon_shape VAR_16;
  struct neon_type_el VAR_17;

  if (FUNC_7 (2, VAR_14) == VAR_13)
    return;

  if (FUNC_8 (VAR_2 | VAR_1) == VAR_0)
    return;

  VAR_16 = FUNC_6 (VAR_3, VAR_5, VAR_4);
  VAR_17 = FUNC_2 (2, VAR_16, VAR_7, VAR_12 | VAR_10 | VAR_11 | VAR_8 | VAR_9);

  VAR_15.instruction |= FUNC_1 (VAR_15.operands[0].reg) << 12;
  VAR_15.instruction |= FUNC_0 (VAR_15.operands[0].reg) << 22;
  VAR_15.instruction |= FUNC_1 (VAR_15.operands[1].reg);
  VAR_15.instruction |= FUNC_0 (VAR_15.operands[1].reg) << 5;
  VAR_15.instruction |= FUNC_5 (VAR_16) << 6;
  VAR_15.instruction |= (VAR_17.type == VAR_6) << 10;
  VAR_15.instruction |= FUNC_4 (VAR_17.size) << 18;

  VAR_15.instruction = FUNC_3 (VAR_15.instruction);
}
