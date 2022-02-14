
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int* axes; TYPE_4__** links; } ;
typedef TYPE_5__ mesh_node_t ;
struct TYPE_13__ {TYPE_3__** switches; } ;
typedef TYPE_6__ lash_t ;
struct TYPE_11__ {size_t switch_id; } ;
struct TYPE_10__ {TYPE_2__* p_sw; TYPE_5__* node; } ;
struct TYPE_9__ {TYPE_1__* p_node; } ;
struct TYPE_8__ {char* print_desc; } ;


 int FUNC_0 (char*,char*,...) ;

__attribute__((used)) static void FUNC_1(lash_t *VAR_0, char *VAR_1, int VAR_2, int VAR_3)
{
 mesh_node_t *VAR_4 = VAR_0->switches[VAR_2]->node;
 char *VAR_5 = VAR_0->switches[VAR_2]->p_sw->p_node->print_desc;
 int VAR_6 = VAR_4->axes[VAR_3];

 VAR_1 += FUNC_0(VAR_1, "%s[%d] = ", VAR_5, VAR_3);
 if (VAR_6)
  VAR_1 += FUNC_0(VAR_1, "%s%c -> ", ((VAR_6 - 1) & 1) ? "-" : "+", 'X' + (VAR_6 - 1)/2);
 else
  VAR_1 += FUNC_0(VAR_1, "N/A -> ");
 VAR_1 += FUNC_0(VAR_1, "%s\n",
       VAR_0->switches[VAR_4->links[VAR_3]->switch_id]->p_sw->p_node->print_desc);
}
