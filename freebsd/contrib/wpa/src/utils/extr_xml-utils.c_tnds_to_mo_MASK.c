
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct xml_node_ctx {int dummy; } ;


 int * FUNC_0 (struct xml_node_ctx*,int *,char*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int * FUNC_2 (struct xml_node_ctx*,int *,int *,int *) ;
 char* FUNC_3 (struct xml_node_ctx*,int *) ;

xml_node_t * FUNC_4(struct xml_node_ctx *VAR_0, xml_node_t *VAR_1)
{
 const char *VAR_2;
 xml_node_t *VAR_3;

 VAR_2 = FUNC_3(VAR_0, VAR_1);
 if (VAR_2 == ((void*)0) || FUNC_1(VAR_2, "MgmtTree") != 0)
  return ((void*)0);

 VAR_3 = FUNC_0(VAR_0, VAR_1, "Node");
 if (!VAR_3)
  return ((void*)0);
 return FUNC_2(VAR_0, ((void*)0), VAR_3, ((void*)0));
}
