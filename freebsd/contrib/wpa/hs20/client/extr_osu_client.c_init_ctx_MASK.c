
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct hs20_osu_client {char* ifname; int * http; int * xml; int devid; } ;


 int * FUNC_0 (int *,int *,char*) ;
 int * FUNC_1 (struct hs20_osu_client*,int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ,struct hs20_osu_client*) ;
 int * FUNC_4 (int *,char*) ;
 int FUNC_5 (struct hs20_osu_client*,int ,int) ;
 int FUNC_6 (char*) ;
 int VAR_0 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 char* FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,char*) ;
 int * FUNC_11 (struct hs20_osu_client*,int *) ;

__attribute__((used)) static int FUNC_12(struct hs20_osu_client *VAR_1)
{
 xml_node_t *VAR_2, *VAR_3;

 FUNC_5(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->ifname = "wlan0";
 VAR_1->xml = FUNC_11(VAR_1, ((void*)0));
 if (VAR_1->xml == ((void*)0))
  return -1;

 VAR_2 = FUNC_4(VAR_1->xml, "devinfo.xml");
 if (VAR_2) {
  VAR_3 = FUNC_0(VAR_1->xml, VAR_2, "DevId");
  if (VAR_3) {
   char *VAR_4 = FUNC_9(VAR_1->xml, VAR_3);

   if (VAR_4) {
    VAR_1->devid = FUNC_6(VAR_4);
    FUNC_10(VAR_1->xml, VAR_4);
   }
  }
  FUNC_8(VAR_1->xml, VAR_2);
 }

 VAR_1->http = FUNC_1(VAR_1, VAR_1->xml);
 if (VAR_1->http == ((void*)0)) {
  FUNC_7(VAR_1->xml);
  return -1;
 }
 FUNC_2(VAR_1->http, 2);
 FUNC_3(VAR_1->http, VAR_0, VAR_1);

 return 0;
}
