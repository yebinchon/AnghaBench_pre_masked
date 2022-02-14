
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct insn_operand_data {int (* predicate ) (int ,int ) ;int mode; } ;
typedef int rtx ;
struct TYPE_2__ {struct insn_operand_data* operand; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1 (int VAR_1, int VAR_2, rtx VAR_3)
{
  const struct insn_operand_data *VAR_4;

  if (VAR_1 < 0)
    return 1;

  VAR_4 = &VAR_0[VAR_1].operand[VAR_2];
  if (VAR_4->predicate == ((void*)0))
    return 1;

  return VAR_4->predicate (VAR_3, VAR_4->mode);
}
