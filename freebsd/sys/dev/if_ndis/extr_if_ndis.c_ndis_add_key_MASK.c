
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ndis_softc {int dummy; } ;
struct ieee80211vap {TYPE_3__* iv_bss; TYPE_1__* iv_ic; } ;
struct ieee80211_key {int wk_keylen; int wk_flags; int wk_keyix; int wk_key; int * wk_keyrsc; TYPE_2__* wk_cipher; } ;
typedef int rkey ;
struct TYPE_9__ {int nk_len; int nk_keylen; int nk_keyidx; int nk_keydata; int nk_keyrsc; int nk_bssid; } ;
typedef TYPE_4__ ndis_80211_key ;
struct TYPE_8__ {int ni_bssid; } ;
struct TYPE_7__ {int ic_cipher; } ;
struct TYPE_6__ {struct ndis_softc* ic_softc; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (char*,int) ;
 int VAR_7 ;
 int FUNC_2 (struct ndis_softc*,int ,TYPE_4__*,int*) ;

__attribute__((used)) static int
FUNC_3(struct ieee80211vap *VAR_8, const struct ieee80211_key *VAR_9)
{
 struct ndis_softc *VAR_10 = VAR_8->iv_ic->ic_softc;
 ndis_80211_key VAR_11;
 int VAR_12, VAR_13 = 0;

 switch (VAR_9->wk_cipher->ic_cipher) {
 case 129:

  VAR_12 = sizeof(ndis_80211_key);
  FUNC_1((char *)&VAR_11, sizeof(VAR_11));

  VAR_11.nk_len = VAR_12;
  VAR_11.nk_keylen = VAR_9->wk_keylen;

  if (VAR_9->wk_flags & VAR_4)
   VAR_11.nk_keylen += 16;



  if (VAR_9->wk_keyix != VAR_2)
   VAR_11.nk_keyidx = VAR_9->wk_keyix;
  else
   VAR_11.nk_keyidx = 0;

  if (VAR_9->wk_flags & VAR_5)
   VAR_11.nk_keyidx |= 1 << 31;

  if (VAR_9->wk_flags & VAR_3) {
   FUNC_0(VAR_7,
       VAR_11.nk_bssid, VAR_1);
  } else {
   FUNC_0(VAR_8->iv_bss->ni_bssid,
       VAR_11.nk_bssid, VAR_1);

   VAR_11.nk_keyidx |= 1 << 30;
  }


  VAR_11.nk_keyrsc = VAR_9->wk_keyrsc[0];

  if (VAR_11.nk_keyrsc)
   VAR_11.nk_keyidx |= 1 << 29;

  if (VAR_9->wk_flags & VAR_4) {
   FUNC_0(VAR_9->wk_key, VAR_11.nk_keydata, 16);
   FUNC_0(VAR_9->wk_key + 24, VAR_11.nk_keydata + 16, 8);
   FUNC_0(VAR_9->wk_key + 16, VAR_11.nk_keydata + 24, 8);
  } else
   FUNC_0(VAR_9->wk_key, VAR_11.nk_keydata, VAR_9->wk_keylen);

  VAR_13 = FUNC_2(VAR_10, VAR_6, &VAR_11, &VAR_12);
  break;
 case 128:
  VAR_13 = 0;
  break;




 case 130:
 default:
  VAR_13 = VAR_0;
  break;
 }



 if (VAR_13)
  return (0);

 return (1);
}
