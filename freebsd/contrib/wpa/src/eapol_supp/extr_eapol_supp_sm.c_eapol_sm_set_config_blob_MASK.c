
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_config_blob {int dummy; } ;
struct eapol_sm {TYPE_1__* ctx; } ;
struct TYPE_2__ {int ctx; int (* set_config_blob ) (int ,struct wpa_config_blob*) ;} ;


 int FUNC_0 (int ,struct wpa_config_blob*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, struct wpa_config_blob *VAR_1)
{

 struct eapol_sm *VAR_2 = VAR_0;
 if (VAR_2 && VAR_2->ctx && VAR_2->ctx->set_config_blob)
  VAR_2->ctx->set_config_blob(VAR_2->ctx->ctx, VAR_1);

}
