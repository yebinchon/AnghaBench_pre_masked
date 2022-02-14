
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* node; } ;
typedef TYPE_3__ switch_t ;
struct TYPE_6__ {unsigned int num_links; TYPE_1__** links; } ;
struct TYPE_5__ {int switch_id; } ;



__attribute__((used)) static int FUNC_0(switch_t *VAR_0, int VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->node->num_links; VAR_2++)
  if (VAR_0->node->links[VAR_2]->switch_id == VAR_1)
   return VAR_2;
 return VAR_2;
}
