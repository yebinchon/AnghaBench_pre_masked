
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int const u8 ;
typedef size_t u16 ;
struct wpa_sm {size_t assoc_resp_ies_len; scalar_t__ proto; TYPE_1__* ctx; int pmk_len; int key_mgmt; int const* assoc_resp_ies; int pmk_r1_name; } ;
struct wpa_ptk {int dummy; } ;
struct wpa_eapol_key {int const* key_nonce; int const* replay_counter; int const* key_length; int const* key_info; int type; } ;
struct TYPE_2__ {int msg_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int const*,size_t) ;
 size_t VAR_13 ;
 int FUNC_1 (int const*) ;
 int const* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int const*,int const*,size_t) ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (struct wpa_sm*,struct wpa_ptk*,int,unsigned char const*,int ,int const*,size_t,int const*) ;
 int FUNC_6 (int ,char*,int const*,size_t) ;
 int FUNC_7 (int const*,size_t*,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 size_t FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ,char*) ;
 int const* FUNC_11 (struct wpa_sm*,int ,int *,size_t,size_t*,void*) ;

int FUNC_12(struct wpa_sm *VAR_14, const unsigned char *VAR_15,
          const struct wpa_eapol_key *VAR_16,
          int VAR_17, const u8 *VAR_18,
          const u8 *VAR_19, size_t VAR_20,
          struct wpa_ptk *VAR_21)
{
 size_t VAR_22, VAR_23, VAR_24;
 struct wpa_eapol_key *VAR_25;
 u8 *VAR_26, *VAR_27;
 u8 *VAR_28 = ((void*)0);
 u16 VAR_29;

 if (VAR_19 == ((void*)0)) {
  FUNC_10(VAR_14->ctx->msg_ctx, VAR_5, "WPA: No wpa_ie set - "
   "cannot generate msg 2/4");
  return -1;
 }
 FUNC_6(VAR_4, "WPA: WPA IE for msg 2/4", VAR_19, VAR_20);

 VAR_22 = FUNC_9(VAR_14->key_mgmt, VAR_14->pmk_len);
 VAR_23 = sizeof(*VAR_25) + VAR_22 + 2;
 VAR_26 = FUNC_11(VAR_14, VAR_3,
      ((void*)0), VAR_23 + VAR_20,
      &VAR_24, (void *) &VAR_25);
 if (VAR_26 == ((void*)0)) {
  FUNC_1(VAR_28);
  return -1;
 }

 VAR_25->type = (VAR_14->proto == VAR_12 ||
         VAR_14->proto == VAR_11) ?
  VAR_0 : VAR_1;
 VAR_29 = VAR_17 | VAR_8;
 if (VAR_22)
  VAR_29 |= VAR_9;
 else
  VAR_29 |= VAR_7;
 FUNC_0(VAR_25->key_info, VAR_29);
 if (VAR_14->proto == VAR_12 || VAR_14->proto == VAR_11)
  FUNC_0(VAR_25->key_length, 0);
 else
  FUNC_3(VAR_25->key_length, VAR_16->key_length, 2);
 FUNC_3(VAR_25->replay_counter, VAR_16->replay_counter,
    VAR_13);
 FUNC_6(VAR_4, "WPA: Replay Counter", VAR_25->replay_counter,
      VAR_13);

 VAR_27 = (u8 *) (VAR_25 + 1);
 FUNC_0(VAR_27 + VAR_22, VAR_20);
 FUNC_3(VAR_27 + VAR_22 + 2, VAR_19, VAR_20);
 FUNC_1(VAR_28);

 FUNC_3(VAR_25->key_nonce, VAR_18, VAR_10);

 FUNC_4(VAR_14->ctx->msg_ctx, VAR_4, "WPA: Sending EAPOL-Key 2/4");
 return FUNC_5(VAR_14, VAR_21, VAR_17, VAR_15, VAR_2, VAR_26, VAR_24,
      VAR_27);
}
