
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_sm {int dummy; } ;
struct eap_peap_data {int const peap_version; int cmk; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int*,int,int*) ;
 scalar_t__ FUNC_1 (int*,int const*,int) ;
 int FUNC_2 (int*,int const*,int) ;
 int FUNC_3 (int*,int ,int) ;
 int FUNC_4 (int ,char*,int*,int) ;
 int FUNC_5 (int ,char*,int ,int) ;
 int FUNC_6 (int ,char*,...) ;

__attribute__((used)) static int FUNC_7(struct eap_sm *VAR_3,
       struct eap_peap_data *VAR_4,
       const u8 *VAR_5,
       size_t VAR_6)
{
 u8 VAR_7[61], VAR_8[VAR_2];
 const u8 *VAR_9;

 if (VAR_6 != 4 + 56) {
  FUNC_6(VAR_1, "EAP-PEAP: Invalid cryptobinding TLV "
      "length %d", (int) VAR_6);
  return -1;
 }

 VAR_9 = VAR_5;
 VAR_9 += 4;
 if (VAR_9[1] != VAR_4->peap_version) {
  FUNC_6(VAR_1, "EAP-PEAP: Cryptobinding TLV Version "
      "mismatch (was %d; expected %d)",
      VAR_9[1], VAR_4->peap_version);
  return -1;
 }

 if (VAR_9[3] != 1) {
  FUNC_6(VAR_1, "EAP-PEAP: Unexpected Cryptobinding TLV "
      "SubType %d", VAR_9[3]);
  return -1;
 }
 VAR_9 += 4;
 VAR_9 += 32;


 FUNC_2(VAR_7, VAR_5, 60);
 FUNC_3(VAR_7 + 4 + 4 + 32, 0, 20);
 VAR_7[60] = VAR_0;
 FUNC_0(VAR_4->cmk, 20, VAR_7, sizeof(VAR_7), VAR_8);

 if (FUNC_1(VAR_8, VAR_9, VAR_2) != 0) {
  FUNC_6(VAR_1, "EAP-PEAP: Invalid Compound_MAC in "
      "cryptobinding TLV");
  FUNC_5(VAR_1, "EAP-PEAP: CMK", VAR_4->cmk, 20);
  FUNC_4(VAR_1, "EAP-PEAP: Cryptobinding seed data",
       VAR_7, 61);
  return -1;
 }

 FUNC_6(VAR_1, "EAP-PEAP: Valid cryptobinding TLV received");

 return 0;
}
