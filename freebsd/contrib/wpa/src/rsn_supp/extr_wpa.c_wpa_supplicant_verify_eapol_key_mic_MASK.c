
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int kck_len; int kck; } ;
typedef TYPE_2__ u8 ;
typedef int u16 ;
struct wpa_eapol_key {struct wpa_eapol_key* replay_counter; int kck_len; int kck; } ;
struct wpa_sm {int ptk_set; int renew_snonce; int rx_replay_counter_set; TYPE_2__* rx_replay_counter; TYPE_1__* ctx; int key_mgmt; TYPE_2__ ptk; struct wpa_eapol_key tptk; scalar_t__ tptk_set; int pmk_len; } ;
struct TYPE_8__ {int msg_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_2__*,struct wpa_eapol_key*,size_t) ;
 int FUNC_1 (TYPE_2__*,struct wpa_eapol_key*,int) ;
 int FUNC_2 (struct wpa_eapol_key*,int ,size_t) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,TYPE_2__ const*,size_t,TYPE_2__*) ;
 size_t FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,char*) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static int FUNC_7(struct wpa_sm *VAR_4,
            struct wpa_eapol_key *VAR_5,
            u16 VAR_6,
            const u8 *VAR_7, size_t VAR_8)
{
 u8 VAR_9[VAR_2];
 int VAR_10 = 0;
 size_t VAR_11 = FUNC_4(VAR_4->key_mgmt, VAR_4->pmk_len);

 FUNC_1(VAR_9, VAR_5 + 1, VAR_11);
 if (VAR_4->tptk_set) {
  FUNC_2(VAR_5 + 1, 0, VAR_11);
  if (FUNC_3(VAR_4->tptk.kck, VAR_4->tptk.kck_len,
          VAR_4->key_mgmt,
          VAR_6, VAR_7, VAR_8, (u8 *) (VAR_5 + 1)) < 0 ||
      FUNC_0(VAR_9, VAR_5 + 1, VAR_11) != 0) {
   FUNC_5(VAR_4->ctx->msg_ctx, VAR_1,
    "WPA: Invalid EAPOL-Key MIC "
    "when using TPTK - ignoring TPTK");





  } else {



   VAR_10 = 1;
   VAR_4->tptk_set = 0;
   VAR_4->ptk_set = 1;
   FUNC_1(&VAR_4->ptk, &VAR_4->tptk, sizeof(VAR_4->ptk));
   FUNC_2(&VAR_4->tptk, 0, sizeof(VAR_4->tptk));







   VAR_4->renew_snonce = 1;
  }
 }

 if (!VAR_10 && VAR_4->ptk_set) {
  FUNC_2(VAR_5 + 1, 0, VAR_11);
  if (FUNC_3(VAR_4->ptk.kck, VAR_4->ptk.kck_len,
          VAR_4->key_mgmt,
          VAR_6, VAR_7, VAR_8, (u8 *) (VAR_5 + 1)) < 0 ||
      FUNC_0(VAR_9, VAR_5 + 1, VAR_11) != 0) {
   FUNC_5(VAR_4->ctx->msg_ctx, VAR_1,
    "WPA: Invalid EAPOL-Key MIC - "
    "dropping packet");





   return -1;
  }



  VAR_10 = 1;
 }

 if (!VAR_10) {
  FUNC_5(VAR_4->ctx->msg_ctx, VAR_1,
   "WPA: Could not verify EAPOL-Key MIC - "
   "dropping packet");
  return -1;
 }

 FUNC_1(VAR_4->rx_replay_counter, VAR_5->replay_counter,
    VAR_3);
 VAR_4->rx_replay_counter_set = 1;
 return 0;
}
