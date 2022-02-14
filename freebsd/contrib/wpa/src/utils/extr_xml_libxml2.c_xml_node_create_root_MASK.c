
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
typedef int xml_namespace_t ;
typedef int * xmlNsPtr ;
typedef int * xmlNodePtr ;
typedef int xmlChar ;
struct xml_node_ctx {int dummy; } ;


 int * FUNC_0 (int *,int const*) ;
 int * FUNC_1 (int *,int const*,int const*) ;
 int FUNC_2 (int *,int *) ;

xml_node_t * FUNC_3(struct xml_node_ctx *VAR_0, const char *VAR_1,
      const char *VAR_2,
      xml_namespace_t **VAR_3, const char *VAR_4)
{
 xmlNodePtr VAR_5;
 xmlNsPtr VAR_6 = ((void*)0);

 VAR_5 = FUNC_0(((void*)0), (const xmlChar *) VAR_4);
 if (VAR_5 == ((void*)0))
  return ((void*)0);
 if (VAR_1) {
  VAR_6 = FUNC_1(VAR_5, (const xmlChar *) VAR_1,
         (const xmlChar *) VAR_2);
  FUNC_2(VAR_5, VAR_6);
 }

 if (VAR_3)
  *VAR_3 = (xml_namespace_t *) VAR_6;

 return (xml_node_t *) VAR_5;
}
