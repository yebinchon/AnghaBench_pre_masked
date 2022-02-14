
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
typedef int xmlNodePtr ;
struct xml_node_ctx {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

char * FUNC_2(struct xml_node_ctx *VAR_0, xml_node_t *VAR_1)
{
 if (FUNC_0((xmlNodePtr) VAR_1) > 0)
  return ((void*)0);
 return (char *) FUNC_1((xmlNodePtr) VAR_1);
}
