
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_sm {scalar_t__ pmk_r1_len; int * pmk_r1; scalar_t__ pmk_r0_len; int * pmk_r0; scalar_t__ xxkey_len; int * xxkey; int igtk_wnm_sleep; int igtk; int gtk_wnm_sleep; int gtk; int tptk; int ptk; int * pmk; scalar_t__ pmk_len; scalar_t__ tptk_set; scalar_t__ ptk_set; TYPE_1__* ctx; } ;
struct TYPE_2__ {int msg_ctx; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int ,int ,char*) ;

void FUNC_2(struct wpa_sm *VAR_1)
{
 FUNC_1(VAR_1->ctx->msg_ctx, VAR_0, "WPA: Clear old PMK and PTK");
 VAR_1->ptk_set = 0;
 VAR_1->tptk_set = 0;
 VAR_1->pmk_len = 0;
 FUNC_0(VAR_1->pmk, 0, sizeof(VAR_1->pmk));
 FUNC_0(&VAR_1->ptk, 0, sizeof(VAR_1->ptk));
 FUNC_0(&VAR_1->tptk, 0, sizeof(VAR_1->tptk));
 FUNC_0(&VAR_1->gtk, 0, sizeof(VAR_1->gtk));
 FUNC_0(&VAR_1->gtk_wnm_sleep, 0, sizeof(VAR_1->gtk_wnm_sleep));
}
