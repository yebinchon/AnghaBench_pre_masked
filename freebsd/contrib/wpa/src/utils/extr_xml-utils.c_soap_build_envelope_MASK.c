
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
typedef int xml_namespace_t ;
struct xml_node_ctx {int dummy; } ;


 int FUNC_0 (struct xml_node_ctx*,int *,int *) ;
 int * FUNC_1 (struct xml_node_ctx*,int *,int *,char*) ;
 int * FUNC_2 (struct xml_node_ctx*,char*,char*,int **,char*) ;

xml_node_t * FUNC_3(struct xml_node_ctx *VAR_0, xml_node_t *VAR_1)
{
 xml_node_t *VAR_2, *VAR_3;
 xml_namespace_t *VAR_4;

 VAR_2 = FUNC_2(
  VAR_0, "http://www.w3.org/2003/05/soap-envelope", "soap12", &VAR_4,
  "Envelope");
 if (VAR_2 == ((void*)0))
  return ((void*)0);
 VAR_3 = FUNC_1(VAR_0, VAR_2, VAR_4, "Body");
 FUNC_0(VAR_0, VAR_3, VAR_1);
 return VAR_2;
}
