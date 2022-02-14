
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wpa_sm {scalar_t__ proto; TYPE_1__* ctx; int pmk_len; int key_mgmt; } ;
struct wpa_ptk {int dummy; } ;
struct wpa_eapol_key {int * replay_counter; int * key_length; int * key_info; int type; } ;
struct TYPE_2__ {int msg_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int *,int) ;
 int VAR_11 ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (struct wpa_sm*,struct wpa_ptk*,int,unsigned char const*,int ,int *,size_t,int *) ;
 size_t FUNC_4 (int ,int ) ;
 int * FUNC_5 (struct wpa_sm*,int ,int *,size_t,size_t*,void*) ;

int FUNC_6(struct wpa_sm *VAR_12, const unsigned char *VAR_13,
          const struct wpa_eapol_key *VAR_14,
          u16 VAR_15, u16 VAR_16,
          struct wpa_ptk *VAR_17)
{
 size_t VAR_18, VAR_19, VAR_20;
 struct wpa_eapol_key *VAR_21;
 u8 *VAR_22, *VAR_23;

 VAR_18 = FUNC_4(VAR_12->key_mgmt, VAR_12->pmk_len);
 VAR_19 = sizeof(*VAR_21) + VAR_18 + 2;
 VAR_22 = FUNC_5(VAR_12, VAR_3, ((void*)0),
      VAR_19, &VAR_20, (void *) &VAR_21);
 if (VAR_22 == ((void*)0))
  return -1;

 VAR_21->type = (VAR_12->proto == VAR_10 ||
         VAR_12->proto == VAR_9) ?
  VAR_0 : VAR_1;
 VAR_16 &= VAR_8;
 VAR_16 |= VAR_15 | VAR_6;
 if (VAR_18)
  VAR_16 |= VAR_7;
 else
  VAR_16 |= VAR_5;
 FUNC_0(VAR_21->key_info, VAR_16);
 if (VAR_12->proto == VAR_10 || VAR_12->proto == VAR_9)
  FUNC_0(VAR_21->key_length, 0);
 else
  FUNC_1(VAR_21->key_length, VAR_14->key_length, 2);
 FUNC_1(VAR_21->replay_counter, VAR_14->replay_counter,
    VAR_11);

 VAR_23 = (u8 *) (VAR_21 + 1);
 FUNC_0(VAR_23 + VAR_18, 0);

 FUNC_2(VAR_12->ctx->msg_ctx, VAR_4, "WPA: Sending EAPOL-Key 4/4");
 return FUNC_3(VAR_12, VAR_17, VAR_15, VAR_13, VAR_2, VAR_22, VAR_20,
      VAR_23);
}
