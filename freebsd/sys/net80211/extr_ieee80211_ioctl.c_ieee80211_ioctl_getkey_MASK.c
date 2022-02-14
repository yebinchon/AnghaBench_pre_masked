
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct ieee80211vap {scalar_t__ iv_def_txkey; TYPE_1__* iv_bss; struct ieee80211_key* iv_nw_keys; struct ieee80211com* iv_ic; } ;
struct ieee80211req_key {size_t ik_keyix; scalar_t__ ik_type; int ik_flags; scalar_t__ ik_keydata; scalar_t__ ik_keytsc; scalar_t__ ik_keyrsc; scalar_t__ ik_keylen; int ik_macaddr; } ;
struct ieee80211req {int i_len; int i_data; } ;
struct ieee80211com {int ic_sta; } ;
struct ieee80211_key {int wk_flags; scalar_t__ wk_keyix; scalar_t__ wk_key; scalar_t__ wk_keylen; scalar_t__ wk_keytsc; scalar_t__* wk_keyrsc; struct ieee80211_cipher* wk_cipher; } ;
struct ieee80211_node {struct ieee80211_key ni_ucastkey; } ;
struct ieee80211_cipher {scalar_t__ ic_cipher; } ;
typedef int ik ;
struct TYPE_2__ {int ni_macaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,struct ieee80211req_key*,int) ;
 int FUNC_2 (struct ieee80211req_key*,int ,int) ;
 int VAR_12 ;
 struct ieee80211_node* FUNC_3 (int *,struct ieee80211vap*,int ) ;
 int FUNC_4 (struct ieee80211_node*) ;
 int FUNC_5 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_6 (scalar_t__,int ,int) ;
 scalar_t__ FUNC_7 (int ,int ) ;

__attribute__((used)) static int
FUNC_8(struct ieee80211vap *VAR_13, struct ieee80211req *VAR_14)
{
 struct ieee80211com *VAR_15 = VAR_13->iv_ic;
 struct ieee80211_node *VAR_16;
 struct ieee80211req_key VAR_17;
 struct ieee80211_key *VAR_18;
 const struct ieee80211_cipher *VAR_19;
 u_int VAR_20;
 int VAR_21;

 if (VAR_14->i_len != sizeof(VAR_17))
  return VAR_0;
 VAR_21 = FUNC_1(VAR_14->i_data, &VAR_17, sizeof(VAR_17));
 if (VAR_21)
  return VAR_21;
 VAR_20 = VAR_17.ik_keyix;
 if (VAR_20 == VAR_4) {
  VAR_16 = FUNC_3(&VAR_15->ic_sta, VAR_13, VAR_17.ik_macaddr);
  if (VAR_16 == ((void*)0))
   return VAR_1;
  VAR_18 = &VAR_16->ni_ucastkey;
 } else {
  if (VAR_20 >= VAR_10)
   return VAR_0;
  VAR_18 = &VAR_13->iv_nw_keys[VAR_20];
  FUNC_0(&VAR_17.ik_macaddr, VAR_13->iv_bss->ni_macaddr);
  VAR_16 = ((void*)0);
 }
 VAR_19 = VAR_18->wk_cipher;
 VAR_17.ik_type = VAR_19->ic_cipher;
 VAR_17.ik_keylen = VAR_18->wk_keylen;
 VAR_17.ik_flags = VAR_18->wk_flags & (VAR_7 | VAR_6);
 if (VAR_18->wk_keyix == VAR_13->iv_def_txkey)
  VAR_17.ik_flags |= VAR_5;
 if (FUNC_7(VAR_12, VAR_11) == 0) {

  VAR_17.ik_keyrsc = VAR_18->wk_keyrsc[VAR_9];
  VAR_17.ik_keytsc = VAR_18->wk_keytsc;
  FUNC_5(VAR_17.ik_keydata, VAR_18->wk_key, VAR_18->wk_keylen);
  if (VAR_19->ic_cipher == VAR_2) {
   FUNC_5(VAR_17.ik_keydata+VAR_18->wk_keylen,
    VAR_18->wk_key + VAR_3,
    VAR_8);
   VAR_17.ik_keylen += VAR_8;
  }
 } else {
  VAR_17.ik_keyrsc = 0;
  VAR_17.ik_keytsc = 0;
  FUNC_6(VAR_17.ik_keydata, 0, sizeof(VAR_17.ik_keydata));
 }
 if (VAR_16 != ((void*)0))
  FUNC_4(VAR_16);
 return FUNC_2(&VAR_17, VAR_14->i_data, sizeof(VAR_17));
}
