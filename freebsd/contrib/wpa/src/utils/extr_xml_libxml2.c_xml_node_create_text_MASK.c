
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
typedef int xml_namespace_t ;
typedef int xmlNsPtr ;
typedef scalar_t__ xmlNodePtr ;
typedef int xmlChar ;
struct xml_node_ctx {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ,int const*,int const*) ;

xml_node_t * FUNC_1(struct xml_node_ctx *VAR_0,
      xml_node_t *VAR_1, xml_namespace_t *VAR_2,
      const char *VAR_3, const char *VAR_4)
{
 xmlNodePtr VAR_5;
 VAR_5 = FUNC_0((xmlNodePtr) VAR_1, (xmlNsPtr) VAR_2,
          (const xmlChar *) VAR_3, (const xmlChar *) VAR_4);
 return (xml_node_t *) VAR_5;
}
