
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int type; } ;
struct TYPE_6__ {int instruction; TYPE_2__ reloc; TYPE_1__* operands; } ;
struct TYPE_4__ {int reg; scalar_t__ negative; scalar_t__ shifted; scalar_t__ immisreg; scalar_t__ writeback; scalar_t__ postind; int preind; int isreg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 TYPE_3__ VAR_2 ;

__attribute__((used)) static void
FUNC_1 (void)
{
  FUNC_0 (!VAR_2.operands[2].isreg || !VAR_2.operands[2].preind
       || VAR_2.operands[2].postind || VAR_2.operands[2].writeback
       || VAR_2.operands[2].immisreg || VAR_2.operands[2].shifted
       || VAR_2.operands[2].negative,
       VAR_0);

  VAR_2.instruction |= VAR_2.operands[0].reg << 8;
  VAR_2.instruction |= VAR_2.operands[1].reg << 12;
  VAR_2.instruction |= VAR_2.operands[2].reg << 16;
  VAR_2.reloc.type = VAR_1;
}
