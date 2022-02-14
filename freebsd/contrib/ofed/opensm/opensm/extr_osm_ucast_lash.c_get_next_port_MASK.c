
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* node; } ;
typedef TYPE_2__ switch_t ;
struct TYPE_7__ {scalar_t__ next_port; scalar_t__ num_ports; int* ports; } ;
typedef TYPE_3__ link_t ;
struct TYPE_5__ {TYPE_3__** links; } ;



__attribute__((used)) static int FUNC_0(switch_t *VAR_0, int VAR_1)
{
 link_t *VAR_2 = VAR_0->node->links[VAR_1];
 int VAR_3 = VAR_2->next_port++;





 if (VAR_2->next_port >= VAR_2->num_ports)
  VAR_2->next_port = 0;

 return VAR_2->ports[VAR_3];
}
