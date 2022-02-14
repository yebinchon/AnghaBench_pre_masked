
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct hs20_osu_client {int no_reconnect; scalar_t__ pps_cred_set; int ifname; int pps_fname; int xml; } ;


 int VAR_0 ;
 int * FUNC_0 (struct hs20_osu_client*,char const*,int) ;
 int FUNC_1 (struct hs20_osu_client*,int ) ;
 int * FUNC_2 (struct hs20_osu_client*,char const*,int *,int,char**,int *,int *) ;
 int * FUNC_3 (struct hs20_osu_client*,char*,int *,int *,int *,int *,int *,int *) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (struct hs20_osu_client*,char*) ;
 int FUNC_9 (int ,int *) ;

int FUNC_10(struct hs20_osu_client *VAR_1, const char *VAR_2)
{
 xml_node_t *VAR_3, *VAR_4;
 char *VAR_5 = ((void*)0);
 int VAR_6 = 0;

 if (VAR_2 == ((void*)0)) {
  FUNC_7(VAR_0, "Invalid prov command (missing URL)");
  return -1;
 }

 FUNC_7(VAR_0, "OMA-DM SIM provisioning requested");
 VAR_1->no_reconnect = 2;

 FUNC_7(VAR_0, "Wait for IP address before starting SIM provisioning");
 FUNC_8(VAR_1, "Wait for IP address before starting SIM provisioning");

 if (FUNC_5(VAR_1->ifname, 15) < 0) {
  FUNC_7(VAR_0, "Could not get IP address for WLAN - try connection anyway");
 }
 FUNC_8(VAR_1, "OMA-DM SIM provisioning");

 VAR_6++;
 VAR_3 = FUNC_0(VAR_1, VAR_2, VAR_6);
 if (VAR_3 == ((void*)0))
  return -1;

 while (VAR_3) {
  VAR_4 = FUNC_3(VAR_1, VAR_5 ? VAR_5 : VAR_2,
     VAR_3, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0));
  if (VAR_4 == ((void*)0))
   return -1;

  VAR_6++;
  VAR_3 = FUNC_2(VAR_1, VAR_2, VAR_4, VAR_6, &VAR_5,
     ((void*)0), ((void*)0));
  FUNC_9(VAR_1->xml, VAR_4);
 }

 FUNC_4(VAR_5);

 if (VAR_1->pps_cred_set) {
  FUNC_7(VAR_0, "Updating wpa_supplicant credentials");
  FUNC_1(VAR_1, VAR_1->pps_fname);

  FUNC_7(VAR_0, "Requesting reconnection with updated configuration");
  FUNC_8(VAR_1, "Requesting reconnection with updated configuration");
  if (FUNC_6(VAR_1->ifname, "INTERWORKING_SELECT auto") < 0) {
   FUNC_7(VAR_0, "Failed to request wpa_supplicant to reconnect");
   FUNC_8(VAR_1, "Failed to request wpa_supplicant to reconnect");
   return -1;
  }
 }

 return VAR_1->pps_cred_set ? 0 : -1;
}
