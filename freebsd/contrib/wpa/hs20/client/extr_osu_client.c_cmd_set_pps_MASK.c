
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct hs20_osu_client {int xml; } ;


 int VAR_0 ;
 int * FUNC_0 (int ,char const*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,char) ;
 char* FUNC_3 (char const*) ;
 char* FUNC_4 (char const*,char*) ;
 int FUNC_5 (struct hs20_osu_client*,int *,char const*) ;
 int FUNC_6 (int ,char*,char const*) ;
 int FUNC_7 (int ,int *) ;

void FUNC_8(struct hs20_osu_client *VAR_1, const char *VAR_2)
{
 xml_node_t *VAR_3;
 const char *VAR_4;
 char *VAR_5 = ((void*)0), *VAR_6;

 VAR_3 = FUNC_0(VAR_1->xml, VAR_2);
 if (VAR_3 == ((void*)0)) {
  FUNC_6(VAR_0, "Could not read or parse '%s'", VAR_2);
  return;
 }

 VAR_4 = FUNC_4(VAR_2, "SP/");
 if (VAR_4) {
  VAR_5 = FUNC_3(VAR_4 + 3);
  if (VAR_5 == ((void*)0))
   return;
  VAR_6 = FUNC_2(VAR_5, '/');
  if (VAR_6)
   *VAR_6 = '\0';
  VAR_4 = VAR_5;
 } else
  VAR_4 = "wi-fi.org";

 FUNC_6(VAR_0, "Set PPS MO info to wpa_supplicant - SP FQDN %s",
     VAR_4);
 FUNC_5(VAR_1, VAR_3, VAR_4);

 FUNC_1(VAR_5);
 FUNC_7(VAR_1->xml, VAR_3);
}
