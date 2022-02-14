
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifnet {int if_broadcastaddr; } ;
struct ieee80211vap {int iv_flags_ext; int iv_myaddr; int iv_bss; struct ifnet* iv_ifp; struct ieee80211com* iv_ic; } ;
struct ieee80211com {struct ieee80211_scan_state* ic_scan; } ;
struct ieee80211_scan_state {int ss_nssid; int ss_flags; TYPE_1__* ss_ssid; } ;
struct TYPE_2__ {char* ssid; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,char*,int ) ;

__attribute__((used)) static void
FUNC_1(struct ieee80211vap *VAR_2, int VAR_3)
{
 struct ieee80211com *VAR_4 = VAR_2->iv_ic;
 struct ieee80211_scan_state *VAR_5 = VAR_4->ic_scan;
 struct ifnet *VAR_6 = VAR_2->iv_ifp;
 int VAR_7;




 if (VAR_2->iv_flags_ext & VAR_0)
  return;






 for (VAR_7 = 0; VAR_7 < VAR_5->ss_nssid; VAR_7++)
  FUNC_0(VAR_2->iv_bss,
   VAR_2->iv_myaddr, VAR_6->if_broadcastaddr,
   VAR_6->if_broadcastaddr,
   VAR_5->ss_ssid[VAR_7].ssid, VAR_5->ss_ssid[VAR_7].len);
 if ((VAR_5->ss_flags & VAR_1) == 0)
  FUNC_0(VAR_2->iv_bss,
   VAR_2->iv_myaddr, VAR_6->if_broadcastaddr,
   VAR_6->if_broadcastaddr,
   "", 0);
}
