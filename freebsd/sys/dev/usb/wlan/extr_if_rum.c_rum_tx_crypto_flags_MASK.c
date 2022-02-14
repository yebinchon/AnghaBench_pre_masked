
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ u_int ;
struct rum_softc {int dummy; } ;
struct ieee80211vap {struct ieee80211_key const* iv_nw_keys; } ;
struct ieee80211_node {struct ieee80211vap* ni_vap; } ;
struct ieee80211_key {int wk_flags; scalar_t__ wk_keyix; int wk_keylen; TYPE_1__* wk_cipher; } ;
struct TYPE_2__ {scalar_t__ ic_cipher; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct rum_softc*,scalar_t__,int ) ;

__attribute__((used)) static uint32_t
FUNC_3(struct rum_softc *VAR_6, struct ieee80211_node *VAR_7,
    const struct ieee80211_key *VAR_8)
{
 struct ieee80211vap *VAR_9 = VAR_7->ni_vap;
 u_int VAR_10;
 uint32_t VAR_11 = 0;
 uint8_t VAR_12, VAR_13;

 if (!(VAR_8->wk_flags & VAR_1)) {
  VAR_10 = VAR_8->wk_cipher->ic_cipher;
  VAR_13 = VAR_8->wk_keyix;
  VAR_12 = FUNC_2(VAR_6, VAR_10, VAR_8->wk_keylen);
  if (VAR_12 == 0)
   return 0;

  VAR_11 |= FUNC_0(VAR_12);


  if (!(VAR_8 >= &VAR_9->iv_nw_keys[0] &&
        VAR_8 < &VAR_9->iv_nw_keys[VAR_2]))
   VAR_11 |= VAR_4;
  else
   VAR_13 += 0 * VAR_3;

  VAR_11 |= FUNC_1(VAR_13);

  if (VAR_10 == VAR_0)
   VAR_11 |= VAR_5;
 }

 return VAR_11;
}
