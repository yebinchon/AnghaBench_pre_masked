
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct hs20_osu_client {char const* fqdn; int pps_updated; int xml; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct hs20_osu_client*,char*,int *) ;
 int * FUNC_1 (int ,int *,char const*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,char) ;
 char* FUNC_4 (char const*) ;
 int FUNC_5 (char*,char const*,size_t) ;
 size_t FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (char const*,char*,int) ;
 char* FUNC_8 (char*,char) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 int * FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (struct hs20_osu_client*,char const*,int *) ;
 int FUNC_12 (int ,char*,...) ;
 int FUNC_13 (int ,int *,int *) ;
 int * FUNC_14 (int ,int *,int *,char*) ;
 int FUNC_15 (int ,int *) ;
 int * FUNC_16 (int ,char*) ;
 char* FUNC_17 (int ,int *) ;
 int FUNC_18 (int ,char*) ;

__attribute__((used)) static int FUNC_19(struct hs20_osu_client *VAR_8, const char *VAR_9,
     xml_node_t *VAR_10, xml_node_t *VAR_11,
     const char *VAR_12)
{
 const char *VAR_13;
 size_t VAR_14;
 xml_node_t *VAR_15, *VAR_16, *VAR_17, *VAR_18;
 char *VAR_19, *VAR_20, *VAR_21, *VAR_22;
 int VAR_23 = 0;
 size_t VAR_24;

 FUNC_12(VAR_7, "Add command target LocURI: %s", VAR_9);

 if (FUNC_7(VAR_9, "./Wi-Fi/", 8) != 0) {
  FUNC_12(VAR_7, "Do not allow Add outside ./Wi-Fi");
  return VAR_4;
 }
 VAR_13 = VAR_9 + 8;

 if (VAR_8->fqdn == ((void*)0))
  return VAR_2;
 VAR_14 = FUNC_6(VAR_8->fqdn);
 if (FUNC_7(VAR_13, VAR_8->fqdn, VAR_14) != 0 ||
     VAR_13[VAR_14] != '/') {
  FUNC_12(VAR_7, "Do not allow Add outside ./Wi-Fi/%s",
      VAR_8->fqdn);
  return VAR_4;
 }
 VAR_13 += VAR_14 + 1;

 if (FUNC_7(VAR_13, "PerProviderSubscription/", 24) != 0) {
  FUNC_12(VAR_7,
      "Do not allow Add outside ./Wi-Fi/%s/PerProviderSubscription",
      VAR_8->fqdn);
  return VAR_4;
 }
 VAR_13 += 24;

 FUNC_12(VAR_7, "Add command for PPS node %s", VAR_13);

 VAR_18 = FUNC_1(VAR_8->xml, VAR_11, VAR_13);
 if (VAR_18) {
  FUNC_12(VAR_7, "Specified PPS node exists already");
  return VAR_0;
 }

 VAR_20 = FUNC_4(VAR_13);
 if (VAR_20 == ((void*)0))
  return VAR_2;
 while (!VAR_18) {
  VAR_21 = FUNC_8(VAR_20, '/');
  if (!VAR_21)
   break;
  VAR_21[0] = '\0';
  VAR_18 = FUNC_1(VAR_8->xml, VAR_11, VAR_20);
  FUNC_12(VAR_7, "Node %s %s", VAR_20,
      VAR_18 ? "exists" : "does not exist");
 }

 FUNC_12(VAR_7, "Parent URI: %s", VAR_20);

 if (!VAR_18) {

  VAR_18 = VAR_11;
 }

 VAR_24 = FUNC_6(VAR_20);
 FUNC_5(VAR_20, VAR_13 + VAR_24, FUNC_6(VAR_13));
 VAR_21 = VAR_20;
 while (*VAR_21 == '/')
  VAR_21++;
 FUNC_12(VAR_7, "Nodes to add: %s", VAR_21);

 for (;;) {
  VAR_22 = FUNC_3(VAR_21, '/');
  if (!VAR_22)
   break;
  *VAR_22 = '\0';
  FUNC_12(VAR_7, "Adding interim node %s", VAR_21);
  VAR_18 = FUNC_14(VAR_8->xml, VAR_18, ((void*)0), VAR_21);
  if (VAR_18 == ((void*)0)) {
   FUNC_2(VAR_20);
   return VAR_2;
  }
  VAR_21 = VAR_22 + 1;
 }

 FUNC_12(VAR_7, "Adding node %s", VAR_21);

 VAR_15 = FUNC_1(VAR_8->xml, VAR_10, "Item/Meta/Type");
 if (VAR_15) {
  char *VAR_25;
  VAR_25 = FUNC_17(VAR_8->xml, VAR_15);
  if (VAR_25 == ((void*)0)) {
   FUNC_12(VAR_6, "Could not find type text");
   FUNC_2(VAR_20);
   return VAR_1;
  }
  VAR_23 = VAR_15 &&
   FUNC_9(VAR_25, "application/vnd.syncml.dmtnds+xml");
 }

 VAR_15 = FUNC_1(VAR_8->xml, VAR_10, "Item/Data");
 if (VAR_15 == ((void*)0)) {
  FUNC_12(VAR_7, "No Add/Item/Data found");
  FUNC_2(VAR_20);
  return VAR_1;
 }

 VAR_19 = FUNC_17(VAR_8->xml, VAR_15);
 if (VAR_19 == ((void*)0)) {
  FUNC_12(VAR_7, "Could not get Add/Item/Data text");
  FUNC_2(VAR_20);
  return VAR_1;
 }

 FUNC_12(VAR_5, "Add/Item/Data: %s", VAR_19);

 if (VAR_23) {
  VAR_16 = FUNC_16(VAR_8->xml, VAR_19);
  FUNC_18(VAR_8->xml, VAR_19);
  if (VAR_16 == ((void*)0)) {
   FUNC_12(VAR_7,
       "Could not parse Add/Item/Data text");
   FUNC_2(VAR_20);
   return VAR_1;
  }

  VAR_17 = FUNC_10(VAR_8->xml, VAR_16);
  FUNC_15(VAR_8->xml, VAR_16);
  if (VAR_17 == ((void*)0)) {
   FUNC_12(VAR_7, "Could not parse TNDS text");
   FUNC_2(VAR_20);
   return VAR_1;
  }

  FUNC_0(VAR_8, "Parsed TNDS", VAR_17);

  FUNC_13(VAR_8->xml, VAR_18, VAR_17);
 } else {

  FUNC_2(VAR_20);
  return VAR_1;
 }

 FUNC_2(VAR_20);

 if (FUNC_11(VAR_8, VAR_12, VAR_11) < 0)
  return VAR_2;

 VAR_8->pps_updated = 1;

 return VAR_3;
}
