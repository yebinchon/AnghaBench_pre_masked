
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* operands; } ;
struct TYPE_3__ {int reg; scalar_t__ isvec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 TYPE_2__ VAR_2 ;
 int FUNC_3 (TYPE_1__*,char,int) ;

__attribute__((used)) static int
FUNC_4 (void)
{
  if (VAR_2.operands[0].isvec)
    {
      if (VAR_2.operands[1].reg != 1)
        FUNC_2 (FUNC_0("operand 1 must be FPSCR"));
      FUNC_3 (&VAR_2.operands[0], '\0', sizeof (VAR_2.operands[0]));
      FUNC_3 (&VAR_2.operands[1], '\0', sizeof (VAR_2.operands[1]));
      FUNC_1 ("fmstat");
    }
  else if (VAR_2.operands[1].isvec)
    FUNC_1 ("fmrx");
  else
    return VAR_0;

  return VAR_1;
}
