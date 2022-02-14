
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sbitmap ;
struct TYPE_2__ {int (* flow_call_edges_add ) (int ) ;int name; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;

int
FUNC_2 (sbitmap VAR_1)
{
  if (!VAR_0->flow_call_edges_add)
    FUNC_0 ("%s does not support flow_call_edges_add",
      VAR_0->name);

  return (VAR_0->flow_call_edges_add) (VAR_1);
}
