
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct ieee80211_node {scalar_t__* ni_mimo_rssi_ctl; int * ni_mimo_noise_ctl; int ni_mimo_chains; } ;
struct ieee80211_mimo_info {TYPE_1__* ch; } ;
typedef int int32_t ;
struct TYPE_2__ {int* rssi; int * noise; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ieee80211_mimo_info*,int) ;

__attribute__((used)) static void
FUNC_3(const struct ieee80211_node *VAR_2,
 struct ieee80211_mimo_info *VAR_3)
{
 int VAR_4;
 uint32_t VAR_5;
 int32_t VAR_6;

 FUNC_2(VAR_3, sizeof(*VAR_3));

 for (VAR_4 = 0; VAR_4 < FUNC_1(VAR_0, VAR_2->ni_mimo_chains); VAR_4++) {

  VAR_5 = VAR_2->ni_mimo_rssi_ctl[VAR_4];
  if (VAR_5 == VAR_1) {
   VAR_3->ch[VAR_4].rssi[0] = 0;
  } else {
   VAR_6 = FUNC_0(VAR_5);
   VAR_3->ch[VAR_4].rssi[0] = VAR_6 < 0 ? 0 : VAR_6 > 127 ? 127 : VAR_6;
  }
  VAR_3->ch[VAR_4].noise[0] = VAR_2->ni_mimo_noise_ctl[VAR_4];
 }




}
