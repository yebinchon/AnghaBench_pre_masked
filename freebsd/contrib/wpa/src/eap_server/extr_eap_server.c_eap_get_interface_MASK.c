
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_eapol_interface {int dummy; } ;
struct eap_sm {struct eap_eapol_interface eap_if; } ;



struct eap_eapol_interface * FUNC_0(struct eap_sm *VAR_0)
{
 return &VAR_0->eap_if;
}
