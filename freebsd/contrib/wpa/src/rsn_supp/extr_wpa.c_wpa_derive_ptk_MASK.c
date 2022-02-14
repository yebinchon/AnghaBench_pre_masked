
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_sm {scalar_t__ key_mgmt; int pairwise_cipher; int snonce; int bssid; int own_addr; int pmk_len; int pmk; scalar_t__ dpp_z; } ;
struct wpa_ptk {int dummy; } ;
struct wpa_eapol_key {int key_nonce; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct wpa_sm*,unsigned char const*,struct wpa_eapol_key const*,struct wpa_ptk*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,char*,int ,int ,int ,int ,struct wpa_ptk*,scalar_t__,int ,int const*,size_t) ;
 int * FUNC_3 (scalar_t__) ;
 size_t FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct wpa_sm *VAR_1, const unsigned char *VAR_2,
     const struct wpa_eapol_key *VAR_3, struct wpa_ptk *VAR_4)
{
 const u8 *VAR_5 = ((void*)0);
 size_t VAR_6 = 0;
 return FUNC_2(VAR_1->pmk, VAR_1->pmk_len, "Pairwise key expansion",
         VAR_1->own_addr, VAR_1->bssid, VAR_1->snonce,
         VAR_3->key_nonce, VAR_4, VAR_1->key_mgmt,
         VAR_1->pairwise_cipher, VAR_5, VAR_6);
}
