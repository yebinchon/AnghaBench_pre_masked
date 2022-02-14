
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef int rtx ;
struct TYPE_6__ {TYPE_2__** regs; } ;
typedef TYPE_1__ dataflow_set ;
typedef TYPE_2__* attrs ;
struct TYPE_7__ {scalar_t__ decl; scalar_t__ offset; struct TYPE_7__* next; } ;
typedef scalar_t__ HOST_WIDE_INT ;


 size_t FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__**,scalar_t__,scalar_t__,int ) ;
 int FUNC_4 (TYPE_1__*,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;

__attribute__((used)) static void
FUNC_6 (dataflow_set *VAR_0, rtx VAR_1)
{
  tree VAR_2 = FUNC_1 (VAR_1);
  HOST_WIDE_INT VAR_3 = FUNC_2 (VAR_1);
  attrs VAR_4;

  VAR_2 = FUNC_5 (VAR_2);

  for (VAR_4 = VAR_0->regs[FUNC_0 (VAR_1)]; VAR_4; VAR_4 = VAR_4->next)
    if (VAR_4->decl == VAR_2 && VAR_4->offset == VAR_3)
      break;
  if (!VAR_4)
    FUNC_3 (&VAR_0->regs[FUNC_0 (VAR_1)], VAR_2, VAR_3, VAR_1);
  FUNC_4 (VAR_0, VAR_1, VAR_2, VAR_3);
}
