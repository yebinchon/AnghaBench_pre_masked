
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct xml_node_ctx {int dummy; } ;
struct hs20_osu_client {struct xml_node_ctx* xml; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char const*,char const*) ;
 int FUNC_2 (int ,char*,char const*,...) ;
 int FUNC_3 (struct hs20_osu_client*,char*,...) ;
 char* FUNC_4 (struct xml_node_ctx*,int *) ;
 int FUNC_5 (struct xml_node_ctx*,int *) ;
 int FUNC_6 (struct xml_node_ctx*,int *,int ,char**) ;

__attribute__((used)) static int FUNC_7(struct hs20_osu_client *VAR_2, xml_node_t *VAR_3,
        const char *VAR_4)
{
 struct xml_node_ctx *VAR_5 = VAR_2->xml;
 const char *VAR_6;
 char *VAR_7;
 int VAR_8;

 if (!FUNC_5(VAR_5, VAR_3))
  return -1;

 VAR_6 = FUNC_4(VAR_5, VAR_3);
 if (VAR_6 == ((void*)0))
  return -1;

 if (FUNC_1(VAR_4, VAR_6) != 0) {
  FUNC_2(VAR_0, "Unexpected SOAP method name '%s' (expected '%s')",
      VAR_6, VAR_4);
  FUNC_3(VAR_2, "Unexpected SOAP method name '%s' (expected '%s')",
         VAR_6, VAR_4);
  return -1;
 }

 VAR_8 = FUNC_6(VAR_5, VAR_3, VAR_1, &VAR_7);
 if (VAR_8 < 0) {
  FUNC_2(VAR_0, "XML schema validation error(s)\n%s", VAR_7);
  FUNC_3(VAR_2, "SPP XML schema validation failed");
  FUNC_0(VAR_7);
 }
 return VAR_8;
}
