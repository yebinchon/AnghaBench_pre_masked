
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
typedef int xml_namespace_t ;
typedef int xmlNsPtr ;
typedef int xmlNodePtr ;
typedef int xmlChar ;
typedef scalar_t__ xmlAttrPtr ;
struct xml_node_ctx {int dummy; } ;


 scalar_t__ FUNC_0 (int ,int ,int const*,int const*) ;
 scalar_t__ FUNC_1 (int ,int const*,int const*) ;

int FUNC_2(struct xml_node_ctx *VAR_0, xml_node_t *VAR_1,
        xml_namespace_t *VAR_2, const char *VAR_3, const char *VAR_4)
{
 xmlAttrPtr VAR_5;

 if (VAR_2) {
  VAR_5 = FUNC_0((xmlNodePtr) VAR_1, (xmlNsPtr) VAR_2,
        (const xmlChar *) VAR_3,
        (const xmlChar *) VAR_4);
 } else {
  VAR_5 = FUNC_1((xmlNodePtr) VAR_1, (const xmlChar *) VAR_3,
      (const xmlChar *) VAR_4);
 }

 return VAR_5 ? 0 : -1;
}
