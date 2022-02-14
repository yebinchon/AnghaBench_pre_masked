
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_channel {int dummy; } ;
struct ath_spectral_state {int spectral_state; scalar_t__ spectral_enable_after_reset; } ;
struct ath_softc {int sc_dospectral; int sc_ah; struct ath_spectral_state* sc_spectral; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;

int
FUNC_2(struct ath_softc *VAR_0, struct ieee80211_channel *VAR_1)
{
 struct ath_spectral_state *VAR_2 = VAR_0->sc_spectral;


 VAR_0->sc_dospectral = 0;

 if (VAR_2 == ((void*)0))
  return (0);

 if (VAR_2->spectral_enable_after_reset) {
  FUNC_0(VAR_0->sc_ah,
      &VAR_2->spectral_state);
  (void) FUNC_1(VAR_0->sc_ah);
  VAR_0->sc_dospectral = 1;
 }
 return (0);
}
