
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eapol_sm {TYPE_1__* ctx; } ;
typedef enum wpa_ctrl_req_type { ____Placeholder_wpa_ctrl_req_type } wpa_ctrl_req_type ;
struct TYPE_2__ {int ctx; int (* eap_param_needed ) (int ,int,char const*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int,char const*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(void *VAR_1, enum wpa_ctrl_req_type VAR_2,
          const char *VAR_3)
{
 struct eapol_sm *VAR_4 = VAR_1;
 FUNC_1(VAR_0, "EAPOL: EAP parameter needed");
 if (VAR_4->ctx->eap_param_needed)
  VAR_4->ctx->eap_param_needed(VAR_4->ctx->ctx, VAR_2, VAR_3);
}
