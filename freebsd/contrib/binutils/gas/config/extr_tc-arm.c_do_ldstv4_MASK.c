
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {int reg; int isreg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 TYPE_2__ VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2 (void)
{
  VAR_2.instruction |= VAR_2.operands[0].reg << 12;
  if (!VAR_2.operands[1].isreg)
    if (FUNC_1 (0, VAR_0, VAR_1))
      return;
  FUNC_0 (1, VAR_0);
}
