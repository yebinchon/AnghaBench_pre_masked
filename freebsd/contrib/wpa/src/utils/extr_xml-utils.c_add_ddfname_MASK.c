
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct xml_node_ctx {int dummy; } ;


 int * FUNC_0 (struct xml_node_ctx*,int *,int *,char*) ;
 int FUNC_1 (struct xml_node_ctx*,int *,int *,char*,char const*) ;

__attribute__((used)) static int FUNC_2(struct xml_node_ctx *VAR_0, xml_node_t *VAR_1,
         const char *VAR_2)
{
 xml_node_t *VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1, ((void*)0), "RTProperties");
 if (VAR_3 == ((void*)0))
  return -1;
 VAR_3 = FUNC_0(VAR_0, VAR_3, ((void*)0), "Type");
 if (VAR_3 == ((void*)0))
  return -1;
 FUNC_1(VAR_0, VAR_3, ((void*)0), "DDFName", VAR_2);
 return 0;
}
