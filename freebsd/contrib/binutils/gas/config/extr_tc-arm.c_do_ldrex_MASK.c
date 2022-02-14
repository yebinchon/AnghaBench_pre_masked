
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ X_op; scalar_t__ X_add_number; } ;
struct TYPE_7__ {int type; TYPE_1__ exp; } ;
struct TYPE_8__ {int instruction; TYPE_3__ reloc; TYPE_2__* operands; } ;
struct TYPE_6__ {int reg; scalar_t__ negative; scalar_t__ shifted; scalar_t__ immisreg; scalar_t__ writeback; scalar_t__ postind; int preind; int isreg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,int ) ;
 TYPE_4__ VAR_4 ;

__attribute__((used)) static void
FUNC_2 (void)
{
  FUNC_1 (!VAR_4.operands[1].isreg || !VAR_4.operands[1].preind
       || VAR_4.operands[1].postind || VAR_4.operands[1].writeback
       || VAR_4.operands[1].immisreg || VAR_4.operands[1].shifted
       || VAR_4.operands[1].negative
       || (VAR_4.operands[1].reg == VAR_3),
       VAR_0);

  FUNC_1 (VAR_4.reloc.exp.X_op != VAR_2
       || VAR_4.reloc.exp.X_add_number != 0,
       FUNC_0("offset must be zero in ARM encoding"));

  VAR_4.instruction |= VAR_4.operands[0].reg << 12;
  VAR_4.instruction |= VAR_4.operands[1].reg << 16;
  VAR_4.reloc.type = VAR_1;
}
