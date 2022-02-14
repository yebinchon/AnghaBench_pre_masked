
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cond; int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {int reg; int isreg; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ,int ,int ) ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static void
FUNC_2 (void)
{

  if (!VAR_3.operands[0].isreg)
    {
      FUNC_0 (VAR_3.cond != VAR_1, VAR_0);
      VAR_3.instruction |= 0xf0000000;
    }

  VAR_3.instruction |= VAR_3.operands[0].reg << 12;
  FUNC_1 (1, VAR_2, VAR_2, 0);
}
