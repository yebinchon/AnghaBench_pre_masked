
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hs20_osu_client {char* ca_fname; scalar_t__ pps_cred_set; int http; int server_url; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (int ,char const*,char*,int *,int *,int *,int *) ;
 int FUNC_3 (struct hs20_osu_client*,int ,char*,int *,int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char*,...) ;

int FUNC_6(struct hs20_osu_client *VAR_2, const char *VAR_3)
{
 FUNC_4("Cert/est_cert.der");
 FUNC_4("Cert/est_cert.pem");

 if (VAR_3 == ((void*)0)) {
  FUNC_5(VAR_0, "Invalid prov command (missing URL)");
  return -1;
 }

 FUNC_5(VAR_0,
     "Credential provisioning requested - URL: %s ca_fname: %s",
     VAR_3, VAR_2->ca_fname ? VAR_2->ca_fname : "N/A");

 FUNC_0(VAR_2->server_url);
 VAR_2->server_url = FUNC_1(VAR_3);

 if (FUNC_2(VAR_2->http, VAR_3, VAR_2->ca_fname, ((void*)0), ((void*)0), ((void*)0),
        ((void*)0)) < 0)
  return -1;
 FUNC_3(VAR_2, VAR_1,
     "Subscription registration", ((void*)0), ((void*)0));

 return VAR_2->pps_cred_set ? 0 : -1;
}
