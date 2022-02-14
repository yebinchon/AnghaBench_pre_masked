
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct hs20_osu_client {char* server_url; int xml; int http; int ca_fname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hs20_osu_client*,char*,int *) ;
 char* FUNC_1 (int ) ;
 char* FUNC_2 (int ,char const*,char*,char*,char const*,int ,char const*,char const*,char const*,char const*,int *) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char const*) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (struct hs20_osu_client*,char*,char const*) ;
 int FUNC_7 (struct hs20_osu_client*,char*) ;
 int FUNC_8 (int ,int *) ;
 int * FUNC_9 (int ,char*) ;
 char* FUNC_10 (int ,int *) ;

__attribute__((used)) static xml_node_t * FUNC_11(struct hs20_osu_client *VAR_2,
         const char *VAR_3, xml_node_t *VAR_4,
         const char *VAR_5,
         const char *VAR_6, const char *VAR_7,
         const char *VAR_8,
         const char *VAR_9)
{
 xml_node_t *VAR_10;
 char *VAR_11, *VAR_12;
 char *VAR_13 = ((void*)0);

 VAR_11 = FUNC_10(VAR_2->xml, VAR_4);
 FUNC_8(VAR_2->xml, VAR_4);
 if (VAR_11 == ((void*)0))
  return ((void*)0);

 FUNC_5(VAR_1, "Send OMA DM Package");
 FUNC_7(VAR_2, "Send OMA DM Package");
 FUNC_3(VAR_2->server_url);
 VAR_2->server_url = FUNC_4(VAR_3);
 VAR_12 = FUNC_2(VAR_2->http, VAR_3, VAR_11, "application/vnd.syncml.dm+xml",
   VAR_5, VAR_2->ca_fname, VAR_6, VAR_7,
   VAR_8, VAR_9, ((void*)0));
 FUNC_3(VAR_11);
 FUNC_3(VAR_13);
 VAR_13 = ((void*)0);

 if (VAR_12 == ((void*)0)) {
  const char *VAR_14 = FUNC_1(VAR_2->http);
  if (VAR_14) {
   FUNC_5(VAR_1, "HTTP error: %s", VAR_14);
   FUNC_6(VAR_2, "HTTP error: %s", VAR_14);
  } else {
   FUNC_7(VAR_2, "Failed to send OMA DM Package");
  }
  return ((void*)0);
 }
 FUNC_5(VAR_0, "Server response: %s", VAR_12);

 FUNC_5(VAR_1, "Process OMA DM Package");
 FUNC_7(VAR_2, "Process received OMA DM Package");
 VAR_10 = FUNC_9(VAR_2->xml, VAR_12);
 FUNC_3(VAR_12);
 if (VAR_10 == ((void*)0)) {
  FUNC_5(VAR_1, "Failed to parse OMA DM response");
  return ((void*)0);
 }

 FUNC_0(VAR_2, "OMA DM Package", VAR_10);

 return VAR_10;
}
