
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hs20_osu_client {scalar_t__ pps_cred_set; int ca_fname; int http; int ifname; int server_url; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (int ,char const*,int ,int *,int *,int *,int *) ;
 int FUNC_3 (struct hs20_osu_client*,int ,char*,int *,int *) ;
 scalar_t__ FUNC_4 (int ,int) ;
 int FUNC_5 (int ,char*) ;

int FUNC_6(struct hs20_osu_client *VAR_2, const char *VAR_3)
{
 if (VAR_3 == ((void*)0)) {
  FUNC_5(VAR_0, "Invalid prov command (missing URL)");
  return -1;
 }

 FUNC_5(VAR_0, "SIM provisioning requested");

 FUNC_0(VAR_2->server_url);
 VAR_2->server_url = FUNC_1(VAR_3);

 FUNC_5(VAR_0, "Wait for IP address before starting SIM provisioning");

 if (FUNC_4(VAR_2->ifname, 15) < 0) {
  FUNC_5(VAR_0, "Could not get IP address for WLAN - try connection anyway");
 }

 if (FUNC_2(VAR_2->http, VAR_3, VAR_2->ca_fname, ((void*)0), ((void*)0), ((void*)0),
        ((void*)0)) < 0)
  return -1;
 FUNC_3(VAR_2, VAR_1,
     "Subscription provisioning", ((void*)0), ((void*)0));

 return VAR_2->pps_cred_set ? 0 : -1;
}
