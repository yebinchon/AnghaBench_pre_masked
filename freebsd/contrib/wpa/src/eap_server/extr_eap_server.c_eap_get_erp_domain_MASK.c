
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eap_sm {int eapol_ctx; TYPE_1__* eapol_cb; } ;
struct TYPE_2__ {char const* (* get_erp_domain ) (int ) ;} ;


 char const* FUNC_0 (int ) ;

__attribute__((used)) static const char * FUNC_1(struct eap_sm *VAR_0)
{
 if (VAR_0->eapol_cb->get_erp_domain)
  return VAR_0->eapol_cb->get_erp_domain(VAR_0->eapol_ctx);
 return ((void*)0);
}
