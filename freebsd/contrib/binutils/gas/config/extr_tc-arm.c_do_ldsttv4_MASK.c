
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ X_op; scalar_t__ X_add_number; } ;
struct TYPE_7__ {TYPE_2__ exp; } ;
struct TYPE_8__ {int instruction; TYPE_1__* operands; TYPE_3__ reloc; } ;
struct TYPE_5__ {int postind; int writeback; int reg; scalar_t__ preind; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 TYPE_4__ VAR_2 ;

__attribute__((used)) static void
FUNC_3 (void)
{


  if (VAR_2.operands[1].preind)
    {
      FUNC_1 (VAR_2.reloc.exp.X_op != VAR_0 ||
    VAR_2.reloc.exp.X_add_number != 0,
    FUNC_0("this instruction requires a post-indexed address"));

      VAR_2.operands[1].preind = 0;
      VAR_2.operands[1].postind = 1;
      VAR_2.operands[1].writeback = 1;
    }
  VAR_2.instruction |= VAR_2.operands[0].reg << 12;
  FUNC_2 (1, VAR_1);
}
