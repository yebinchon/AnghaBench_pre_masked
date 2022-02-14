
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int edge ;
typedef int basic_block ;
struct TYPE_2__ {int (* redirect_edge_and_branch ) (int ,int ) ;int name; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int ) ;

edge
FUNC_2 (edge VAR_1, basic_block VAR_2)
{
  edge VAR_3;

  if (!VAR_0->redirect_edge_and_branch)
    FUNC_0 ("%s does not support redirect_edge_and_branch",
      VAR_0->name);

  VAR_3 = VAR_0->redirect_edge_and_branch (VAR_1, VAR_2);

  return VAR_3;
}
