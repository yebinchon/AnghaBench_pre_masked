
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {int prf; } ;
struct ikev2_responder_data {int state; int error_type; TYPE_1__ proposal; int * i_sign_msg; int key_pad_len; int key_pad; int r_nonce_len; int r_nonce; int shared_secret_len; int shared_secret; int keys; int IDi_type; int IDi_len; int IDi; } ;
struct ikev2_prf_alg {size_t hash_len; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int *,int ,int ,int ,int *,int,int ,int ,int ,int ,int ,int ,scalar_t__*) ;
 struct ikev2_prf_alg* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__ const*,scalar_t__*,size_t) ;
 int FUNC_3 (int ,char*,scalar_t__ const*,size_t) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct ikev2_responder_data *VAR_6,
         u8 VAR_7, const u8 *VAR_8,
         size_t VAR_9)
{
 u8 VAR_10[VAR_2];
 const struct ikev2_prf_alg *VAR_11;

 if (VAR_7 != VAR_1) {
  FUNC_4(VAR_4, "IKEV2: Unsupported authentication "
      "method %d", VAR_7);
  return -1;
 }


 if (FUNC_0(VAR_6->proposal.prf, VAR_6->i_sign_msg,
       VAR_6->IDi, VAR_6->IDi_len, VAR_6->IDi_type,
       &VAR_6->keys, 1, VAR_6->shared_secret,
       VAR_6->shared_secret_len,
       VAR_6->r_nonce, VAR_6->r_nonce_len,
       VAR_6->key_pad, VAR_6->key_pad_len,
       VAR_10) < 0) {
  FUNC_4(VAR_4, "IKEV2: Could not derive AUTH data");
  return -1;
 }

 FUNC_5(VAR_6->i_sign_msg);
 VAR_6->i_sign_msg = ((void*)0);

 VAR_11 = FUNC_1(VAR_6->proposal.prf);
 if (VAR_11 == ((void*)0))
  return -1;

 if (VAR_9 != VAR_11->hash_len ||
     FUNC_2(VAR_8, VAR_10, VAR_9) != 0) {
  FUNC_4(VAR_4, "IKEV2: Invalid Authentication Data");
  FUNC_3(VAR_3, "IKEV2: Received Authentication Data",
       VAR_8, VAR_9);
  FUNC_3(VAR_3, "IKEV2: Expected Authentication Data",
       VAR_10, VAR_11->hash_len);
  VAR_6->error_type = VAR_0;
  VAR_6->state = VAR_5;
  return -1;
 }

 FUNC_4(VAR_3, "IKEV2: Server authenticated successfully "
     "using shared keys");

 return 0;
}
