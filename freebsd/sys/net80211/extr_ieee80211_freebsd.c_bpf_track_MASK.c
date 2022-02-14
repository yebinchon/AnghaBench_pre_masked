
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifnet {scalar_t__ if_init; struct ieee80211vap* if_softc; } ;
struct ieee80211vap {scalar_t__ iv_opmode; TYPE_1__* iv_ic; int iv_rawbpf; } ;
struct TYPE_2__ {int ic_montaps; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (struct ieee80211vap*,int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_4, struct ifnet *VAR_5, int VAR_6, int VAR_7)
{

 if (VAR_6 == VAR_0 &&
     VAR_5->if_init == VAR_3) {
  struct ieee80211vap *VAR_8 = VAR_5->if_softc;







  if (VAR_7) {
   FUNC_3(VAR_8, VAR_1);
   if (VAR_8->iv_opmode == VAR_2)
    FUNC_0(&VAR_8->iv_ic->ic_montaps, 1);
  } else if (!FUNC_2(VAR_8->iv_rawbpf)) {
   FUNC_3(VAR_8, -VAR_1);
   if (VAR_8->iv_opmode == VAR_2)
    FUNC_1(&VAR_8->iv_ic->ic_montaps, 1);
  }
 }
}
