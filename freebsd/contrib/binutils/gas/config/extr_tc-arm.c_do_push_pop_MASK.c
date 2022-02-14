
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* operands; } ;
struct TYPE_3__ {int isreg; int writeback; int reg; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void
FUNC_2 (void)
{
  VAR_1.operands[1] = VAR_1.operands[0];
  FUNC_1 (&VAR_1.operands[0], 0, sizeof VAR_1.operands[0]);
  VAR_1.operands[0].isreg = 1;
  VAR_1.operands[0].writeback = 1;
  VAR_1.operands[0].reg = VAR_0;
  FUNC_0 ();
}
