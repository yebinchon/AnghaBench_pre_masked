
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {int present; } ;


 int FUNC_0 () ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static void
FUNC_1 (void)
{
  if (!VAR_0.operands[3].present)
    VAR_0.instruction &= ~0x00000020;
  FUNC_0 ();
}
