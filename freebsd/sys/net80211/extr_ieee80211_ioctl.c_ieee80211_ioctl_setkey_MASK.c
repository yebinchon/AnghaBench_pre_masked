
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint16_t ;
struct ieee80211vap {scalar_t__ iv_opmode; struct ieee80211_key* iv_nw_keys; TYPE_1__* iv_ic; int iv_bss; } ;
struct ieee80211req_key {int ik_keylen; size_t ik_keyix; int ik_flags; int ik_macaddr; int ik_keydata; int ik_keyrsc; int ik_type; } ;
struct ieee80211req {int i_len; int i_data; } ;
struct ieee80211_key {size_t wk_keyix; int wk_keylen; int wk_macaddr; int wk_key; scalar_t__ wk_keytsc; int * wk_keyrsc; } ;
struct ieee80211_node {int ni_macaddr; struct ieee80211_key ni_ucastkey; int ni_bssid; } ;
typedef int ik ;
struct TYPE_2__ {int ic_sta; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 int FUNC_2 (int ,struct ieee80211req_key*,int) ;
 scalar_t__ FUNC_3 (struct ieee80211vap*,int ,int,struct ieee80211_key*) ;
 int FUNC_4 (struct ieee80211vap*,size_t) ;
 int FUNC_5 (struct ieee80211vap*,struct ieee80211_key*) ;
 struct ieee80211_node* FUNC_6 (int *,struct ieee80211vap*,int ) ;
 int FUNC_7 (struct ieee80211_node*) ;
 int FUNC_8 (struct ieee80211vap*) ;
 int FUNC_9 (struct ieee80211vap*) ;
 struct ieee80211_node* FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_13(struct ieee80211vap *VAR_14, struct ieee80211req *VAR_15)
{
 struct ieee80211req_key VAR_16;
 struct ieee80211_node *VAR_17;
 struct ieee80211_key *VAR_18;
 uint16_t VAR_19;
 int VAR_20, VAR_21;

 if (VAR_15->i_len != sizeof(VAR_16))
  return VAR_2;
 VAR_20 = FUNC_2(VAR_15->i_data, &VAR_16, sizeof(VAR_16));
 if (VAR_20)
  return VAR_20;


 if (VAR_16.ik_keylen > sizeof(VAR_16.ik_keydata))
  return VAR_0;
 VAR_19 = VAR_16.ik_keyix;
 if (VAR_19 == VAR_7) {

  if (VAR_16.ik_flags != (VAR_10 | VAR_9))
   return VAR_2;
  if (VAR_14->iv_opmode == VAR_11) {
   VAR_17 = FUNC_10(VAR_14->iv_bss);
   if (!FUNC_1(VAR_16.ik_macaddr, VAR_17->ni_bssid)) {
    FUNC_7(VAR_17);
    return VAR_1;
   }
  } else {
   VAR_17 = FUNC_6(&VAR_14->iv_ic->ic_sta, VAR_14,
    VAR_16.ik_macaddr);
   if (VAR_17 == ((void*)0))
    return VAR_4;
  }
  VAR_18 = &VAR_17->ni_ucastkey;
 } else {
  if (VAR_19 >= VAR_13)
   return VAR_2;
  VAR_18 = &VAR_14->iv_nw_keys[VAR_19];




  if (VAR_18->wk_keyix == VAR_7)
   VAR_18->wk_keyix = VAR_19;
  VAR_17 = ((void*)0);
 }
 VAR_20 = 0;
 FUNC_8(VAR_14);
 if (FUNC_3(VAR_14, VAR_16.ik_type, VAR_16.ik_flags, VAR_18)) {
  VAR_18->wk_keylen = VAR_16.ik_keylen;

  if (VAR_18->wk_keylen > VAR_6)
   VAR_18->wk_keylen = VAR_6;
  for (VAR_21 = 0; VAR_21 < VAR_12; VAR_21++)
   VAR_18->wk_keyrsc[VAR_21] = VAR_16.ik_keyrsc;
  VAR_18->wk_keytsc = 0;
  FUNC_12(VAR_18->wk_key, 0, sizeof(VAR_18->wk_key));
  FUNC_11(VAR_18->wk_key, VAR_16.ik_keydata, VAR_16.ik_keylen);
  FUNC_0(VAR_18->wk_macaddr,
      VAR_17 != ((void*)0) ? VAR_17->ni_macaddr : VAR_16.ik_macaddr);
  if (!FUNC_5(VAR_14, VAR_18))
   VAR_20 = VAR_3;
  else if ((VAR_16.ik_flags & VAR_8))
   FUNC_4(VAR_14, VAR_19);
 } else
  VAR_20 = VAR_5;
 FUNC_9(VAR_14);
 if (VAR_17 != ((void*)0))
  FUNC_7(VAR_17);
 return VAR_20;
}
