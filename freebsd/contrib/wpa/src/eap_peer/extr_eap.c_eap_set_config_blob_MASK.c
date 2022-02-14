
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_config_blob {int dummy; } ;
struct eap_sm {int eapol_ctx; TYPE_1__* eapol_cb; } ;
struct TYPE_2__ {int (* set_config_blob ) (int ,struct wpa_config_blob*) ;} ;


 int FUNC_0 (int ,struct wpa_config_blob*) ;

void FUNC_1(struct eap_sm *VAR_0, struct wpa_config_blob *VAR_1)
{

 VAR_0->eapol_cb->set_config_blob(VAR_0->eapol_ctx, VAR_1);

}
