
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int notempty; int untagged; int* tagged; } ;
struct hostapd_vlan {int configured; int clean; TYPE_1__ vlan_desc; int ifname; struct hostapd_vlan* next; } ;
struct hostapd_data {TYPE_2__* conf; } ;
struct TYPE_4__ {char* bridge; struct hostapd_vlan* vlan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,int ) ;
 int FUNC_3 (char*,struct hostapd_data*,struct hostapd_vlan*,int) ;
 int FUNC_4 (char*,struct hostapd_data*,int) ;
 int FUNC_5 (int ,char const*,char*,int,struct hostapd_data*) ;
 int FUNC_6 (int ,char*,char const*) ;

void FUNC_7(const char *VAR_6, struct hostapd_data *VAR_7)
{
 char VAR_8[VAR_2];
 struct hostapd_vlan *VAR_9;
 int VAR_10, *VAR_11, VAR_12, VAR_13;

 FUNC_6(VAR_5, "VLAN: vlan_newlink(%s)", VAR_6);

 for (VAR_9 = VAR_7->conf->vlan; VAR_9; VAR_9 = VAR_9->next) {
  if (VAR_9->configured ||
      FUNC_2(VAR_6, VAR_9->ifname) != 0)
   continue;
  break;
 }
 if (!VAR_9)
  return;

 VAR_9->configured = 1;

 VAR_13 = VAR_9->vlan_desc.notempty;
 VAR_10 = VAR_9->vlan_desc.untagged;
 VAR_11 = VAR_9->vlan_desc.tagged;

 if (!VAR_13) {

  if (VAR_7->conf->bridge[0] &&
      !FUNC_0(VAR_7->conf->bridge, VAR_6))
   VAR_9->clean |= VAR_0;
 } else if (VAR_10 > 0 && VAR_10 <= VAR_4) {
  FUNC_3(VAR_8, VAR_7, VAR_9, VAR_10);

  FUNC_4(VAR_8, VAR_7, VAR_10);

  if (!FUNC_0(VAR_8, VAR_6))
   VAR_9->clean |= VAR_0;
 }

 for (VAR_12 = 0; VAR_12 < VAR_3 && VAR_11[VAR_12]; VAR_12++) {
  if (VAR_11[VAR_12] == VAR_10 ||
      VAR_11[VAR_12] <= 0 || VAR_11[VAR_12] > VAR_4 ||
      (VAR_12 > 0 && VAR_11[VAR_12] == VAR_11[VAR_12 - 1]))
   continue;
  FUNC_3(VAR_8, VAR_7, VAR_9, VAR_11[VAR_12]);
  FUNC_4(VAR_8, VAR_7, VAR_11[VAR_12]);
  FUNC_5(VAR_1,
        VAR_6, VAR_8, VAR_11[VAR_12], VAR_7);
 }

 FUNC_1(VAR_6);
}
