
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int txrate ;
struct ndis_softc {int dummy; } ;
struct ifnet {struct ieee80211vap* if_softc; } ;
struct ifmediareq {int dummy; } ;
struct ieee80211vap {TYPE_2__* iv_bss; TYPE_1__* iv_ic; } ;
struct TYPE_4__ {int ni_txrate; } ;
struct TYPE_3__ {struct ndis_softc* ic_softc; } ;


 int FUNC_0 (struct ndis_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct ifnet*,struct ifmediareq*) ;
 scalar_t__ FUNC_2 (struct ndis_softc*,int ,int*,int*) ;

__attribute__((used)) static void
FUNC_3(struct ifnet *VAR_1, struct ifmediareq *VAR_2)
{
 struct ieee80211vap *VAR_3 = VAR_1->if_softc;
 struct ndis_softc *VAR_4 = VAR_3->iv_ic->ic_softc;
 uint32_t VAR_5;
 int VAR_6;

 if (!FUNC_0(VAR_4))
  return;

 VAR_6 = sizeof(VAR_5);
 if (FUNC_2(VAR_4, VAR_0, &VAR_5, &VAR_6) == 0)
  VAR_3->iv_bss->ni_txrate = VAR_5 / 5000;
 FUNC_1(VAR_1, VAR_2);
}
