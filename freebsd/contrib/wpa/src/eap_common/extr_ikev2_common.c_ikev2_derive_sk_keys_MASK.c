
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ikev2_prf_alg {int key_len; int hash_len; int id; } ;
struct ikev2_keys {int SK_d_len; int SK_integ_len; int SK_encr_len; int SK_prf_len; void* SK_pr; void* SK_pi; void* SK_er; void* SK_ei; void* SK_ar; void* SK_ai; void* SK_d; } ;
struct ikev2_integ_alg {int key_len; } ;
struct ikev2_encr_alg {int key_len; } ;


 int VAR_0 ;
 int FUNC_0 (struct ikev2_keys*) ;
 int FUNC_1 (struct ikev2_keys*) ;
 scalar_t__ FUNC_2 (int ,int const*,int ,int const*,size_t,int *,size_t) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (size_t) ;
 int FUNC_5 (void*,int *,size_t) ;
 int FUNC_6 (int ,char*,void*,size_t) ;

int FUNC_7(const struct ikev2_prf_alg *VAR_1,
    const struct ikev2_integ_alg *VAR_2,
    const struct ikev2_encr_alg *VAR_3,
    const u8 *VAR_4, const u8 *VAR_5, size_t VAR_6,
    struct ikev2_keys *VAR_7)
{
 u8 *VAR_8, *VAR_9;
 size_t VAR_10;





 FUNC_0(VAR_7);
 VAR_7->SK_d_len = VAR_1->key_len;
 VAR_7->SK_integ_len = VAR_2->key_len;
 VAR_7->SK_encr_len = VAR_3->key_len;
 VAR_7->SK_prf_len = VAR_1->key_len;

 VAR_10 = VAR_7->SK_d_len + 2 * VAR_7->SK_integ_len +
  2 * VAR_7->SK_encr_len + 2 * VAR_7->SK_prf_len;
 VAR_8 = FUNC_4(VAR_10);
 if (VAR_8 == ((void*)0))
  return -1;

 if (FUNC_2(VAR_1->id, VAR_4, VAR_1->hash_len,
      VAR_5, VAR_6, VAR_8, VAR_10)) {
  FUNC_3(VAR_8);
  return -1;
 }

 VAR_9 = VAR_8;

 VAR_7->SK_d = FUNC_4(VAR_7->SK_d_len);
 if (VAR_7->SK_d) {
  FUNC_5(VAR_7->SK_d, VAR_9, VAR_7->SK_d_len);
  FUNC_6(VAR_0, "IKEV2: SK_d",
    VAR_7->SK_d, VAR_7->SK_d_len);
 }
 VAR_9 += VAR_7->SK_d_len;

 VAR_7->SK_ai = FUNC_4(VAR_7->SK_integ_len);
 if (VAR_7->SK_ai) {
  FUNC_5(VAR_7->SK_ai, VAR_9, VAR_7->SK_integ_len);
  FUNC_6(VAR_0, "IKEV2: SK_ai",
    VAR_7->SK_ai, VAR_7->SK_integ_len);
 }
 VAR_9 += VAR_7->SK_integ_len;

 VAR_7->SK_ar = FUNC_4(VAR_7->SK_integ_len);
 if (VAR_7->SK_ar) {
  FUNC_5(VAR_7->SK_ar, VAR_9, VAR_7->SK_integ_len);
  FUNC_6(VAR_0, "IKEV2: SK_ar",
    VAR_7->SK_ar, VAR_7->SK_integ_len);
 }
 VAR_9 += VAR_7->SK_integ_len;

 VAR_7->SK_ei = FUNC_4(VAR_7->SK_encr_len);
 if (VAR_7->SK_ei) {
  FUNC_5(VAR_7->SK_ei, VAR_9, VAR_7->SK_encr_len);
  FUNC_6(VAR_0, "IKEV2: SK_ei",
    VAR_7->SK_ei, VAR_7->SK_encr_len);
 }
 VAR_9 += VAR_7->SK_encr_len;

 VAR_7->SK_er = FUNC_4(VAR_7->SK_encr_len);
 if (VAR_7->SK_er) {
  FUNC_5(VAR_7->SK_er, VAR_9, VAR_7->SK_encr_len);
  FUNC_6(VAR_0, "IKEV2: SK_er",
    VAR_7->SK_er, VAR_7->SK_encr_len);
 }
 VAR_9 += VAR_7->SK_encr_len;

 VAR_7->SK_pi = FUNC_4(VAR_7->SK_prf_len);
 if (VAR_7->SK_pi) {
  FUNC_5(VAR_7->SK_pi, VAR_9, VAR_7->SK_prf_len);
  FUNC_6(VAR_0, "IKEV2: SK_pi",
    VAR_7->SK_pi, VAR_7->SK_prf_len);
 }
 VAR_9 += VAR_7->SK_prf_len;

 VAR_7->SK_pr = FUNC_4(VAR_7->SK_prf_len);
 if (VAR_7->SK_pr) {
  FUNC_5(VAR_7->SK_pr, VAR_9, VAR_7->SK_prf_len);
  FUNC_6(VAR_0, "IKEV2: SK_pr",
    VAR_7->SK_pr, VAR_7->SK_prf_len);
 }

 FUNC_3(VAR_8);

 if (!FUNC_1(VAR_7)) {
  FUNC_0(VAR_7);
  return -1;
 }

 return 0;
}
