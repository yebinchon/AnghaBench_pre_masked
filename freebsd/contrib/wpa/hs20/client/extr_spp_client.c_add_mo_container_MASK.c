
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
typedef int xml_namespace_t ;
struct xml_node_ctx {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (struct xml_node_ctx*,int *,int ,char const*,char*) ;
 int * FUNC_1 (struct xml_node_ctx*,char const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,char*,char const*,int ) ;
 int FUNC_5 (struct xml_node_ctx*,int *,int *,char*,char const*) ;
 int * FUNC_6 (struct xml_node_ctx*,int *,int *,char*,char*) ;
 int FUNC_7 (struct xml_node_ctx*,int *) ;
 char* FUNC_8 (struct xml_node_ctx*,int *) ;

__attribute__((used)) static void FUNC_9(struct xml_node_ctx *VAR_2, xml_namespace_t *VAR_3,
        xml_node_t *VAR_4, const char *VAR_5,
        const char *VAR_6)
{
 xml_node_t *VAR_7;
 xml_node_t *VAR_8, *VAR_9;
 char *VAR_10;

 VAR_1 = 0;
 VAR_8 = FUNC_1(VAR_2, VAR_6);
 if (!VAR_8) {
  FUNC_4(VAR_0,
      "Failed to create XML node from file: %s, possible error: %s",
      VAR_6, FUNC_3(VAR_1));
  return;
 }
 VAR_9 = FUNC_0(VAR_2, VAR_8, 0, VAR_5, "syncml:dmddf1.2");
 FUNC_7(VAR_2, VAR_8);
 if (!VAR_9)
  return;

 VAR_10 = FUNC_8(VAR_2, VAR_9);
 FUNC_7(VAR_2, VAR_9);
 if (VAR_10 == ((void*)0))
  return;

 VAR_7 = FUNC_6(VAR_2, VAR_4, VAR_3, "moContainer", VAR_10);
 if (VAR_7)
  FUNC_5(VAR_2, VAR_7, VAR_3, "moURN", VAR_5);
 FUNC_2(VAR_10);
}
