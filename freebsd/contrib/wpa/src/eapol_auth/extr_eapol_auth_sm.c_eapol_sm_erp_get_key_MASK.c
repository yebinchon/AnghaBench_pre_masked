
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct eapol_state_machine {TYPE_3__* eapol; } ;
struct eap_server_erp_key {int dummy; } ;
struct TYPE_5__ {int ctx; } ;
struct TYPE_4__ {struct eap_server_erp_key* (* erp_get_key ) (int ,char const*) ;} ;
struct TYPE_6__ {TYPE_2__ conf; TYPE_1__ cb; } ;


 struct eap_server_erp_key* FUNC_0 (int ,char const*) ;

__attribute__((used)) static struct eap_server_erp_key * FUNC_1(void *VAR_0,
       const char *VAR_1)
{
 struct eapol_state_machine *VAR_2 = VAR_0;
 return VAR_2->eapol->cb.erp_get_key(VAR_2->eapol->conf.ctx, VAR_1);
}
