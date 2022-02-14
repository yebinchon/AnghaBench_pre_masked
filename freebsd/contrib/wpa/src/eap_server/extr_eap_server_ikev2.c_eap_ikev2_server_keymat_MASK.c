
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int prf; } ;
struct TYPE_4__ {int r_nonce_len; int r_nonce; int i_nonce_len; int i_nonce; int keys; TYPE_1__ proposal; } ;
struct eap_ikev2_data {int keymat_ok; int keymat; TYPE_2__ ikev2; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct eap_ikev2_data *VAR_1)
{
 if (FUNC_0(
      VAR_1->ikev2.proposal.prf, &VAR_1->ikev2.keys,
      VAR_1->ikev2.i_nonce, VAR_1->ikev2.i_nonce_len,
      VAR_1->ikev2.r_nonce, VAR_1->ikev2.r_nonce_len,
      VAR_1->keymat) < 0) {
  FUNC_1(VAR_0, "EAP-IKEV2: Failed to derive "
      "key material");
  return -1;
 }
 VAR_1->keymat_ok = 1;
 return 0;
}
