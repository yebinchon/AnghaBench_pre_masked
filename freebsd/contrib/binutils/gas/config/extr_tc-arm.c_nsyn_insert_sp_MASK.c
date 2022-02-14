
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* operands; } ;
struct TYPE_3__ {int reg; int isreg; int writeback; int present; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,char,int) ;

__attribute__((used)) static void
FUNC_1 (void)
{
  VAR_0.operands[1] = VAR_0.operands[0];
  FUNC_0 (&VAR_0.operands[0], '\0', sizeof (VAR_0.operands[0]));
  VAR_0.operands[0].reg = 13;
  VAR_0.operands[0].isreg = 1;
  VAR_0.operands[0].writeback = 1;
  VAR_0.operands[0].present = 1;
}
