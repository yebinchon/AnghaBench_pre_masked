
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct hs20_osu_client {int ifname; int xml; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int,char*,char*) ;
 int FUNC_3 (char*,int,char*,char) ;
 int FUNC_4 (int ,char*,...) ;
 char* FUNC_5 (int ,int *,int*) ;

__attribute__((used)) static void FUNC_6(struct hs20_osu_client *VAR_1, int VAR_2,
      xml_node_t *VAR_3)
{
 int VAR_4, VAR_5;
 char *VAR_6, *VAR_7, *VAR_8, *VAR_9;

 VAR_6 = FUNC_5(VAR_1->xml, VAR_3, &VAR_4);
 if (VAR_6 == ((void*)0))
  return;

 FUNC_4(VAR_0, "- Credential/UsernamePassword/Password = %s", VAR_6);

 VAR_7 = FUNC_1(VAR_4 * 2 + 1);
 if (VAR_7 == ((void*)0)) {
  FUNC_0(VAR_6);
  return;
 }
 VAR_9 = VAR_7 + VAR_4 * 2 + 1;
 VAR_8 = VAR_7;
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  FUNC_3(VAR_8, VAR_9 - VAR_8, "%02x", VAR_6[VAR_5]);
  VAR_8 += 2;
 }
 FUNC_0(VAR_6);

 if (FUNC_2(VAR_1->ifname, VAR_2, "password", VAR_7) < 0)
  FUNC_4(VAR_0, "Failed to set cred password");
 FUNC_0(VAR_7);
}
