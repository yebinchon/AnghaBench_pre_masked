
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_config_blob {int dummy; } ;
struct eapol_sm {TYPE_1__* ctx; } ;
struct TYPE_2__ {int ctx; struct wpa_config_blob const* (* get_config_blob ) (int ,char const*) ;} ;


 struct wpa_config_blob const* FUNC_0 (int ,char const*) ;

__attribute__((used)) static const struct wpa_config_blob *
FUNC_1(void *VAR_0, const char *VAR_1)
{

 struct eapol_sm *VAR_2 = VAR_0;
 if (VAR_2 && VAR_2->ctx && VAR_2->ctx->get_config_blob)
  return VAR_2->ctx->get_config_blob(VAR_2->ctx->ctx, VAR_1);
 else
  return ((void*)0);



}
