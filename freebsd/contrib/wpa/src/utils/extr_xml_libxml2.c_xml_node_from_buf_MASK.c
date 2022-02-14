
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
typedef scalar_t__ xmlNodePtr ;
typedef int * xmlDocPtr ;
struct xml_node_ctx {int dummy; } ;


 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char const*,int ) ;

xml_node_t * FUNC_5(struct xml_node_ctx *VAR_0, const char *VAR_1)
{
 xmlDocPtr VAR_2;
 xmlNodePtr VAR_3;

 VAR_2 = FUNC_4(VAR_1, FUNC_0(VAR_1));
 if (VAR_2 == ((void*)0))
  return ((void*)0);
 VAR_3 = FUNC_2(VAR_2);
 VAR_3 = FUNC_1(VAR_3, 1);
 FUNC_3(VAR_2);

 return (xml_node_t *) VAR_3;
}
