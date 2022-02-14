
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct ieee80211com {int ic_vaps; } ;
struct uath_softc {struct ieee80211com sc_ic; } ;
struct uath_cmd_rateset {int dummy; } ;
struct TYPE_3__ {int * set; int length; } ;
struct TYPE_4__ {void* wlanmode; TYPE_1__ rateset; } ;
struct uath_cmd_create_connection {TYPE_2__ connattr; void* size; void* bssid; void* connid; } ;
struct ieee80211vap {int iv_bss; } ;
struct ieee80211_rateset {int rs_nrates; int rs_rates; } ;
struct ieee80211_node {int ni_chan; struct ieee80211_rateset ni_rates; } ;
typedef int create ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 struct ieee80211vap* FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int *,int ) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (struct ieee80211_node*) ;
 struct ieee80211_node* FUNC_6 (int ) ;
 int FUNC_7 (struct uath_cmd_create_connection*,int ,int) ;
 int FUNC_8 (struct uath_softc*,int ,struct uath_cmd_create_connection*,int,int ) ;

__attribute__((used)) static int
FUNC_9(struct uath_softc *VAR_4, uint32_t VAR_5)
{
 const struct ieee80211_rateset *VAR_6;
 struct ieee80211com *VAR_7 = &VAR_4->sc_ic;
 struct ieee80211vap *VAR_8 = FUNC_2(&VAR_7->ic_vaps);
 struct ieee80211_node *VAR_9;
 struct uath_cmd_create_connection VAR_10;

 VAR_9 = FUNC_6(VAR_8->iv_bss);
 FUNC_7(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.connid = FUNC_4(VAR_5);
 VAR_10.bssid = FUNC_4(0);

 VAR_10.size = FUNC_4(sizeof(struct uath_cmd_rateset));

 VAR_6 = &VAR_9->ni_rates;
 VAR_10.connattr.rateset.length = VAR_6->rs_nrates;
 FUNC_3(VAR_6->rs_rates, &VAR_10.connattr.rateset.set[0],
     VAR_6->rs_nrates);


 if (FUNC_0(VAR_9->ni_chan))
  VAR_10.connattr.wlanmode = FUNC_4(VAR_1);
 else if (FUNC_1(VAR_9->ni_chan))
  VAR_10.connattr.wlanmode = FUNC_4(VAR_3);
 else
  VAR_10.connattr.wlanmode = FUNC_4(VAR_2);
 FUNC_5(VAR_9);

 return FUNC_8(VAR_4, VAR_0, &VAR_10,
     sizeof VAR_10, 0);
}
