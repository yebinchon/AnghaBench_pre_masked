
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct ieee80211com {int ic_vaps; } ;
struct ndis_softc {int ndis_link; scalar_t__ ndis_sts; scalar_t__ ndis_80211; int ifp; struct ieee80211com ndis_ic; TYPE_2__* ndis_block; TYPE_1__* ndis_chars; } ;
struct ieee80211vap {int iv_ifp; } ;
typedef int * ndis_checkforhang_handler ;
typedef int device_object ;
struct TYPE_4__ {int nmb_miniportadapterctx; } ;
struct TYPE_3__ {int * nmc_checkhang_func; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (struct ndis_softc*) ;
 int FUNC_2 (struct ndis_softc*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (struct ndis_softc*) ;
 struct ieee80211vap* FUNC_4 (int *) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (struct ieee80211vap*,int ,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct ndis_softc*) ;
 int FUNC_8 (struct ndis_softc*) ;

__attribute__((used)) static void
FUNC_9(device_object *VAR_7, void *VAR_8)
{
 struct ndis_softc *VAR_9 = VAR_8;
 ndis_checkforhang_handler VAR_10;
 uint8_t VAR_11;

 FUNC_2(VAR_9);
 if (!FUNC_1(VAR_9)) {
  FUNC_3(VAR_9);
  return;
 }
 FUNC_3(VAR_9);

 VAR_10 = VAR_9->ndis_chars->nmc_checkhang_func;

 if (VAR_10 != ((void*)0)) {
  VAR_11 = FUNC_0(VAR_10,
      VAR_9->ndis_block->nmb_miniportadapterctx);
  if (VAR_11 == VAR_6) {
   FUNC_8(VAR_9);
   return;
  }
 }

 FUNC_2(VAR_9);
 if (VAR_9->ndis_link == 0 &&
     VAR_9->ndis_sts == VAR_4) {
  VAR_9->ndis_link = 1;
  if (VAR_9->ndis_80211 != 0) {
   struct ieee80211com *VAR_12 = &VAR_9->ndis_ic;
   struct ieee80211vap *VAR_13 = FUNC_4(&VAR_12->ic_vaps);

   if (VAR_13 != ((void*)0)) {
    FUNC_3(VAR_9);
    FUNC_7(VAR_9);
    FUNC_5(VAR_13, VAR_0, -1);
    FUNC_2(VAR_9);
    FUNC_6(VAR_13->iv_ifp,
        VAR_3);
   }
  } else
   FUNC_6(VAR_9->ifp, VAR_3);
 }

 if (VAR_9->ndis_link == 1 &&
     VAR_9->ndis_sts == VAR_5) {
  VAR_9->ndis_link = 0;
  if (VAR_9->ndis_80211 != 0) {
   struct ieee80211com *VAR_14 = &VAR_9->ndis_ic;
   struct ieee80211vap *VAR_15 = FUNC_4(&VAR_14->ic_vaps);

   if (VAR_15 != ((void*)0)) {
    FUNC_3(VAR_9);
    FUNC_5(VAR_15, VAR_1, 0);
    FUNC_2(VAR_9);
    FUNC_6(VAR_15->iv_ifp,
        VAR_2);
   }
  } else
   FUNC_6(VAR_9->ifp, VAR_2);
 }

 FUNC_3(VAR_9);
}
