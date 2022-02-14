
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef enum vfp_ldstm_type { ____Placeholder_vfp_ldstm_type } vfp_ldstm_type ;
struct TYPE_4__ {int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {int reg; int imm; scalar_t__ writeback; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 TYPE_2__ VAR_5 ;

__attribute__((used)) static void
FUNC_3 (enum vfp_ldstm_type VAR_6)
{
  int VAR_7;

  if (VAR_5.operands[0].writeback)
    VAR_5.instruction |= VAR_4;
  else
    FUNC_1 (VAR_6 != VAR_1 && VAR_6 != VAR_2,
  FUNC_0("this addressing mode requires base-register writeback"));

  VAR_5.instruction |= VAR_5.operands[0].reg << 16;
  FUNC_2 (VAR_5.operands[1].reg, VAR_3);

  VAR_7 = VAR_5.operands[1].imm << 1;
  if (VAR_6 == VAR_2 || VAR_6 == VAR_0)
    VAR_7 += 1;

  VAR_5.instruction |= VAR_7;
}
