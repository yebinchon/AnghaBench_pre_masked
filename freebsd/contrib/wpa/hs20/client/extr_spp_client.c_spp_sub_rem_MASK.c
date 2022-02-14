
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct hs20_osu_client {int ca_fname; int http; int server_url; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (int ,char const*,int ,char const*,char const*,char const*,char const*) ;
 int FUNC_3 (struct hs20_osu_client*,int ,char*,char const*,int *) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct hs20_osu_client*,char*) ;

void FUNC_6(struct hs20_osu_client *VAR_2, const char *VAR_3,
   const char *VAR_4,
   const char *VAR_5, const char *VAR_6,
   const char *VAR_7, const char *VAR_8,
   xml_node_t *VAR_9)
{
 FUNC_4(VAR_0, "SPP subscription remediation");
 FUNC_5(VAR_2, "SPP subscription remediation");

 FUNC_0(VAR_2->server_url);
 VAR_2->server_url = FUNC_1(VAR_3);

 if (FUNC_2(VAR_2->http, VAR_3, VAR_2->ca_fname,
        VAR_7, VAR_8, VAR_5,
        VAR_6) == 0) {
  FUNC_3(VAR_2, VAR_1,
      "Subscription remediation", VAR_4, VAR_9);
 }
}
