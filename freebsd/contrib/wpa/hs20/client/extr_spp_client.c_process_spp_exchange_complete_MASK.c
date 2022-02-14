
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct hs20_osu_client {int xml; } ;


 int VAR_0 ;
 int FUNC_0 (struct hs20_osu_client*,char*,int *) ;
 char* FUNC_1 (int ,int *,char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct hs20_osu_client*,char*,char*) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(struct hs20_osu_client *VAR_1,
      xml_node_t *VAR_2)
{
 char *VAR_3, *VAR_4;

 FUNC_0(VAR_1, "sppExchangeComplete", VAR_2);

 VAR_3 = FUNC_1(VAR_1->xml, VAR_2, "sppStatus");
 if (VAR_3 == ((void*)0)) {
  FUNC_3(VAR_0, "No sppStatus attribute");
  return -1;
 }
 FUNC_4(VAR_1, "Received sppExchangeComplete sppStatus='%s'",
        VAR_3);

 VAR_4 = FUNC_1(VAR_1->xml, VAR_2, "sessionID");
 if (VAR_4 == ((void*)0)) {
  FUNC_3(VAR_0, "No sessionID attribute");
  FUNC_5(VAR_1->xml, VAR_3);
  return -1;
 }

 FUNC_3(VAR_0, "[hs20] sppStatus: '%s'  sessionID: '%s'",
     VAR_3, VAR_4);
 FUNC_5(VAR_1->xml, VAR_4);

 if (FUNC_2(VAR_3, "Exchange complete, release TLS connection") ==
     0) {
  FUNC_5(VAR_1->xml, VAR_3);
  return 0;
 }

 FUNC_3(VAR_0, "Unexpected sppStatus '%s'", VAR_3);
 FUNC_4(VAR_1, "Unexpected sppStatus '%s'", VAR_3);
 FUNC_5(VAR_1->xml, VAR_3);
 return -1;
}
