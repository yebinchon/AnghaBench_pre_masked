
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
struct wpabuf {int dummy; } ;
struct ikev2_keys {int SK_integ_len; int const* SK_ar; int const* SK_ai; } ;
struct ikev2_integ_alg {size_t hash_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ikev2_integ_alg* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int const*,int ,int ,scalar_t__,int const*) ;
 scalar_t__ FUNC_2 (int const*,int const*,size_t) ;
 int FUNC_3 (int ,char*,int const*,size_t) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct wpabuf const*) ;
 scalar_t__ FUNC_6 (struct wpabuf const*) ;

int FUNC_7(int VAR_3, struct ikev2_keys *VAR_4,
      int VAR_5, const struct wpabuf *VAR_6,
      const u8 *VAR_7, const u8 *VAR_8)
{
 const struct ikev2_integ_alg *VAR_9;
 size_t VAR_10;
 u8 VAR_11[VAR_0];
 const u8 *VAR_12 = VAR_5 ? VAR_4->SK_ai : VAR_4->SK_ar;

 VAR_9 = FUNC_0(VAR_3);
 if (VAR_9 == ((void*)0)) {
  FUNC_4(VAR_1, "EAP-IKEV2: Unknown INTEG "
      "transform / cannot validate ICV");
  return -1;
 }
 VAR_10 = VAR_9->hash_len;

 if (VAR_8 - VAR_7 < (int) VAR_10) {
  FUNC_4(VAR_1, "EAP-IKEV2: Not enough room in the "
      "message for Integrity Checksum Data");
  return -1;
 }

 if (VAR_12 == ((void*)0)) {
  FUNC_4(VAR_1, "EAP-IKEV2: No SK_a for ICV validation");
  return -1;
 }

 if (FUNC_1(VAR_3, VAR_12, VAR_4->SK_integ_len,
        FUNC_5(VAR_6),
        FUNC_6(VAR_6) - VAR_10, VAR_11) < 0) {
  FUNC_4(VAR_2, "EAP-IKEV2: Could not calculate ICV");
  return -1;
 }

 if (FUNC_2(VAR_11, VAR_8 - VAR_10, VAR_10) != 0) {
  FUNC_4(VAR_2, "EAP-IKEV2: Invalid ICV");
  FUNC_3(VAR_1, "EAP-IKEV2: Calculated ICV",
       VAR_11, VAR_10);
  FUNC_3(VAR_1, "EAP-IKEV2: Received ICV",
       VAR_8 - VAR_10, VAR_10);
  return -1;
 }

 FUNC_4(VAR_1, "EAP-IKEV2: Valid Integrity Checksum Data in "
     "the received message");

 return VAR_10;
}
