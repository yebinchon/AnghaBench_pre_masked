
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_session_conf {char* isc_initiator; char* isc_target_addr; scalar_t__ isc_discovery; scalar_t__* isc_target; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static bool
FUNC_1(const struct iscsi_session_conf *VAR_0)
{

 if (VAR_0->isc_initiator[0] == '\0') {
  FUNC_0("empty isc_initiator");
  return (0);
 }

 if (VAR_0->isc_target_addr[0] == '\0') {
  FUNC_0("empty isc_target_addr");
  return (0);
 }

 if (VAR_0->isc_discovery != 0 && VAR_0->isc_target[0] != 0) {
  FUNC_0("non-empty isc_target for discovery session");
  return (0);
 }

 if (VAR_0->isc_discovery == 0 && VAR_0->isc_target[0] == 0) {
  FUNC_0("empty isc_target for non-discovery session");
  return (0);
 }

 return (1);
}
