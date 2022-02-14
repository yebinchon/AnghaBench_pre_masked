
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_sm {int assoc_wpa_ie_len; int * assoc_wpa_ie; TYPE_1__* ctx; } ;
struct wpa_ie_data {int dummy; } ;
struct TYPE_2__ {int msg_ctx; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 scalar_t__ FUNC_1 (int *,int ,struct wpa_ie_data*) ;

int FUNC_2(struct wpa_sm *VAR_1, struct wpa_ie_data *VAR_2)
{
 if (VAR_1 == ((void*)0))
  return -1;

 if (VAR_1->assoc_wpa_ie == ((void*)0)) {
  FUNC_0(VAR_1->ctx->msg_ctx, VAR_0,
   "WPA: No WPA/RSN IE available from association info");
  return -1;
 }
 if (FUNC_1(VAR_1->assoc_wpa_ie, VAR_1->assoc_wpa_ie_len, VAR_2))
  return -2;
 return 0;
}
