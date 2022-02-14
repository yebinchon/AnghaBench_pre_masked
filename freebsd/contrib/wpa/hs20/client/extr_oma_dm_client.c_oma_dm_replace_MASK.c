
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct hs20_osu_client {char* fqdn; int pps_updated; int xml; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct hs20_osu_client*,char*,int *) ;
 int * FUNC_1 (int ,int *,char*) ;
 char* FUNC_2 (struct hs20_osu_client*,int *) ;
 int FUNC_3 (char*) ;
 size_t FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int * FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (struct hs20_osu_client*,char const*,int *) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (int ,int *,int *) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int ,int *) ;
 int * FUNC_13 (int ,char*) ;
 int * FUNC_14 (int ,int *) ;
 char* FUNC_15 (int ,int *) ;
 int FUNC_16 (int ,char*) ;
 int FUNC_17 (int ,int *,char*) ;

__attribute__((used)) static int FUNC_18(struct hs20_osu_client *VAR_7, xml_node_t *VAR_8,
     xml_node_t *VAR_9, const char *VAR_10)
{
 char *VAR_11, *VAR_12;
 size_t VAR_13;
 xml_node_t *VAR_14, *VAR_15, *VAR_16, *VAR_17, *VAR_18;
 char *VAR_19;
 int VAR_20 = 0;

 VAR_11 = FUNC_2(VAR_7, VAR_8);
 if (VAR_11 == ((void*)0))
  return VAR_0;

 FUNC_9(VAR_6, "Replace command target LocURI: %s", VAR_11);
 if (FUNC_5(VAR_11, "./Wi-Fi/", 8) != 0) {
  FUNC_9(VAR_6, "Do not allow Replace outside ./Wi-Fi");
  FUNC_3(VAR_11);
  return VAR_4;
 }
 VAR_12 = VAR_11 + 8;

 if (VAR_7->fqdn == ((void*)0)) {
  FUNC_3(VAR_11);
  return VAR_1;
 }
 VAR_13 = FUNC_4(VAR_7->fqdn);
 if (FUNC_5(VAR_12, VAR_7->fqdn, VAR_13) != 0 ||
     VAR_12[VAR_13] != '/') {
  FUNC_9(VAR_6, "Do not allow Replace outside ./Wi-Fi/%s",
      VAR_7->fqdn);
  FUNC_3(VAR_11);
  return VAR_4;
 }
 VAR_12 += VAR_13 + 1;

 if (FUNC_5(VAR_12, "PerProviderSubscription/", 24) != 0) {
  FUNC_9(VAR_6,
      "Do not allow Replace outside ./Wi-Fi/%s/PerProviderSubscription",
      VAR_7->fqdn);
  FUNC_3(VAR_11);
  return VAR_4;
 }
 VAR_12 += 24;

 FUNC_9(VAR_6, "Replace command for PPS node %s", VAR_12);

 VAR_17 = FUNC_1(VAR_7->xml, VAR_9, VAR_12);
 if (VAR_17 == ((void*)0)) {
  FUNC_9(VAR_6, "Specified PPS node not found");
  FUNC_3(VAR_11);
  return VAR_2;
 }

 VAR_14 = FUNC_1(VAR_7->xml, VAR_8, "Item/Meta/Type");
 if (VAR_14) {
  char *VAR_21;
  VAR_21 = FUNC_15(VAR_7->xml, VAR_14);
  if (VAR_21 == ((void*)0)) {
   FUNC_9(VAR_6, "Could not find type text");
   FUNC_3(VAR_11);
   return VAR_0;
  }
  VAR_20 = VAR_14 &&
   FUNC_6(VAR_21, "application/vnd.syncml.dmtnds+xml");
 }

 VAR_14 = FUNC_1(VAR_7->xml, VAR_8, "Item/Data");
 if (VAR_14 == ((void*)0)) {
  FUNC_9(VAR_6, "No Replace/Item/Data found");
  FUNC_3(VAR_11);
  return VAR_0;
 }

 VAR_19 = FUNC_15(VAR_7->xml, VAR_14);
 if (VAR_19 == ((void*)0)) {
  FUNC_9(VAR_6, "Could not get Replace/Item/Data text");
  FUNC_3(VAR_11);
  return VAR_0;
 }

 FUNC_9(VAR_5, "Replace/Item/Data: %s", VAR_19);

 if (VAR_20) {
  VAR_15 = FUNC_13(VAR_7->xml, VAR_19);
  FUNC_16(VAR_7->xml, VAR_19);
  if (VAR_15 == ((void*)0)) {
   FUNC_9(VAR_6,
       "Could not parse Replace/Item/Data text");
   FUNC_3(VAR_11);
   return VAR_0;
  }

  VAR_16 = FUNC_7(VAR_7->xml, VAR_15);
  FUNC_12(VAR_7->xml, VAR_15);
  if (VAR_16 == ((void*)0)) {
   FUNC_9(VAR_6, "Could not parse TNDS text");
   FUNC_3(VAR_11);
   return VAR_0;
  }

  FUNC_0(VAR_7, "Parsed TNDS", VAR_16);

  VAR_18 = FUNC_14(VAR_7->xml, VAR_17);
  FUNC_11(VAR_7->xml, VAR_17);
  FUNC_10(VAR_7->xml, VAR_18, VAR_16);
 } else {
  FUNC_17(VAR_7->xml, VAR_17, VAR_19);
  FUNC_16(VAR_7->xml, VAR_19);
 }

 FUNC_3(VAR_11);

 if (FUNC_8(VAR_7, VAR_10, VAR_9) < 0)
  return VAR_1;

 VAR_7->pps_updated = 1;

 return VAR_3;
}
