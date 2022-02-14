
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct hs20_osu_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hs20_osu_client*,int *) ;
 int FUNC_1 (struct hs20_osu_client*,int *) ;
 char* FUNC_2 (struct hs20_osu_client*,int *) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,char*,...) ;

__attribute__((used)) static int FUNC_6(struct hs20_osu_client *VAR_3, xml_node_t *VAR_4)
{
 char *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(VAR_3, VAR_4);
 if (VAR_5 == ((void*)0)) {
  FUNC_5(VAR_2, "No Target LocURI node found");
  return VAR_0;
 }

 FUNC_5(VAR_2, "Target LocURI: %s", VAR_5);

 if (FUNC_4(VAR_5, "./DevDetail/Ext/org.wi-fi/Wi-Fi/Ops/"
     "launchBrowserToURI") == 0) {
  VAR_6 = FUNC_0(VAR_3, VAR_4);
 } else if (FUNC_4(VAR_5, "./DevDetail/Ext/org.wi-fi/Wi-Fi/Ops/"
     "getCertificate") == 0) {
  VAR_6 = FUNC_1(VAR_3, VAR_4);
 } else {
  FUNC_5(VAR_2, "Unsupported exec Target LocURI");
  VAR_6 = VAR_1;
 }
 FUNC_3(VAR_5);

 return VAR_6;
}
