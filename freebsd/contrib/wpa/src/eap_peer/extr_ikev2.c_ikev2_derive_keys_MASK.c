
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct TYPE_3__ {int encr; int prf; int integ; } ;
struct ikev2_responder_data {int i_nonce_len; int r_nonce_len; int keys; struct wpabuf* r_dh_private; struct wpabuf* i_dh_public; TYPE_2__* dh; int r_spi; int i_spi; int r_nonce; int i_nonce; TYPE_1__ proposal; } ;
struct ikev2_prf_alg {int hash_len; int id; } ;
struct ikev2_integ_alg {int dummy; } ;
struct ikev2_encr_alg {int dummy; } ;
struct TYPE_4__ {size_t prime_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct wpabuf* FUNC_0 (struct wpabuf*,struct wpabuf*,TYPE_2__*) ;
 int FUNC_1 (struct ikev2_prf_alg const*,struct ikev2_integ_alg const*,struct ikev2_encr_alg const*,int *,int *,size_t,int *) ;
 struct ikev2_encr_alg* FUNC_2 (int ) ;
 struct ikev2_integ_alg* FUNC_3 (int ) ;
 struct ikev2_prf_alg* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int *,int,int,int const**,size_t*,int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (size_t) ;
 int FUNC_8 (int *,int ,int) ;
 int * FUNC_9 (size_t) ;
 int FUNC_10 (int ,char*,int *,int ) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (struct wpabuf*) ;
 int * FUNC_13 (struct wpabuf*) ;
 size_t FUNC_14 (struct wpabuf*) ;

__attribute__((used)) static int FUNC_15(struct ikev2_responder_data *VAR_4)
{
 u8 *VAR_5, *VAR_6, *VAR_7, VAR_8[VAR_0];
 size_t VAR_9, VAR_10;
 struct wpabuf *VAR_11;
 const struct ikev2_integ_alg *VAR_12;
 const struct ikev2_prf_alg *VAR_13;
 const struct ikev2_encr_alg *VAR_14;
 int VAR_15;
 const u8 *VAR_16[2];
 size_t VAR_17[2];



 VAR_12 = FUNC_3(VAR_4->proposal.integ);
 VAR_13 = FUNC_4(VAR_4->proposal.prf);
 VAR_14 = FUNC_2(VAR_4->proposal.encr);
 if (VAR_12 == ((void*)0) || VAR_13 == ((void*)0) || VAR_14 == ((void*)0)) {
  FUNC_11(VAR_3, "IKEV2: Unsupported proposal");
  return -1;
 }

 VAR_11 = FUNC_0(VAR_4->i_dh_public, VAR_4->r_dh_private,
      VAR_4->dh);
 if (VAR_11 == ((void*)0))
  return -1;



 VAR_9 = VAR_4->i_nonce_len + VAR_4->r_nonce_len + 2 * VAR_1;
 VAR_5 = FUNC_7(VAR_9);
 if (VAR_5 == ((void*)0)) {
  FUNC_12(VAR_11);
  return -1;
 }

 VAR_6 = VAR_5;
 FUNC_8(VAR_6, VAR_4->i_nonce, VAR_4->i_nonce_len);
 VAR_6 += VAR_4->i_nonce_len;
 FUNC_8(VAR_6, VAR_4->r_nonce, VAR_4->r_nonce_len);
 VAR_6 += VAR_4->r_nonce_len;
 FUNC_8(VAR_6, VAR_4->i_spi, VAR_1);
 VAR_6 += VAR_1;
 FUNC_8(VAR_6, VAR_4->r_spi, VAR_1);



 VAR_10 = VAR_4->dh->prime_len - FUNC_14(VAR_11);
 VAR_7 = FUNC_9(VAR_10 ? VAR_10 : 1);
 if (VAR_7 == ((void*)0)) {
  FUNC_12(VAR_11);
  FUNC_6(VAR_5);
  return -1;
 }

 VAR_16[0] = VAR_7;
 VAR_17[0] = VAR_10;
 VAR_16[1] = FUNC_13(VAR_11);
 VAR_17[1] = FUNC_14(VAR_11);
 if (FUNC_5(VAR_13->id, VAR_5, VAR_4->i_nonce_len + VAR_4->r_nonce_len,
      2, VAR_16, VAR_17, VAR_8) < 0) {
  FUNC_12(VAR_11);
  FUNC_6(VAR_5);
  FUNC_6(VAR_7);
  return -1;
 }
 FUNC_6(VAR_7);
 FUNC_12(VAR_11);


 FUNC_12(VAR_4->i_dh_public);
 VAR_4->i_dh_public = ((void*)0);
 FUNC_12(VAR_4->r_dh_private);
 VAR_4->r_dh_private = ((void*)0);

 FUNC_10(VAR_2, "IKEV2: SKEYSEED",
   VAR_8, VAR_13->hash_len);

 VAR_15 = FUNC_1(VAR_13, VAR_12, VAR_14, VAR_8, VAR_5, VAR_9,
       &VAR_4->keys);
 FUNC_6(VAR_5);
 return VAR_15;
}
