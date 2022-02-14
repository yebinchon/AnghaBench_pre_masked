
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wps; int workaround; int fast_reauth; int required_keys; int accept_802_1x_keys; } ;
struct eapol_sm {int use_eap_proxy; scalar_t__ eap; TYPE_1__ conf; int eap_proxy; struct eap_peer_config* config; } ;
struct eapol_config {int external_sim; int eap_disabled; int workaround; int fast_reauth; int wps; int required_keys; int accept_802_1x_keys; } ;
struct eap_peer_config {int dummy; } ;


 scalar_t__ FUNC_0 (int ,struct eap_peer_config*) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__,int ) ;

void FUNC_5(struct eapol_sm *VAR_0,
       struct eap_peer_config *VAR_1,
       const struct eapol_config *VAR_2)
{
 if (VAR_0 == ((void*)0))
  return;

 VAR_0->config = VAR_1;




 if (VAR_2 == ((void*)0))
  return;

 VAR_0->conf.accept_802_1x_keys = VAR_2->accept_802_1x_keys;
 VAR_0->conf.required_keys = VAR_2->required_keys;
 VAR_0->conf.fast_reauth = VAR_2->fast_reauth;
 VAR_0->conf.workaround = VAR_2->workaround;
 VAR_0->conf.wps = VAR_2->wps;






 if (VAR_0->eap) {
  FUNC_2(VAR_0->eap, VAR_2->fast_reauth);
  FUNC_4(VAR_0->eap, VAR_2->workaround);
  FUNC_3(VAR_0->eap, VAR_2->eap_disabled);
  FUNC_1(VAR_0->eap, VAR_2->external_sim);
 }
}
