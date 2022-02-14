
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {int reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static void
FUNC_3 (void)
{
  FUNC_2 (VAR_2 && VAR_2 != 0x10, VAR_0);
  if (VAR_3.operands[0].reg == VAR_1)
    FUNC_1 (FUNC_0("use of r15 in bxj is not really useful"));

  VAR_3.instruction |= VAR_3.operands[0].reg << 16;
}
