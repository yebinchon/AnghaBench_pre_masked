
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ndis_softc {int dummy; } ;
struct ieee80211vap {TYPE_1__* iv_ifp; TYPE_2__* iv_ic; } ;
struct ieee80211_key {int wk_keyix; } ;
typedef int rkey ;
struct TYPE_7__ {int nk_len; int nk_bssid; int nk_keyidx; } ;
typedef TYPE_3__ ndis_80211_key ;
struct TYPE_6__ {struct ndis_softc* ic_softc; } ;
struct TYPE_5__ {int if_broadcastaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct ndis_softc*,int ,TYPE_3__*,int*) ;

int
FUNC_3(struct ieee80211vap *VAR_2, const struct ieee80211_key *VAR_3)
{
 struct ndis_softc *VAR_4 = VAR_2->iv_ic->ic_softc;
 ndis_80211_key VAR_5;
 int VAR_6, VAR_7 = 0;

 FUNC_1((char *)&VAR_5, sizeof(VAR_5));
 VAR_6 = sizeof(VAR_5);

 VAR_5.nk_len = VAR_6;
 VAR_5.nk_keyidx = VAR_3->wk_keyix;

 FUNC_0(VAR_2->iv_ifp->if_broadcastaddr,
     VAR_5.nk_bssid, VAR_0);

 VAR_7 = FUNC_2(VAR_4, VAR_1, &VAR_5, &VAR_6);

 if (VAR_7)
  return (0);

 return (1);
}
