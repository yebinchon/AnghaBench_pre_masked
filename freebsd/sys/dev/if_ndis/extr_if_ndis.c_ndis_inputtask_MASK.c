
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct ieee80211com {int ic_vaps; } ;
struct ndis_softc {scalar_t__ ndis_80211; int ndis_rxlock; struct ifnet* ifp; struct ieee80211com ndis_ic; int ndis_rxqueue; } ;
struct mbuf {int dummy; } ;
struct ifnet {int (* if_input ) (struct ifnet*,struct mbuf*) ;} ;
struct ieee80211vap {int iv_bss; int (* iv_deliver_data ) (struct ieee80211vap*,int ,struct mbuf*) ;} ;
typedef int ndis_miniport_block ;
struct TYPE_3__ {int * do_devext; } ;
typedef TYPE_1__ device_object ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ) ;
 struct ieee80211vap* FUNC_2 (int *) ;
 struct mbuf* FUNC_3 (int *) ;
 int FUNC_4 (struct ieee80211vap*,int ,struct mbuf*) ;
 int FUNC_5 (struct ifnet*,struct mbuf*) ;

__attribute__((used)) static void
FUNC_6(device_object *VAR_0, void *VAR_1)
{
 ndis_miniport_block *VAR_2;
 struct ndis_softc *VAR_3 = VAR_1;
 struct mbuf *VAR_4;
 uint8_t VAR_5;

 VAR_2 = VAR_0->do_devext;

 FUNC_0(&VAR_3->ndis_rxlock, &VAR_5);
 while ((VAR_4 = FUNC_3(&VAR_3->ndis_rxqueue)) != ((void*)0)) {
  FUNC_1(&VAR_3->ndis_rxlock, VAR_5);
  if ((VAR_3->ndis_80211 != 0)) {
   struct ieee80211com *VAR_6 = &VAR_3->ndis_ic;
   struct ieee80211vap *VAR_7 = FUNC_2(&VAR_6->ic_vaps);

   if (VAR_7 != ((void*)0))
    VAR_7->iv_deliver_data(VAR_7, VAR_7->iv_bss, VAR_4);
  } else {
   struct ifnet *VAR_8 = VAR_3->ifp;

   (*VAR_8->if_input)(VAR_8, VAR_4);
  }
  FUNC_0(&VAR_3->ndis_rxlock, &VAR_5);
 }
 FUNC_1(&VAR_3->ndis_rxlock, VAR_5);
}
