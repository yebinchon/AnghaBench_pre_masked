
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct ikev2_payload_hdr {int payload_length; scalar_t__ flags; int next_payload; } ;
struct ikev2_keys {int SK_integ_len; int SK_encr_len; int * SK_ar; int * SK_ai; int * SK_er; int * SK_ei; } ;
struct ikev2_integ_alg {size_t hash_len; } ;
struct ikev2_encr_alg {size_t block_size; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,size_t) ;
 scalar_t__ FUNC_1 (int ,int const*,int ,int *,int ,int ,size_t) ;
 struct ikev2_encr_alg* FUNC_2 (int) ;
 struct ikev2_integ_alg* FUNC_3 (int) ;
 int FUNC_4 (int,int const*,int ,int ,size_t,int *) ;
 int FUNC_5 (struct wpabuf*) ;
 scalar_t__ FUNC_6 (int *,size_t) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (struct wpabuf*) ;
 size_t FUNC_9 (struct wpabuf*) ;
 int FUNC_10 (struct wpabuf*) ;
 void* FUNC_11 (struct wpabuf*,size_t) ;
 int FUNC_12 (struct wpabuf*,struct wpabuf*) ;
 int FUNC_13 (struct wpabuf*,size_t) ;

int FUNC_14(int VAR_2, int VAR_3, struct ikev2_keys *VAR_4,
     int VAR_5, struct wpabuf *VAR_6,
     struct wpabuf *VAR_7, u8 VAR_8)
{
 struct ikev2_payload_hdr *VAR_9;
 size_t VAR_10;
 size_t VAR_11, VAR_12;
 u8 *VAR_13, *VAR_14;
 const struct ikev2_integ_alg *VAR_15;
 const struct ikev2_encr_alg *VAR_16;
 const u8 *VAR_17 = VAR_5 ? VAR_4->SK_ei : VAR_4->SK_er;
 const u8 *VAR_18 = VAR_5 ? VAR_4->SK_ai : VAR_4->SK_ar;

 FUNC_7(VAR_0, "IKEV2: Adding Encrypted payload");



 VAR_16 = FUNC_2(VAR_2);
 if (VAR_16 == ((void*)0)) {
  FUNC_7(VAR_1, "IKEV2: Unsupported encryption type");
  return -1;
 }
 VAR_11 = VAR_16->block_size;

 VAR_15 = FUNC_3(VAR_3);
 if (VAR_15 == ((void*)0)) {
  FUNC_7(VAR_1, "IKEV2: Unsupported intergrity type");
  return -1;
 }

 if (VAR_17 == ((void*)0)) {
  FUNC_7(VAR_1, "IKEV2: No SK_e available");
  return -1;
 }

 if (VAR_18 == ((void*)0)) {
  FUNC_7(VAR_1, "IKEV2: No SK_a available");
  return -1;
 }

 VAR_9 = FUNC_11(VAR_6, sizeof(*VAR_9));
 VAR_9->next_payload = VAR_8;
 VAR_9->flags = 0;

 VAR_14 = FUNC_11(VAR_6, VAR_11);
 if (FUNC_6(VAR_14, VAR_11)) {
  FUNC_7(VAR_1, "IKEV2: Could not generate IV");
  return -1;
 }

 VAR_12 = VAR_11 - (FUNC_9(VAR_7) + 1) % VAR_11;
 if (VAR_12 == VAR_11)
  VAR_12 = 0;
 FUNC_11(VAR_7, VAR_12);
 FUNC_13(VAR_7, VAR_12);

 if (FUNC_1(VAR_16->id, VAR_17, VAR_4->SK_encr_len, VAR_14,
          FUNC_8(VAR_7), FUNC_10(VAR_7),
          FUNC_9(VAR_7)) < 0)
  return -1;

 FUNC_12(VAR_6, VAR_7);


 VAR_13 = FUNC_11(VAR_6, VAR_15->hash_len);
 VAR_10 = (u8 *) FUNC_11(VAR_6, 0) - (u8 *) VAR_9;
 FUNC_0(VAR_9->payload_length, VAR_10);

 FUNC_5(VAR_6);

 return FUNC_4(VAR_3, VAR_18, VAR_4->SK_integ_len,
    FUNC_8(VAR_6),
    FUNC_9(VAR_6) - VAR_15->hash_len, VAR_13);

 return 0;
}
