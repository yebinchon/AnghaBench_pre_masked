
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct eap_gpsk_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int ,char*,int const*,int) ;
 int FUNC_2 (int ,char*,...) ;

__attribute__((used)) static const u8 * FUNC_3(struct eap_gpsk_data *VAR_1,
       const u8 *VAR_2, const u8 *VAR_3)
{
 u16 VAR_4;

 if (VAR_2 == ((void*)0))
  return ((void*)0);

 if (VAR_3 - VAR_2 < 2) {
  FUNC_2(VAR_0, "EAP-GPSK: Message too short for "
      "PD_Payload_2 length");
  return ((void*)0);
 }
 VAR_4 = FUNC_0(VAR_2);
 VAR_2 += 2;
 if (VAR_3 - VAR_2 < VAR_4) {
  FUNC_2(VAR_0, "EAP-GPSK: Message too short for "
      "%d-octet PD_Payload_2", VAR_4);
  return ((void*)0);
 }
 FUNC_1(VAR_0, "EAP-GPSK: PD_Payload_2", VAR_2, VAR_4);
 VAR_2 += VAR_4;

 return VAR_2;
}
