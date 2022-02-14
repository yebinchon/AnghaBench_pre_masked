
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int bfd_boolean ;
struct TYPE_6__ {scalar_t__ X_op; scalar_t__ X_add_number; } ;
struct TYPE_7__ {int type; TYPE_2__ exp; } ;
struct TYPE_8__ {int instruction; int size_req; TYPE_3__ reloc; TYPE_1__* operands; } ;
struct TYPE_5__ {int reg; int isreg; scalar_t__ present; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int) ;
 TYPE_4__ VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_2 (void)
{
  int VAR_8, VAR_9;

  VAR_8 = VAR_6.operands[0].reg;
  VAR_9 = (VAR_6.operands[1].present
 ? VAR_6.operands[1].reg
 : VAR_6.operands[0].reg);

  VAR_6.instruction |= VAR_8 << 8;
  VAR_6.instruction |= VAR_9 << 16;
  if (!VAR_6.operands[2].isreg)
    {
      bfd_boolean VAR_10;

      if ((VAR_6.instruction & 0x00100000) != 0)
 VAR_10 = (VAR_5 == 0);
      else
 VAR_10 = (VAR_5 != 0);

      if (VAR_8 > 7 || VAR_9 > 7)
 VAR_10 = VAR_2;

      if (VAR_6.size_req == 4 || !VAR_7)
 VAR_10 = VAR_2;

      if (VAR_6.reloc.exp.X_op != VAR_3
   || VAR_6.reloc.exp.X_add_number != 0)
 VAR_10 = VAR_2;



      if (VAR_10)
 {
   VAR_6.reloc.type = VAR_1;
   VAR_6.instruction = FUNC_0 (VAR_4);
   VAR_6.instruction |= VAR_9 << 3;
   VAR_6.instruction |= VAR_8;
 }
      else
 {
   VAR_6.instruction = (VAR_6.instruction & 0xe1ffffff) | 0x10000000;
   VAR_6.reloc.type = VAR_0;
 }
    }
  else
    FUNC_1 (2);
}
