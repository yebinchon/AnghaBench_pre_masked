
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct xml_node_ctx {int dummy; } ;


 int FUNC_0 (struct xml_node_ctx*,int *,char const*) ;
 int FUNC_1 (struct xml_node_ctx*,int *,int *,char const*) ;
 int * FUNC_2 (struct xml_node_ctx*,int *,int *,char*) ;
 int * FUNC_3 (struct xml_node_ctx*,char const*,int *,int *,char*) ;
 int FUNC_4 (struct xml_node_ctx*,int *,int *,char*,char const*) ;
 int FUNC_5 (struct xml_node_ctx*,int *) ;
 char* FUNC_6 (struct xml_node_ctx*,int *) ;

xml_node_t * FUNC_7(struct xml_node_ctx *VAR_0, xml_node_t *VAR_1,
   int VAR_2, const char *VAR_3, const char *VAR_4)
{
 xml_node_t *VAR_5;
 xml_node_t *VAR_6;
 const char *VAR_7;

 VAR_5 = FUNC_3(VAR_0, VAR_4, ((void*)0), ((void*)0), "MgmtTree");
 if (VAR_5 == ((void*)0))
  return ((void*)0);

 FUNC_4(VAR_0, VAR_5, ((void*)0), "VerDTD", "1.2");

 VAR_7 = FUNC_6(VAR_0, VAR_1);

 VAR_6 = FUNC_2(VAR_0, VAR_5, ((void*)0), "Node");
 if (VAR_6 == ((void*)0))
  goto fail;
 FUNC_4(VAR_0, VAR_6, ((void*)0), "NodeName", VAR_7);
 if (VAR_3)
  FUNC_0(VAR_0, VAR_6, VAR_3);

 FUNC_1(VAR_0, VAR_2 ? VAR_5 : VAR_6, VAR_1, VAR_2 ? VAR_7 : ((void*)0));

 return VAR_5;

fail:
 FUNC_5(VAR_0, VAR_5);
 return ((void*)0);
}
