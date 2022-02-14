
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {scalar_t__ issingle; } ;


 int FUNC_0 (char*) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static void
FUNC_1 (void)
{
  int VAR_1 = (VAR_0.instruction & (1 << 20)) != 0;

  if (VAR_0.operands[0].issingle)
    {
      if (VAR_1)
        FUNC_0 ("flds");
      else
        FUNC_0 ("fsts");
    }
  else
    {
      if (VAR_1)
        FUNC_0 ("fldd");
      else
        FUNC_0 ("fstd");
    }
}
