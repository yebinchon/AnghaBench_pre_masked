
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {int dummy; } ;
struct eap_peer_config {int fragment_size; } ;


 struct eap_peer_config* FUNC_0 (struct eap_sm*) ;

int FUNC_1(struct eap_sm *VAR_0)
{
 struct eap_peer_config *VAR_1 = FUNC_0(VAR_0);
 if (VAR_1 == ((void*)0))
  return -1;
 return VAR_1->fragment_size;
}
