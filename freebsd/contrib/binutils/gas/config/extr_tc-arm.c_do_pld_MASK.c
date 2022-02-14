
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* operands; } ;
struct TYPE_3__ {int postind; int writeback; int preind; int isreg; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void
FUNC_3 (void)
{
  FUNC_1 (!VAR_1.operands[0].isreg,
       FUNC_0("'[' expected after PLD mnemonic"));
  FUNC_1 (VAR_1.operands[0].postind,
       FUNC_0("post-indexed expression used in preload instruction"));
  FUNC_1 (VAR_1.operands[0].writeback,
       FUNC_0("writeback used in preload instruction"));
  FUNC_1 (!VAR_1.operands[0].preind,
       FUNC_0("unindexed addressing used in preload instruction"));
  FUNC_2 (0, VAR_0);
}
