
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct ikev2_keys {size_t* SK_ei; size_t* SK_er; size_t* SK_ai; size_t* SK_ar; int SK_encr_len; int SK_integ_len; } ;
struct ikev2_integ_alg {size_t hash_len; } ;
struct ikev2_hdr {int dummy; } ;
struct ikev2_encr_alg {size_t block_size; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,size_t const*,int ,size_t const*,size_t const*,size_t*,size_t) ;
 struct ikev2_encr_alg* FUNC_1 (int) ;
 struct ikev2_integ_alg* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,size_t const*,int ,size_t const*,int,size_t*) ;
 int FUNC_4 (size_t*) ;
 size_t* FUNC_5 (size_t) ;
 scalar_t__ FUNC_6 (size_t const*,size_t*,size_t) ;
 int FUNC_7 (int ,char*) ;

u8 * FUNC_8(int VAR_2, int VAR_3,
      struct ikev2_keys *VAR_4, int VAR_5,
      const struct ikev2_hdr *VAR_6,
      const u8 *VAR_7, size_t VAR_8,
      size_t *VAR_9)
{
 size_t VAR_10;
 const u8 *VAR_11, *VAR_12, *VAR_13, *VAR_14;
 u8 VAR_15[VAR_0], *VAR_16;
 size_t VAR_17, VAR_18;
 const struct ikev2_integ_alg *VAR_19;
 const struct ikev2_encr_alg *VAR_20;
 const u8 *VAR_21 = VAR_5 ? VAR_4->SK_ei : VAR_4->SK_er;
 const u8 *VAR_22 = VAR_5 ? VAR_4->SK_ai : VAR_4->SK_ar;

 if (VAR_7 == ((void*)0)) {
  FUNC_7(VAR_1, "IKEV2: No Encrypted payload in SA_AUTH");
  return ((void*)0);
 }

 VAR_20 = FUNC_1(VAR_2);
 if (VAR_20 == ((void*)0)) {
  FUNC_7(VAR_1, "IKEV2: Unsupported encryption type");
  return ((void*)0);
 }
 VAR_10 = VAR_20->block_size;

 VAR_19 = FUNC_2(VAR_3);
 if (VAR_19 == ((void*)0)) {
  FUNC_7(VAR_1, "IKEV2: Unsupported intergrity type");
  return ((void*)0);
 }

 if (VAR_8 < VAR_10 + 1 + VAR_19->hash_len) {
  FUNC_7(VAR_1, "IKEV2: No room for IV or Integrity "
     "Checksum");
  return ((void*)0);
 }

 VAR_13 = VAR_7;
 VAR_11 = VAR_13 + VAR_10;
 VAR_12 = VAR_7 + VAR_8;
 VAR_14 = VAR_12 - VAR_19->hash_len;

 if (VAR_22 == ((void*)0)) {
  FUNC_7(VAR_1, "IKEV2: No SK_a available");
  return ((void*)0);
 }
 if (FUNC_3(VAR_3, VAR_22, VAR_4->SK_integ_len,
        (const u8 *) VAR_6,
        VAR_14 - (const u8 *) VAR_6, VAR_15) < 0) {
  FUNC_7(VAR_1, "IKEV2: Failed to calculate integrity "
      "hash");
  return ((void*)0);
 }
 if (FUNC_6(VAR_14, VAR_15, VAR_19->hash_len) != 0) {
  FUNC_7(VAR_1, "IKEV2: Incorrect Integrity Checksum "
      "Data");
  return ((void*)0);
 }

 if (VAR_21 == ((void*)0)) {
  FUNC_7(VAR_1, "IKEV2: No SK_e available");
  return ((void*)0);
 }

 VAR_17 = VAR_14 - VAR_11;
 VAR_16 = FUNC_5(VAR_17);
 if (VAR_16 == ((void*)0))
  return ((void*)0);

 if (FUNC_0(VAR_20->id, VAR_21, VAR_4->SK_encr_len, VAR_13, VAR_11,
          VAR_16, VAR_17) < 0) {
  FUNC_4(VAR_16);
  return ((void*)0);
 }

 VAR_18 = VAR_16[VAR_17 - 1];
 if (VAR_17 < VAR_18 + 1) {
  FUNC_7(VAR_1, "IKEV2: Invalid padding in encrypted "
      "payload");
  FUNC_4(VAR_16);
  return ((void*)0);
 }

 VAR_17 -= VAR_18 + 1;

 *VAR_9 = VAR_17;
 return VAR_16;
}
