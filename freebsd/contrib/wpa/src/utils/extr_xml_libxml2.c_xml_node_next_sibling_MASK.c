
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xml_node_t ;
typedef TYPE_1__* xmlNodePtr ;
struct xml_node_ctx {int dummy; } ;
struct TYPE_2__ {scalar_t__ next; } ;



xml_node_t * FUNC_0(struct xml_node_ctx *VAR_0,
       xml_node_t *VAR_1)
{
 return (xml_node_t *) ((xmlNodePtr) VAR_1)->next;
}
