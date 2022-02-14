
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int notempty; int untagged; int* tagged; } ;
struct hostapd_vlan {char const* ifname; int clean; struct hostapd_vlan* next; TYPE_1__ vlan_desc; scalar_t__ configured; } ;
struct hostapd_data {TYPE_2__* conf; } ;
struct TYPE_4__ {char* bridge; struct hostapd_vlan* vlan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,char const*) ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (struct hostapd_vlan*) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,struct hostapd_data*,struct hostapd_vlan*,int) ;
 int FUNC_6 (int ,char const*,char*,int,struct hostapd_data*) ;
 scalar_t__ FUNC_7 (struct hostapd_data*,struct hostapd_vlan*) ;
 int FUNC_8 (char*,struct hostapd_data*,int) ;
 int FUNC_9 (int ,char*,char const*,...) ;

void FUNC_10(const char *VAR_8, struct hostapd_data *VAR_9)
{
 struct hostapd_vlan *VAR_10, *VAR_11, *VAR_12 = VAR_9->conf->vlan;

 FUNC_9(VAR_5, "VLAN: vlan_dellink(%s)", VAR_8);

 VAR_10 = VAR_11 = VAR_12;

 while (VAR_12) {
  if (FUNC_3(VAR_8, VAR_12->ifname) != 0) {
   VAR_11 = VAR_12;
   VAR_12 = VAR_12->next;
   continue;
  }
  break;
 }
 if (!VAR_12)
  return;

 if (VAR_12->configured) {
  int VAR_13 = VAR_12->vlan_desc.notempty;
  int VAR_14 = VAR_12->vlan_desc.untagged;
  int *VAR_15 = VAR_12->vlan_desc.tagged;
  char VAR_16[VAR_2];
  int VAR_17;

  for (VAR_17 = 0; VAR_17 < VAR_3 && VAR_15[VAR_17]; VAR_17++) {
   if (VAR_15[VAR_17] == VAR_14 ||
       VAR_15[VAR_17] <= 0 || VAR_15[VAR_17] > VAR_4 ||
       (VAR_17 > 0 && VAR_15[VAR_17] == VAR_15[VAR_17 - 1]))
    continue;
   FUNC_5(VAR_16, VAR_9, VAR_12, VAR_15[VAR_17]);
   FUNC_6(VAR_1,
         VAR_8, VAR_16, VAR_15[VAR_17], VAR_9);
   FUNC_8(VAR_16, VAR_9, VAR_15[VAR_17]);
  }

  if (!VAR_13) {

   if (VAR_9->conf->bridge[0] &&
       (VAR_12->clean & VAR_0))
    FUNC_0(VAR_9->conf->bridge, VAR_8);
  } else if (VAR_14 > 0 && VAR_14 <= VAR_4) {
   FUNC_5(VAR_16, VAR_9, VAR_12, VAR_14);

   if (VAR_12->clean & VAR_0)
    FUNC_0(VAR_16, VAR_12->ifname);

   FUNC_8(VAR_16, VAR_9, VAR_14);
  }
 }





 if (FUNC_1(VAR_12->ifname) && FUNC_7(VAR_9, VAR_12))
  FUNC_9(VAR_6,
      "VLAN: Could not remove VLAN iface: %s: %s",
      VAR_12->ifname, FUNC_4(VAR_7));

 if (VAR_12 == VAR_10)
  VAR_9->conf->vlan = VAR_12->next;
 else
  VAR_11->next = VAR_12->next;

 FUNC_2(VAR_12);
}
