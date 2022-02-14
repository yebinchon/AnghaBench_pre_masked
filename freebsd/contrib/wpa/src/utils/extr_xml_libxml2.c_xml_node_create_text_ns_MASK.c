
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
typedef int xmlNsPtr ;
typedef scalar_t__ xmlNodePtr ;
typedef int xmlChar ;
struct xml_node_ctx {int dummy; } ;


 int FUNC_0 (scalar_t__,int const*,int *) ;
 scalar_t__ FUNC_1 (scalar_t__,int *,int const*,int const*) ;
 int FUNC_2 (scalar_t__,int ) ;

xml_node_t * FUNC_3(struct xml_node_ctx *VAR_0,
         xml_node_t *VAR_1, const char *VAR_2,
         const char *VAR_3, const char *VAR_4)
{
 xmlNodePtr VAR_5;
 xmlNsPtr VAR_6;

 VAR_5 = FUNC_1((xmlNodePtr) VAR_1, ((void*)0),
          (const xmlChar *) VAR_3, (const xmlChar *) VAR_4);
 VAR_6 = FUNC_0(VAR_5, (const xmlChar *) VAR_2, ((void*)0));
 FUNC_2(VAR_5, VAR_6);
 return (xml_node_t *) VAR_5;
}
