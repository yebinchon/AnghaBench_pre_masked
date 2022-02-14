
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct TYPE_2__ {int prf; } ;
struct ikev2_responder_data {int * r_sign_msg; int key_pad_len; int key_pad; int i_nonce_len; int i_nonce; int shared_secret_len; int shared_secret; int keys; int IDr_len; int IDr; TYPE_1__ proposal; } ;
struct ikev2_prf_alg {int hash_len; } ;
struct ikev2_payload_hdr {int payload_length; scalar_t__ flags; int next_payload; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,size_t) ;
 scalar_t__ FUNC_1 (int ,int *,int ,int ,int ,int *,int ,int ,int ,int ,int ,int ,int ,struct ikev2_payload_hdr*) ;
 struct ikev2_prf_alg* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 struct ikev2_payload_hdr* FUNC_5 (struct wpabuf*,int) ;
 int FUNC_6 (struct wpabuf*,int ) ;

__attribute__((used)) static int FUNC_7(struct ikev2_responder_data *VAR_4,
       struct wpabuf *VAR_5, u8 VAR_6)
{
 struct ikev2_payload_hdr *VAR_7;
 size_t VAR_8;
 const struct ikev2_prf_alg *VAR_9;

 FUNC_3(VAR_2, "IKEV2: Adding AUTH payload");

 VAR_9 = FUNC_2(VAR_4->proposal.prf);
 if (VAR_9 == ((void*)0))
  return -1;


 VAR_7 = FUNC_5(VAR_5, sizeof(*VAR_7));
 VAR_7->next_payload = VAR_6;
 VAR_7->flags = 0;
 FUNC_6(VAR_5, VAR_0);
 FUNC_5(VAR_5, 3);


 if (FUNC_1(VAR_4->proposal.prf, VAR_4->r_sign_msg,
       VAR_4->IDr, VAR_4->IDr_len, VAR_1,
       &VAR_4->keys, 0, VAR_4->shared_secret,
       VAR_4->shared_secret_len,
       VAR_4->i_nonce, VAR_4->i_nonce_len,
       VAR_4->key_pad, VAR_4->key_pad_len,
       FUNC_5(VAR_5, VAR_9->hash_len)) < 0) {
  FUNC_3(VAR_3, "IKEV2: Could not derive AUTH data");
  return -1;
 }
 FUNC_4(VAR_4->r_sign_msg);
 VAR_4->r_sign_msg = ((void*)0);

 VAR_8 = (u8 *) FUNC_5(VAR_5, 0) - (u8 *) VAR_7;
 FUNC_0(VAR_7->payload_length, VAR_8);
 return 0;
}
