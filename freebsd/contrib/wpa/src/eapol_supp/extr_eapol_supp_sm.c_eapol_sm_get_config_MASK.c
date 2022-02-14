
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eapol_sm {struct eap_peer_config* config; } ;
struct eap_peer_config {int dummy; } ;



__attribute__((used)) static struct eap_peer_config * FUNC_0(void *VAR_0)
{
 struct eapol_sm *VAR_1 = VAR_0;
 return VAR_1 ? VAR_1->config : ((void*)0);
}
