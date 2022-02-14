
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct hs20_osu_client {int ifname; scalar_t__ pps_updated; int xml; } ;


 int VAR_0 ;
 int * FUNC_0 (struct hs20_osu_client*,char const*,int) ;
 int FUNC_1 (struct hs20_osu_client*,char const*) ;
 int * FUNC_2 (struct hs20_osu_client*,char const*,int *,int,char**,int *,char const*) ;
 int * FUNC_3 (struct hs20_osu_client*,char*,int *,int *,char const*,char const*,char const*,char const*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct hs20_osu_client*,char*) ;
 int FUNC_8 (int ,int *) ;

void FUNC_9(struct hs20_osu_client *VAR_1, const char *VAR_2,
      const char *VAR_3,
      const char *VAR_4, const char *VAR_5,
      const char *VAR_6, const char *VAR_7,
      xml_node_t *VAR_8)
{
 xml_node_t *VAR_9, *VAR_10;
 char *VAR_11 = ((void*)0);
 int VAR_12 = 0;

 FUNC_6(VAR_0, "OMA-DM policy update");
 FUNC_7(VAR_1, "OMA-DM policy update");

 VAR_12++;
 VAR_9 = FUNC_0(VAR_1, VAR_2, VAR_12);
 if (VAR_9 == ((void*)0))
  return;

 while (VAR_9) {
  VAR_10 = FUNC_3(VAR_1, VAR_11 ? VAR_11 : VAR_2,
     VAR_9, ((void*)0), VAR_6,
     VAR_7, VAR_4, VAR_5);
  if (VAR_10 == ((void*)0))
   return;

  VAR_12++;
  VAR_9 = FUNC_2(VAR_1, VAR_2, VAR_10, VAR_12, &VAR_11,
     VAR_8, VAR_3);
  FUNC_8(VAR_1->xml, VAR_10);
 }

 FUNC_4(VAR_11);

 if (VAR_1->pps_updated) {
  FUNC_6(VAR_0, "Update wpa_supplicant credential based on updated PPS MO");
  FUNC_7(VAR_1, "Update wpa_supplicant credential based on updated PPS MO and request connection");
  FUNC_1(VAR_1, VAR_3);
  if (FUNC_5(VAR_1->ifname, "INTERWORKING_SELECT auto") < 0) {
   FUNC_6(VAR_0,
       "Failed to request wpa_supplicant to reconnect");
   FUNC_7(VAR_1,
          "Failed to request wpa_supplicant to reconnect");
  }
 }
}
