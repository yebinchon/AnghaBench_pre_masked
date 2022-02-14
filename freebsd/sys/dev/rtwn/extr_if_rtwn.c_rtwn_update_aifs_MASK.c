
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
struct wmeParams {size_t wmep_aifsn; } ;
struct TYPE_2__ {struct ieee80211_channel* ic_curchan; } ;
struct rtwn_softc {struct wmeParams* cap_wmeParams; TYPE_1__ sc_ic; } ;
struct ieee80211_channel {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (struct ieee80211_channel*) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (struct rtwn_softc*,int ,size_t) ;
 int * VAR_4 ;

__attribute__((used)) static void
FUNC_2(struct rtwn_softc *VAR_5, uint8_t VAR_6)
{
 struct ieee80211_channel *VAR_7 = VAR_5->sc_ic.ic_curchan;
 const struct wmeParams *VAR_8 = VAR_5->cap_wmeParams;
 uint8_t VAR_9, VAR_10;

 for (VAR_10 = VAR_2; VAR_10 < VAR_3; VAR_10++) {

  VAR_9 = VAR_8[VAR_10].wmep_aifsn * VAR_6 +
      (FUNC_0(VAR_7) ?
   VAR_0 : VAR_1);
  FUNC_1(VAR_5, VAR_4[VAR_10], VAR_9);
 }
}
