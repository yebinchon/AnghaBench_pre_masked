
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_sm {size_t ap_wpa_ie_len; int * ap_wpa_ie; TYPE_1__* ctx; } ;
struct TYPE_2__ {int msg_ctx; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int const*,size_t) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (int ,char*,int const*,size_t) ;

int FUNC_4(struct wpa_sm *VAR_1, const u8 *VAR_2, size_t VAR_3)
{
 if (VAR_1 == ((void*)0))
  return -1;

 FUNC_0(VAR_1->ap_wpa_ie);
 if (VAR_2 == ((void*)0) || VAR_3 == 0) {
  FUNC_2(VAR_1->ctx->msg_ctx, VAR_0,
   "WPA: clearing AP WPA IE");
  VAR_1->ap_wpa_ie = ((void*)0);
  VAR_1->ap_wpa_ie_len = 0;
 } else {
  FUNC_3(VAR_0, "WPA: set AP WPA IE", VAR_2, VAR_3);
  VAR_1->ap_wpa_ie = FUNC_1(VAR_2, VAR_3);
  if (VAR_1->ap_wpa_ie == ((void*)0))
   return -1;

  VAR_1->ap_wpa_ie_len = VAR_3;
 }

 return 0;
}
