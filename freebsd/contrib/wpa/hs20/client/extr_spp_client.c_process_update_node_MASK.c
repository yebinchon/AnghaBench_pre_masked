
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct hs20_osu_client {char* fqdn; int xml; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hs20_osu_client*,char*,int *) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,int *,char*) ;
 int * FUNC_3 (int ,int *,char const*) ;
 char* FUNC_4 (int ,int *,char*) ;
 size_t FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;
 void* FUNC_7 (char*,char) ;
 char* FUNC_8 (char*) ;
 char* FUNC_9 (char*,char*) ;
 int * FUNC_10 (int ,int *) ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 (int ,int *,int *) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (int ,int *) ;
 int * FUNC_15 (int ,char*) ;
 int FUNC_16 (int ,char*) ;
 int * FUNC_17 (int ,int *) ;
 char* FUNC_18 (int ,int *) ;
 int FUNC_19 (int ,char*) ;

__attribute__((used)) static int FUNC_20(struct hs20_osu_client *VAR_2, xml_node_t *VAR_3,
          xml_node_t *VAR_4)
{
 xml_node_t *VAR_5, *VAR_6, *VAR_7, *VAR_8;
 char *VAR_9;
 const char *VAR_10;
 char *VAR_11, *VAR_12;
 char *VAR_13, *VAR_14;
 size_t VAR_15;

 FUNC_11(VAR_1, "Processing updateNode");
 FUNC_0(VAR_2, "updateNode", VAR_4);

 VAR_11 = FUNC_4(VAR_2->xml, VAR_4, "managementTreeURI");
 if (VAR_11 == ((void*)0)) {
  FUNC_11(VAR_1, "No managementTreeURI present");
  return -1;
 }
 FUNC_11(VAR_1, "managementTreeUri: '%s'", VAR_11);

 VAR_10 = FUNC_7(VAR_11, '/');
 if (VAR_10 == ((void*)0)) {
  FUNC_11(VAR_1, "Unexpected URI");
  FUNC_16(VAR_2->xml, VAR_11);
  return -1;
 }
 VAR_10++;
 FUNC_11(VAR_1, "Update interior node: '%s'", VAR_10);

 VAR_9 = FUNC_18(VAR_2->xml, VAR_4);
 if (VAR_9 == ((void*)0)) {
  FUNC_11(VAR_1, "Could not extract MO text");
  FUNC_16(VAR_2->xml, VAR_11);
  return -1;
 }
 FUNC_11(VAR_0, "[hs20] nodeContainer text: '%s'", VAR_9);
 VAR_13 = FUNC_9(VAR_9, "<![CDATA[");
 VAR_14 = FUNC_9(VAR_9, "]]>");
 if (VAR_13 && VAR_14 && VAR_14 > VAR_13 &&
     VAR_13 < FUNC_9(VAR_9, "MgmtTree") &&
     VAR_14 > FUNC_9(VAR_9, "/MgmtTree")) {
  char *VAR_16;
  FUNC_11(VAR_0, "[hs20] Removing extra CDATA container");
  VAR_16 = FUNC_8(VAR_13 + 9);
  if (VAR_16) {
   VAR_14 = FUNC_9(VAR_16, "]]>");
   if (VAR_14)
    *VAR_14 = '\0';
   FUNC_11(VAR_0, "[hs20] nodeContainer text with CDATA container removed: '%s'",
       VAR_16);
   VAR_7 = FUNC_15(VAR_2->xml, VAR_16);
   FUNC_1(VAR_16);
  } else
   VAR_7 = ((void*)0);
 } else
  VAR_7 = FUNC_15(VAR_2->xml, VAR_9);
 FUNC_19(VAR_2->xml, VAR_9);
 if (VAR_7 == ((void*)0)) {
  FUNC_11(VAR_1, "[hs20] Could not parse nodeContainer text");
  FUNC_16(VAR_2->xml, VAR_11);
  return -1;
 }

 VAR_8 = FUNC_10(VAR_2->xml, VAR_7);
 FUNC_14(VAR_2->xml, VAR_7);
 if (VAR_8 == ((void*)0)) {
  FUNC_11(VAR_1, "[hs20] Could not parse nodeContainer TNDS text");
  FUNC_16(VAR_2->xml, VAR_11);
  return -1;
 }

 FUNC_0(VAR_2, "Parsed TNDS", VAR_8);

 if (FUNC_3(VAR_2->xml, VAR_8, VAR_10) == ((void*)0)) {
  FUNC_11(VAR_1, "[hs20] %s node not found", VAR_10);
  FUNC_14(VAR_2->xml, VAR_8);
  FUNC_16(VAR_2->xml, VAR_11);
  return -1;
 }

 if (FUNC_6(VAR_11, "./Wi-Fi/", 8) != 0) {
  FUNC_11(VAR_1, "Do not allow update outside ./Wi-Fi");
  FUNC_14(VAR_2->xml, VAR_8);
  FUNC_16(VAR_2->xml, VAR_11);
  return -1;
 }
 VAR_12 = VAR_11 + 8;

 if (VAR_2->fqdn == ((void*)0)) {
  FUNC_11(VAR_1, "FQDN not known");
  FUNC_14(VAR_2->xml, VAR_8);
  FUNC_16(VAR_2->xml, VAR_11);
  return -1;
 }
 VAR_15 = FUNC_5(VAR_2->fqdn);
 if (FUNC_6(VAR_12, VAR_2->fqdn, VAR_15) != 0 ||
     VAR_12[VAR_15] != '/') {
  FUNC_11(VAR_1, "Do not allow update outside ./Wi-Fi/%s",
      VAR_2->fqdn);
  FUNC_14(VAR_2->xml, VAR_8);
  FUNC_16(VAR_2->xml, VAR_11);
  return -1;
 }
 VAR_12 += VAR_15 + 1;

 if (FUNC_6(VAR_12, "PerProviderSubscription/", 24) != 0) {
  FUNC_11(VAR_1, "Do not allow update outside ./Wi-Fi/%s/PerProviderSubscription",
      VAR_2->fqdn);
  FUNC_14(VAR_2->xml, VAR_8);
  FUNC_16(VAR_2->xml, VAR_11);
  return -1;
 }
 VAR_12 += 24;

 FUNC_11(VAR_1, "Update command for PPS node %s", VAR_12);

 VAR_5 = FUNC_2(VAR_2->xml, VAR_3, VAR_12);
 if (VAR_5) {
  VAR_6 = FUNC_17(VAR_2->xml, VAR_5);
  FUNC_13(VAR_2->xml, VAR_5);
  FUNC_11(VAR_1, "Replace '%s' node", VAR_10);
 } else {
  char *VAR_17;
  VAR_17 = FUNC_7(VAR_12, '/');
  if (VAR_17 == ((void*)0)) {
   VAR_6 = VAR_3;
  } else {
   *VAR_17 = '\0';
   VAR_6 = FUNC_2(VAR_2->xml, VAR_3, VAR_12);
  }
  if (VAR_6 == ((void*)0)) {
   FUNC_11(VAR_1, "Could not find parent %s", VAR_12);
   FUNC_14(VAR_2->xml, VAR_8);
   FUNC_16(VAR_2->xml, VAR_11);
   return -1;
  }
  FUNC_11(VAR_1, "Add '%s' node", VAR_10);
 }
 FUNC_12(VAR_2->xml, VAR_6, VAR_8);

 FUNC_16(VAR_2->xml, VAR_11);

 return 0;
}
