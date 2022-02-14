
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ vid; TYPE_1__* lang; } ;
typedef TYPE_2__ mc_node_lang ;
struct TYPE_3__ {scalar_t__ nval; } ;



__attribute__((used)) static int
FUNC_0 (const void *VAR_0, const void *VAR_1)
{
  const mc_node_lang *VAR_2 = *((const mc_node_lang **)VAR_0);
  const mc_node_lang *VAR_3 = *((const mc_node_lang **)VAR_1);

  if (VAR_0 == VAR_1)
    return 0;
  if (VAR_2->lang != VAR_3->lang)
    {
      if (VAR_2->lang->nval < VAR_3->lang->nval)
 return -1;
      return 1;
    }
  if (VAR_2->vid == VAR_3->vid)
    return 0;
  if (VAR_2->vid < VAR_3->vid)
    return -1;
  return 1;
}
