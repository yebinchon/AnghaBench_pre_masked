
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_6__ {unsigned int instruction; int error; TYPE_2__* operands; TYPE_1__ reloc; } ;
struct TYPE_5__ {int writeback; unsigned int imm; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,unsigned int,int ) ;
 TYPE_3__ VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void
FUNC_5 (void)
{
  unsigned VAR_9;

  FUNC_3 (VAR_7.operands[0].writeback,
       FUNC_2("push/pop do not support {reglist}^"));
  FUNC_3 (VAR_7.reloc.type != VAR_0,
       FUNC_2("expression too complex"));

  VAR_9 = VAR_7.operands[0].imm;
  if ((VAR_9 & ~0xff) == 0)
    VAR_7.instruction = FUNC_0 (VAR_7.instruction) | VAR_9;
  else if ((VAR_7.instruction == VAR_6
     && (VAR_9 & ~0xff) == 1 << VAR_1)
    || (VAR_7.instruction == VAR_5
        && (VAR_9 & ~0xff) == 1 << VAR_2))
    {
      VAR_7.instruction = FUNC_0 (VAR_7.instruction);
      VAR_7.instruction |= VAR_3;
      VAR_7.instruction |= VAR_9 & 0xff;
    }
  else if (VAR_8)
    {
      VAR_7.instruction = FUNC_1 (VAR_7.instruction);
      FUNC_4(13, VAR_9, VAR_4);
    }
  else
    {
      VAR_7.error = FUNC_2("invalid register list to push/pop instruction");
      return;
    }
}
