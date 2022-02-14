
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
struct TYPE_5__ {int reg; scalar_t__ shifted; int isreg; scalar_t__ immisreg; scalar_t__ present; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int) ;
 TYPE_3__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void
FUNC_6 (void)
{
  int VAR_7, VAR_8, VAR_9;

  VAR_7 = VAR_5.operands[0].reg;
  VAR_8 = (VAR_5.operands[1].present
 ? VAR_5.operands[1].reg
 : VAR_5.operands[0].reg);
  VAR_9 = VAR_5.operands[2].reg;

  if (VAR_6)
    {
      if (!VAR_5.operands[2].isreg)
 {


   VAR_5.instruction = FUNC_1 (VAR_5.instruction);
   VAR_5.instruction = (VAR_5.instruction & 0xe1ffffff) | 0x10000000;
   VAR_5.instruction |= VAR_7 << 8;
   VAR_5.instruction |= VAR_8 << 16;
   VAR_5.reloc.type = VAR_2;
 }
      else
 {
   bfd_boolean VAR_10;


   if (FUNC_2 (VAR_5.instruction))
     VAR_10 = VAR_4 == 0;
   else
     VAR_10 = VAR_4 != 0;

   if (VAR_7 > 7 || VAR_9 > 7 || VAR_8 > 7)
     VAR_10 = VAR_3;
   if (VAR_5.operands[2].shifted)
     VAR_10 = VAR_3;
   if (VAR_5.size_req == 4)
     VAR_10 = VAR_3;

   if (VAR_10
       && VAR_7 == VAR_8)
     {
       VAR_5.instruction = FUNC_0 (VAR_5.instruction);
       VAR_5.instruction |= VAR_7;
       VAR_5.instruction |= VAR_9 << 3;
       return;
     }


   FUNC_4 (VAR_5.operands[2].shifted
        && VAR_5.operands[2].immisreg,
        FUNC_3("shift must be constant"));
   VAR_5.instruction = FUNC_1 (VAR_5.instruction);
   VAR_5.instruction |= VAR_7 << 8;
   VAR_5.instruction |= VAR_8 << 16;
   FUNC_5 (2);
 }
    }
  else
    {



      FUNC_4 (FUNC_2 (VAR_5.instruction), VAR_1);

      FUNC_4 (!VAR_5.operands[2].isreg || VAR_5.operands[2].shifted,
    FUNC_3("unshifted register required"));
      FUNC_4 (VAR_7 > 7 || VAR_8 > 7 || VAR_9 > 7, VAR_0);
      FUNC_4 (VAR_7 != VAR_8,
    FUNC_3("dest and source1 must be the same register"));

      VAR_5.instruction = FUNC_0 (VAR_5.instruction);
      VAR_5.instruction |= VAR_7;
      VAR_5.instruction |= VAR_9 << 3;
    }
}
