
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {int dummy; } ;
struct eap_peer_config {scalar_t__ phase1; } ;


 struct eap_peer_config* FUNC_0 (struct eap_sm*) ;
 scalar_t__ FUNC_1 (scalar_t__,char*) ;

__attribute__((used)) static int FUNC_2(struct eap_sm *VAR_0)
{
 struct eap_peer_config *VAR_1 = FUNC_0(VAR_0);

 return VAR_1 && VAR_1->phase1 &&
  FUNC_1(VAR_1->phase1, "allow_canned_success=1");
}
