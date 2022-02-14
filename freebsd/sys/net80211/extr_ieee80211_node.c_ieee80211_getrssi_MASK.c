
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rssiinfo {int rssi_total; int rssi_samples; } ;
struct ieee80211vap {int iv_opmode; int * iv_bss; struct ieee80211com* iv_ic; } ;
struct ieee80211com {int (* ic_node_getrssi ) (int *) ;int ic_sta; } ;
typedef int int8_t ;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,struct ieee80211vap*,int ,struct rssiinfo*) ;
 int FUNC_2 (int *) ;

int8_t
FUNC_3(struct ieee80211vap *VAR_3)
{

 struct ieee80211com *VAR_4 = VAR_3->iv_ic;
 struct rssiinfo VAR_5;

 VAR_5.rssi_total = 0;
 VAR_5.rssi_samples = 0;
 switch (VAR_3->iv_opmode) {
 case 131:
 case 133:
  FUNC_1(&VAR_4->ic_sta, VAR_3, VAR_0,
      &VAR_5);
  break;
 case 132:
  FUNC_1(&VAR_4->ic_sta, VAR_3, VAR_1,
      &VAR_5);
  break;






 case 129:
 case 128:
 default:
  if (VAR_3->iv_bss != ((void*)0))
   VAR_5.rssi_total = VAR_4->ic_node_getrssi(VAR_3->iv_bss);
  VAR_5.rssi_samples = 1;
  break;
 }
 return VAR_5.rssi_total / ((VAR_5.rssi_samples) == 0 ? 1 : (VAR_5.rssi_samples));

}
