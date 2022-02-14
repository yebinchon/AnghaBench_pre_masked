
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hostapd_vlan {scalar_t__* bridge; } ;
struct hostapd_data {TYPE_1__* conf; } ;
struct TYPE_4__ {char* vlan_tagged_interface; } ;
struct TYPE_3__ {scalar_t__* vlan_bridge; TYPE_2__ ssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,char*,...) ;
 int FUNC_1 (char*,scalar_t__*,int) ;
 int FUNC_2 (int ,char*,char*) ;

__attribute__((used)) static void FUNC_3(char *VAR_2, struct hostapd_data *VAR_3,
        struct hostapd_vlan *VAR_4, int VAR_5)
{
 char *VAR_6 = VAR_3->conf->ssid.vlan_tagged_interface;
 int VAR_7;

 if (VAR_4->bridge[0]) {
  FUNC_1(VAR_2, VAR_4->bridge, VAR_0);
  VAR_7 = 0;
 } else if (VAR_3->conf->vlan_bridge[0]) {
  VAR_7 = FUNC_0(VAR_2, VAR_0, "%s%d",
      VAR_3->conf->vlan_bridge, VAR_5);
 } else if (VAR_6) {
  VAR_7 = FUNC_0(VAR_2, VAR_0, "br%s.%d",
      VAR_6, VAR_5);
 } else {
  VAR_7 = FUNC_0(VAR_2, VAR_0, "brvlan%d", VAR_5);
 }
 if (VAR_7 >= VAR_0)
  FUNC_2(VAR_1,
      "VLAN: Interface name was truncated to %s",
      VAR_2);
}
