
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_gpsk_data {int const* rand_server; int const* rand_peer; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int const*,int const*,int) ;
 int FUNC_1 (int ,char*,int const*,int) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static const u8 * FUNC_3(struct eap_gpsk_data *VAR_2,
      const u8 *VAR_3, const u8 *VAR_4)
{
 if (VAR_4 - VAR_3 < VAR_0) {
  FUNC_2(VAR_1, "EAP-GPSK: Message too short for "
      "RAND_Peer");
  return ((void*)0);
 }
 if (FUNC_0(VAR_3, VAR_2->rand_peer, VAR_0) != 0) {
  FUNC_2(VAR_1, "EAP-GPSK: RAND_Peer in GPSK-2 and "
      "GPSK-3 did not match");
  FUNC_1(VAR_1, "EAP-GPSK: RAND_Peer in GPSK-2",
       VAR_2->rand_peer, VAR_0);
  FUNC_1(VAR_1, "EAP-GPSK: RAND_Peer in GPSK-3",
       VAR_3, VAR_0);
  return ((void*)0);
 }
 VAR_3 += VAR_0;

 if (VAR_4 - VAR_3 < VAR_0) {
  FUNC_2(VAR_1, "EAP-GPSK: Message too short for "
      "RAND_Server");
  return ((void*)0);
 }
 if (FUNC_0(VAR_3, VAR_2->rand_server, VAR_0) != 0) {
  FUNC_2(VAR_1, "EAP-GPSK: RAND_Server in GPSK-1 and "
      "GPSK-3 did not match");
  FUNC_1(VAR_1, "EAP-GPSK: RAND_Server in GPSK-1",
       VAR_2->rand_server, VAR_0);
  FUNC_1(VAR_1, "EAP-GPSK: RAND_Server in GPSK-3",
       VAR_3, VAR_0);
  return ((void*)0);
 }
 VAR_3 += VAR_0;

 return VAR_3;
}
