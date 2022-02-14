
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ikev2_prf_alg {size_t hash_len; } ;
struct TYPE_2__ {int prf; } ;
struct ikev2_initiator_data {TYPE_1__ proposal; int * r_sign_msg; int key_pad_len; int key_pad; int i_nonce_len; int i_nonce; int shared_secret_len; int shared_secret; int keys; int IDr_type; int IDr_len; int IDr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int *,int ,int ,int ,int *,int ,int ,int ,int ,int ,int ,int ,scalar_t__*) ;
 struct ikev2_prf_alg* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__ const*,scalar_t__*,size_t) ;
 int FUNC_3 (int ,char*,scalar_t__ const*,size_t) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct ikev2_initiator_data *VAR_4,
         u8 VAR_5, const u8 *VAR_6,
         size_t VAR_7)
{
 u8 VAR_8[VAR_1];
 const struct ikev2_prf_alg *VAR_9;

 if (VAR_5 != VAR_0) {
  FUNC_4(VAR_3, "IKEV2: Unsupported authentication "
      "method %d", VAR_5);
  return -1;
 }


 if (FUNC_0(VAR_4->proposal.prf, VAR_4->r_sign_msg,
       VAR_4->IDr, VAR_4->IDr_len, VAR_4->IDr_type,
       &VAR_4->keys, 0, VAR_4->shared_secret,
       VAR_4->shared_secret_len,
       VAR_4->i_nonce, VAR_4->i_nonce_len,
       VAR_4->key_pad, VAR_4->key_pad_len,
       VAR_8) < 0) {
  FUNC_4(VAR_3, "IKEV2: Could not derive AUTH data");
  return -1;
 }

 FUNC_5(VAR_4->r_sign_msg);
 VAR_4->r_sign_msg = ((void*)0);

 VAR_9 = FUNC_1(VAR_4->proposal.prf);
 if (VAR_9 == ((void*)0))
  return -1;

 if (VAR_7 != VAR_9->hash_len ||
     FUNC_2(VAR_6, VAR_8, VAR_7) != 0) {
  FUNC_4(VAR_3, "IKEV2: Invalid Authentication Data");
  FUNC_3(VAR_2, "IKEV2: Received Authentication Data",
       VAR_6, VAR_7);
  FUNC_3(VAR_2, "IKEV2: Expected Authentication Data",
       VAR_8, VAR_9->hash_len);
  return -1;
 }

 FUNC_4(VAR_2, "IKEV2: Peer authenticated successfully "
     "using shared keys");

 return 0;
}
