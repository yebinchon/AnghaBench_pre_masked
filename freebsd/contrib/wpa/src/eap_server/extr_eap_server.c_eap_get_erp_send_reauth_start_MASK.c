
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eap_sm {int eapol_ctx; TYPE_1__* eapol_cb; } ;
struct TYPE_2__ {int (* get_erp_send_reauth_start ) (int ) ;} ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct eap_sm *VAR_0)
{
 if (VAR_0->eapol_cb->get_erp_send_reauth_start)
  return VAR_0->eapol_cb->get_erp_send_reauth_start(VAR_0->eapol_ctx);
 return 0;
}
