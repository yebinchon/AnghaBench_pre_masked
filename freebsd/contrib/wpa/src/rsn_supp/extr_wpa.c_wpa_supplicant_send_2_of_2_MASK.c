
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wpa_sm {scalar_t__ proto; int bssid; int ptk; TYPE_1__* ctx; int pmk_len; int key_mgmt; } ;
struct wpa_eapol_key {int * replay_counter; int * key_length; int * key_info; int type; } ;
struct wpa_channel_info {int dummy; } ;
struct TYPE_2__ {int msg_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int *,size_t) ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (struct wpa_channel_info*,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (struct wpa_sm*,int *,int,int ,int ,int *,size_t,int *) ;
 size_t FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,char*) ;
 int * FUNC_8 (struct wpa_sm*,int ,int *,size_t,size_t*,void*) ;
 scalar_t__ FUNC_9 (struct wpa_sm*,struct wpa_channel_info*) ;
 scalar_t__ FUNC_10 (struct wpa_sm*) ;

__attribute__((used)) static int FUNC_11(struct wpa_sm *VAR_14,
          const struct wpa_eapol_key *VAR_15,
          int VAR_16, u16 VAR_17)
{
 size_t VAR_18, VAR_19, VAR_20;
 struct wpa_eapol_key *VAR_21;
 u8 *VAR_22, *VAR_23;
 size_t VAR_24 = 0;






 VAR_18 = FUNC_6(VAR_14->key_mgmt, VAR_14->pmk_len);
 VAR_19 = sizeof(*VAR_21) + VAR_18 + 2;
 VAR_22 = FUNC_8(VAR_14, VAR_3, ((void*)0),
      VAR_19 + VAR_24, &VAR_20, (void *) &VAR_21);
 if (VAR_22 == ((void*)0))
  return -1;

 VAR_21->type = (VAR_14->proto == VAR_12 ||
         VAR_14->proto == VAR_11) ?
  VAR_0 : VAR_1;
 VAR_17 &= VAR_8;
 VAR_17 |= VAR_16 | VAR_10;
 if (VAR_18)
  VAR_17 |= VAR_9;
 else
  VAR_17 |= VAR_7;
 FUNC_0(VAR_21->key_info, VAR_17);
 if (VAR_14->proto == VAR_12 || VAR_14->proto == VAR_11)
  FUNC_0(VAR_21->key_length, 0);
 else
  FUNC_3(VAR_21->key_length, VAR_15->key_length, 2);
 FUNC_3(VAR_21->replay_counter, VAR_15->replay_counter,
    VAR_13);

 VAR_23 = (u8 *) (VAR_21 + 1);
 FUNC_0(VAR_23 + VAR_18, VAR_24);
 FUNC_4(VAR_14->ctx->msg_ctx, VAR_4, "WPA: Sending EAPOL-Key 2/2");
 return FUNC_5(VAR_14, &VAR_14->ptk, VAR_16, VAR_14->bssid, VAR_2,
      VAR_22, VAR_20, VAR_23);
}
