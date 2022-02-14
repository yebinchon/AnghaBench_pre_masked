
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* basic_block ;
struct TYPE_10__ {int (* delete_basic_block ) (TYPE_1__*) ;int name; } ;
struct TYPE_9__ {int succs; int preds; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 TYPE_6__* VAR_2 ;
 int FUNC_3 (size_t,TYPE_1__*) ;
 scalar_t__* VAR_3 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*) ;

void
FUNC_8 (basic_block VAR_4)
{
  if (!VAR_2->delete_basic_block)
    FUNC_5 ("%s does not support delete_basic_block", VAR_2->name);

  VAR_2->delete_basic_block (VAR_4);



  while (FUNC_0 (VAR_4->preds) != 0)
    FUNC_6 (FUNC_1 (VAR_4, 0));
  while (FUNC_0 (VAR_4->succs) != 0)
    FUNC_6 (FUNC_2 (VAR_4, 0));

  if (VAR_3[VAR_0])
    FUNC_3 (VAR_0, VAR_4);
  if (VAR_3[VAR_1])
    FUNC_3 (VAR_1, VAR_4);


  FUNC_4 (VAR_4);
}
