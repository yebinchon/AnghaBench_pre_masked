
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int instruction; TYPE_1__* operands; int error; } ;
struct TYPE_3__ {int reg; scalar_t__ isvec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_0 (void)
{
  int VAR_6;


  if (VAR_4.operands[0].reg > 14)
    {
      VAR_4.error = VAR_0;
      return;
    }


  if (VAR_5 && VAR_4.operands[0].reg == VAR_3)
    {
      VAR_4.error = VAR_1;
      return;
    }


  if (VAR_4.operands[0].isvec && VAR_4.operands[1].reg != 1)
    {
      VAR_4.error = VAR_2;
      return;
    }

  if (VAR_4.operands[0].isvec)
    VAR_6 = 15;
  else
    VAR_6 = VAR_4.operands[0].reg;


  VAR_4.instruction |= VAR_6 << 12;
  VAR_4.instruction |= VAR_4.operands[1].reg << 16;
}
