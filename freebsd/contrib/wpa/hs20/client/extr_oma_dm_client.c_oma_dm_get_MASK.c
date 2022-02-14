
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct hs20_osu_client {char* fqdn; int xml; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int ,int *,char*) ;
 char* FUNC_1 (struct hs20_osu_client*,int *) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 size_t FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;
 int FUNC_6 (int ,char*,...) ;
 char* FUNC_7 (int ,int *) ;
 char* FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct hs20_osu_client *VAR_6, xml_node_t *VAR_7,
        xml_node_t *VAR_8, const char *VAR_9, char **VAR_10)
{
 char *VAR_11, *VAR_12;
 size_t VAR_13;
 xml_node_t *VAR_14;
 const char *VAR_15;

 *VAR_10 = ((void*)0);

 VAR_11 = FUNC_1(VAR_6, VAR_7);
 if (VAR_11 == ((void*)0))
  return VAR_0;

 FUNC_6(VAR_5, "Get command target LocURI: %s", VAR_11);
 if (FUNC_5(VAR_11, "./Wi-Fi/", 8) != 0) {
  FUNC_6(VAR_5, "Do not allow Get outside ./Wi-Fi");
  FUNC_2(VAR_11);
  return VAR_4;
 }
 VAR_12 = VAR_11 + 8;

 if (VAR_6->fqdn == ((void*)0))
  return VAR_1;
 VAR_13 = FUNC_4(VAR_6->fqdn);
 if (FUNC_5(VAR_12, VAR_6->fqdn, VAR_13) != 0 ||
     VAR_12[VAR_13] != '/') {
  FUNC_6(VAR_5, "Do not allow Get outside ./Wi-Fi/%s",
      VAR_6->fqdn);
  FUNC_2(VAR_11);
  return VAR_4;
 }
 VAR_12 += VAR_13 + 1;

 if (FUNC_5(VAR_12, "PerProviderSubscription/", 24) != 0) {
  FUNC_6(VAR_5,
      "Do not allow Get outside ./Wi-Fi/%s/PerProviderSubscription",
      VAR_6->fqdn);
  FUNC_2(VAR_11);
  return VAR_4;
 }
 VAR_12 += 24;

 FUNC_6(VAR_5, "Get command for PPS node %s", VAR_12);

 VAR_14 = FUNC_0(VAR_6->xml, VAR_8, VAR_12);
 if (VAR_14 == ((void*)0)) {
  FUNC_6(VAR_5, "Specified PPS node not found");
  FUNC_2(VAR_11);
  return VAR_2;
 }

 VAR_15 = FUNC_7(VAR_6->xml, VAR_14);
 FUNC_6(VAR_5, "Get command returned node with name '%s'", VAR_15);
 if (FUNC_3(VAR_15, "Password") == 0) {
  FUNC_6(VAR_5, "Do not allow Get for Password node");
  FUNC_2(VAR_11);
  return VAR_4;
 }







 *VAR_10 = FUNC_8(VAR_6->xml, VAR_14);
 if (*VAR_10 == ((void*)0))
  return VAR_1;

 return VAR_3;
}
