
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct hs20_osu_client {int xml; int http; } ;
typedef enum spp_post_dev_data_use { ____Placeholder_spp_post_dev_data_use } spp_post_dev_data_use ;


 int VAR_0 ;
 int * FUNC_0 (struct hs20_osu_client*,int *,int *,char const*) ;
 scalar_t__ FUNC_1 (struct hs20_osu_client*,int *,char*) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (struct hs20_osu_client*,int,int *,char const*,int *) ;
 int * FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (struct hs20_osu_client*,char*,char const*) ;
 int FUNC_7 (struct hs20_osu_client*,char*) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct hs20_osu_client *VAR_1,
        enum spp_post_dev_data_use VAR_2,
        const char *VAR_3,
        const char *VAR_4, xml_node_t *VAR_5)
{
 xml_node_t *VAR_6;
 xml_node_t *VAR_7;

 VAR_6 = FUNC_0(VAR_1, ((void*)0), ((void*)0), VAR_3);
 if (VAR_6 == ((void*)0))
  return -1;

 VAR_7 = FUNC_4(VAR_1->http, VAR_6);
 if (!VAR_7) {
  const char *VAR_8 = FUNC_2(VAR_1->http);
  if (VAR_8) {
   FUNC_5(VAR_0, "HTTP error: %s", VAR_8);
   FUNC_6(VAR_1, "HTTP error: %s", VAR_8);
  } else {
   FUNC_7(VAR_1, "Failed to send SOAP message");
  }
  return -1;
 }

 if (FUNC_1(VAR_1, VAR_7, "sppPostDevDataResponse") < 0) {
  FUNC_5(VAR_0, "SPP validation failed");
  FUNC_8(VAR_1->xml, VAR_7);
  return -1;
 }

 FUNC_3(VAR_1, VAR_2, VAR_7,
        VAR_4, VAR_5);
 return 0;
}
