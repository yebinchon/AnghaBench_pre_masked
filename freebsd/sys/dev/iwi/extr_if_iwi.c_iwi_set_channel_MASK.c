
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwi_softc {scalar_t__ fw_state; } ;
struct ieee80211com {TYPE_1__* ic_curchan; struct iwi_softc* ic_softc; } ;
struct TYPE_2__ {int ic_ieee; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct iwi_softc*,int ) ;

__attribute__((used)) static void
FUNC_1(struct ieee80211com *VAR_1)
{
 struct iwi_softc *VAR_2 = VAR_1->ic_softc;

 if (VAR_2->fw_state == VAR_0)
  FUNC_0(VAR_2, VAR_1->ic_curchan->ic_ieee);
}
