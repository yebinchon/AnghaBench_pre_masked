
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {unsigned int imm; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static void
FUNC_1 (void)
{
  unsigned int VAR_4 = VAR_3.operands[0].imm;

  FUNC_0 (VAR_2, VAR_0);
  VAR_2 = (VAR_3.instruction & 0xf) | 0x10;
  VAR_1 = VAR_4;


  if ((VAR_4 & 0x1) == 0x0)
    {
      unsigned int VAR_5 = VAR_3.instruction & 0x000f;

      if ((VAR_5 & 0x7) == 0)
                           ;
      else if ((VAR_5 & 0x3) == 0)
 VAR_5 ^= 0x8;
      else if ((VAR_5 & 0x1) == 0)
 VAR_5 ^= 0xC;
      else
 VAR_5 ^= 0xE;

      VAR_3.instruction &= 0xfff0;
      VAR_3.instruction |= VAR_5;
    }

  VAR_3.instruction |= VAR_4 << 4;
}
