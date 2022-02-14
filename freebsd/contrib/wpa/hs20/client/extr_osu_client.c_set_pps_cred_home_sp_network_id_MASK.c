
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct hs20_osu_client {int xml; } ;


 int VAR_0 ;
 int * FUNC_0 (int ,int *,char*) ;
 int FUNC_1 (int ,char*,...) ;
 char* FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4(struct hs20_osu_client *VAR_1,
         int VAR_2, xml_node_t *VAR_3)
{
 xml_node_t *VAR_4, *VAR_5;
 char *VAR_6, *VAR_7;

 VAR_4 = FUNC_0(VAR_1->xml, VAR_3, "SSID");
 if (VAR_4 == ((void*)0)) {
  FUNC_1(VAR_0, "Ignore HomeSP/NetworkID without mandatory SSID node");
  return;
 }

 VAR_5 = FUNC_0(VAR_1->xml, VAR_3, "HESSID");

 VAR_6 = FUNC_2(VAR_1->xml, VAR_4);
 if (VAR_6 == ((void*)0))
  return;
 VAR_7 = VAR_5 ? FUNC_2(VAR_1->xml, VAR_5) : ((void*)0);

 FUNC_1(VAR_0, "- HomeSP/NetworkID/<X+>/SSID = %s", VAR_6);
 if (VAR_7)
  FUNC_1(VAR_0, "- HomeSP/NetworkID/<X+>/HESSID = %s",
      VAR_7);



 FUNC_3(VAR_1->xml, VAR_6);
 FUNC_3(VAR_1->xml, VAR_7);
}
