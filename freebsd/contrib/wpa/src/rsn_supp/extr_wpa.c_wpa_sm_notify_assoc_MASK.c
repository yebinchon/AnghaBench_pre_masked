
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_sm {int renew_snonce; int ft_protocol; int * p2p_ip_addr; int igtk_wnm_sleep; int igtk; int gtk_wnm_sleep; int gtk; int tptk; scalar_t__ tptk_set; int ptk; scalar_t__ ptk_set; TYPE_1__* ctx; int bssid; scalar_t__ fils_completed; int eapol; int preauth_bssid; scalar_t__ rx_replay_counter_set; int * rx_replay_counter; } ;
struct TYPE_2__ {int msg_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int const*,int ) ;
 int FUNC_2 (int ,int const*,int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (struct wpa_sm*) ;
 int FUNC_5 (int ,int ,char*) ;
 scalar_t__ FUNC_6 (struct wpa_sm*) ;
 int FUNC_7 (struct wpa_sm*,int *) ;
 int FUNC_8 (struct wpa_sm*,int ,int) ;
 int FUNC_9 (struct wpa_sm*) ;

void FUNC_10(struct wpa_sm *VAR_4, const u8 *VAR_5)
{
 int VAR_6 = 1;

 if (VAR_4 == ((void*)0))
  return;

 FUNC_5(VAR_4->ctx->msg_ctx, VAR_2,
  "WPA: Association event - clear replay counter");
 FUNC_2(VAR_4->bssid, VAR_5, VAR_0);
 FUNC_3(VAR_4->rx_replay_counter, 0, VAR_3);
 VAR_4->rx_replay_counter_set = 0;
 VAR_4->renew_snonce = 1;
 if (FUNC_1(VAR_4->preauth_bssid, VAR_5, VAR_0) == 0)
  FUNC_4(VAR_4);
 if (VAR_6) {




  FUNC_5(VAR_4->ctx->msg_ctx, VAR_2, "WPA: Clear old PTK");
  VAR_4->ptk_set = 0;
  FUNC_3(&VAR_4->ptk, 0, sizeof(VAR_4->ptk));
  VAR_4->tptk_set = 0;
  FUNC_3(&VAR_4->tptk, 0, sizeof(VAR_4->tptk));
  FUNC_3(&VAR_4->gtk, 0, sizeof(VAR_4->gtk));
  FUNC_3(&VAR_4->gtk_wnm_sleep, 0, sizeof(VAR_4->gtk_wnm_sleep));




 }
}
