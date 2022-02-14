
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {int reg; int present; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ,int ) ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static void
FUNC_3 (void)
{
  if (!VAR_3.operands[1].present)
    {
      VAR_3.operands[1].reg = VAR_3.operands[0].reg + 1;
      FUNC_1 (VAR_3.operands[0].reg == VAR_1,
    FUNC_0("r14 not allowed here"));
    }
  VAR_3.instruction |= VAR_3.operands[0].reg << 12;
  VAR_3.instruction |= VAR_3.operands[1].reg << 8;
  FUNC_2 (2, VAR_0, VAR_2);

}
