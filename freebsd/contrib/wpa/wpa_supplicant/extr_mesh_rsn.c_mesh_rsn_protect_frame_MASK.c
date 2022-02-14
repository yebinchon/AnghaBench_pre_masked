
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct wpabuf {int dummy; } ;
struct sta_info {scalar_t__ const* addr; int aek; int peer_nonce; int my_nonce; } ;
struct mesh_rsn {scalar_t__ igtk_len; int igtk; int igtk_key_id; TYPE_1__* wpa_s; int mgtk_key_id; scalar_t__ mgtk_len; int mgtk; } ;
struct ieee80211_ampe_ie {scalar_t__* local_nonce; scalar_t__* peer_nonce; int selected_pairwise_suite; } ;
struct TYPE_2__ {scalar_t__ const* own_addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ const VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (scalar_t__*,int ) ;
 int FUNC_2 (scalar_t__*,int) ;
 scalar_t__ FUNC_3 (int ,int,scalar_t__*,int,int,scalar_t__ const**,size_t const*,scalar_t__*) ;
 int FUNC_4 (scalar_t__*) ;
 int FUNC_5 (scalar_t__*,int ,scalar_t__) ;
 scalar_t__* FUNC_6 (int) ;
 int FUNC_7 (TYPE_1__*,int *,int ,scalar_t__*) ;
 int FUNC_8 (int ,char*,scalar_t__*,int) ;
 int FUNC_9 (int ,char*) ;
 scalar_t__* FUNC_10 (struct wpabuf*) ;
 int FUNC_11 (struct wpabuf*) ;
 scalar_t__* FUNC_12 (struct wpabuf*,scalar_t__) ;
 int FUNC_13 (struct wpabuf*,scalar_t__) ;
 scalar_t__ FUNC_14 (struct wpabuf*) ;

int FUNC_15(struct mesh_rsn *VAR_12, struct sta_info *VAR_13,
      const u8 *VAR_14, struct wpabuf *VAR_15)
{
 struct ieee80211_ampe_ie *VAR_16;
 u8 const *VAR_17 = FUNC_10(VAR_15) + FUNC_11(VAR_15);
 u8 *VAR_18, *VAR_19, *VAR_20;
 const u8 *VAR_21[] = { VAR_12->wpa_s->own_addr, VAR_13->addr, VAR_14 };
 const size_t VAR_22[] = { VAR_3, VAR_3, VAR_17 - VAR_14 };
 int VAR_23 = 0;
 size_t VAR_24;

 VAR_24 = sizeof(*VAR_16);
 if (VAR_14[1] == VAR_6)
  VAR_24 += VAR_12->mgtk_len + VAR_10 + 4;





 if (2 + VAR_0 + 2 + VAR_24 > FUNC_14(VAR_15)) {
  FUNC_9(VAR_5, "protect frame: buffer too small");
  return -VAR_1;
 }

 VAR_18 = FUNC_6(2 + VAR_24);
 if (!VAR_18) {
  FUNC_9(VAR_5, "protect frame: out of memory");
  return -VAR_2;
 }


 VAR_18[0] = VAR_8;
 VAR_18[1] = VAR_24;
 VAR_16 = (struct ieee80211_ampe_ie *) (VAR_18 + 2);

 FUNC_0(VAR_16->selected_pairwise_suite,
    VAR_7);
 FUNC_5(VAR_16->local_nonce, VAR_13->my_nonce, VAR_11);
 FUNC_5(VAR_16->peer_nonce, VAR_13->peer_nonce, VAR_11);

 VAR_19 = (u8 *) (VAR_16 + 1);
 if (VAR_14[1] != VAR_6)
  goto skip_keys;
 FUNC_5(VAR_19, VAR_12->mgtk, VAR_12->mgtk_len);
 VAR_19 += VAR_12->mgtk_len;
 FUNC_7(VAR_12->wpa_s, ((void*)0), VAR_12->mgtk_key_id, VAR_19);
 VAR_19 += VAR_10;

 FUNC_2(VAR_19, 0xffffffff);
 VAR_19 += 4;
skip_keys:
 FUNC_8(VAR_4, "mesh: Plaintext AMPE element",
   VAR_18, 2 + VAR_24);


 FUNC_13(VAR_15, VAR_9);
 FUNC_13(VAR_15, VAR_0);



 VAR_20 = FUNC_12(VAR_15, 2 + VAR_24 + VAR_0);

 if (FUNC_3(VAR_13->aek, sizeof(VAR_13->aek), VAR_18, 2 + VAR_24, 3,
       VAR_21, VAR_22, VAR_20)) {
  FUNC_9(VAR_5, "protect frame: failed to encrypt");
  VAR_23 = -VAR_2;
 }

 FUNC_4(VAR_18);

 return VAR_23;
}
