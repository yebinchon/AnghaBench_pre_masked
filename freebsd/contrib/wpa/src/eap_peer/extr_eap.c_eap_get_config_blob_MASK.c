
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_config_blob {int dummy; } ;
struct eap_sm {int eapol_ctx; TYPE_1__* eapol_cb; } ;
struct TYPE_2__ {struct wpa_config_blob const* (* get_config_blob ) (int ,char const*) ;} ;


 struct wpa_config_blob const* FUNC_0 (int ,char const*) ;

const struct wpa_config_blob * FUNC_1(struct eap_sm *VAR_0,
         const char *VAR_1)
{

 return VAR_0->eapol_cb->get_config_blob(VAR_0->eapol_ctx, VAR_1);



}
