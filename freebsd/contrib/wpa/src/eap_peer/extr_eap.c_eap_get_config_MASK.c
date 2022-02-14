
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eap_sm {int eapol_ctx; TYPE_1__* eapol_cb; } ;
struct eap_peer_config {int dummy; } ;
struct TYPE_2__ {struct eap_peer_config* (* get_config ) (int ) ;} ;


 struct eap_peer_config* FUNC_0 (int ) ;

struct eap_peer_config * FUNC_1(struct eap_sm *VAR_0)
{
 return VAR_0->eapol_cb->get_config(VAR_0->eapol_ctx);
}
