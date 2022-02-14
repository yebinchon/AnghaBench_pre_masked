
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int bfd_boolean ;
struct TYPE_4__ {int instruction; int size_req; TYPE_1__* operands; } ;
struct TYPE_3__ {int reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;
 scalar_t__ VAR_3 ;
 TYPE_2__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_4 (void)
{
  if (VAR_5)
    {
      bfd_boolean VAR_6;

      if (FUNC_2 (VAR_4.instruction))
 VAR_6 = (VAR_3 == 0);
      else
 VAR_6 = (VAR_3 != 0);
      if (VAR_4.operands[0].reg > 7 || VAR_4.operands[1].reg > 7)
 VAR_6 = VAR_2;
      if (VAR_4.size_req == 4)
 VAR_6 = VAR_2;

      if (!VAR_6)
 {
   VAR_4.instruction = FUNC_1 (VAR_4.instruction);
   VAR_4.instruction |= VAR_4.operands[0].reg << 8;
   VAR_4.instruction |= VAR_4.operands[1].reg << 16;
 }
      else
 {
   VAR_4.instruction = FUNC_0 (VAR_4.instruction);
   VAR_4.instruction |= VAR_4.operands[0].reg;
   VAR_4.instruction |= VAR_4.operands[1].reg << 3;
 }
    }
  else
    {
      FUNC_3 (VAR_4.operands[0].reg > 7 || VAR_4.operands[1].reg > 7,
    VAR_0);
      FUNC_3 (FUNC_2 (VAR_4.instruction), VAR_1);

      VAR_4.instruction = FUNC_0 (VAR_4.instruction);
      VAR_4.instruction |= VAR_4.operands[0].reg;
      VAR_4.instruction |= VAR_4.operands[1].reg << 3;
    }
}
