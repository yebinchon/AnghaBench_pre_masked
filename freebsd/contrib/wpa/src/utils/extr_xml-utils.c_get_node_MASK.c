
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct xml_node_ctx {int dummy; } ;


 int * FUNC_0 (struct xml_node_ctx*,int *,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*) ;

xml_node_t * FUNC_3(struct xml_node_ctx *VAR_0, xml_node_t *VAR_1,
        const char *VAR_2)
{
 char *VAR_3;
 xml_node_t *VAR_4;

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3 == ((void*)0))
  return ((void*)0);

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_3);

 FUNC_1(VAR_3);
 return VAR_4;
}
