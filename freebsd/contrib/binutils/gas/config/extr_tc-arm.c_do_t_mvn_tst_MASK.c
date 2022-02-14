
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int bfd_boolean ;
struct TYPE_4__ {int type; } ;
struct TYPE_6__ {int instruction; int size_req; TYPE_2__* operands; TYPE_1__ reloc; } ;
struct TYPE_5__ {int reg; scalar_t__ shifted; int isreg; scalar_t__ immisreg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (int) ;
 TYPE_3__ VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static void
FUNC_6 (void)
{
  if (VAR_10)
    {
      int VAR_11 = (VAR_9.instruction == VAR_6
     || VAR_9.instruction == VAR_7) ? 8 : 16;
      bfd_boolean VAR_12;

      if (VAR_9.size_req == 4
   || VAR_9.instruction > 0xffff
   || VAR_9.operands[1].shifted
   || VAR_9.operands[0].reg > 7 || VAR_9.operands[1].reg > 7)
 VAR_12 = VAR_3;
      else if (VAR_9.instruction == VAR_5)
 VAR_12 = VAR_4;
      else if (FUNC_2 (VAR_9.instruction))
 VAR_12 = (VAR_8 == 0);
      else
 VAR_12 = (VAR_8 != 0);

      if (!VAR_9.operands[1].isreg)
 {


   if (VAR_9.instruction < 0xffff)
     VAR_9.instruction = FUNC_1 (VAR_9.instruction);
   VAR_9.instruction = (VAR_9.instruction & 0xe1ffffff) | 0x10000000;
   VAR_9.instruction |= VAR_9.operands[0].reg << VAR_11;
   VAR_9.reloc.type = VAR_2;
 }
      else
 {

   if (VAR_12)
     {
       VAR_9.instruction = FUNC_0 (VAR_9.instruction);
       VAR_9.instruction |= VAR_9.operands[0].reg;
       VAR_9.instruction |= VAR_9.operands[1].reg << 3;
     }
   else
     {
       FUNC_4 (VAR_9.operands[1].shifted
     && VAR_9.operands[1].immisreg,
     FUNC_3("shift must be constant"));
       if (VAR_9.instruction < 0xffff)
  VAR_9.instruction = FUNC_1 (VAR_9.instruction);
       VAR_9.instruction |= VAR_9.operands[0].reg << VAR_11;
       FUNC_5 (1);
     }
 }
    }
  else
    {
      FUNC_4 (VAR_9.instruction > 0xffff
    || VAR_9.instruction == VAR_7, VAR_1);
      FUNC_4 (!VAR_9.operands[1].isreg || VAR_9.operands[1].shifted,
    FUNC_3("unshifted register required"));
      FUNC_4 (VAR_9.operands[0].reg > 7 || VAR_9.operands[1].reg > 7,
    VAR_0);

      VAR_9.instruction = FUNC_0 (VAR_9.instruction);
      VAR_9.instruction |= VAR_9.operands[0].reg;
      VAR_9.instruction |= VAR_9.operands[1].reg << 3;
    }
}
