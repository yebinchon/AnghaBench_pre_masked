
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ikev2_payloads {int encr_next_payload; int encrypted_len; scalar_t__ encrypted; int nonce_len; int nonce; int ke_len; int ke; int sa_len; int sa; } ;
struct ikev2_initiator_data {int state; int r_spi; } ;
struct ikev2_hdr {int r_spi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct ikev2_initiator_data*) ;
 scalar_t__ FUNC_1 (struct ikev2_initiator_data*,int ,int ) ;
 scalar_t__ FUNC_2 (struct ikev2_initiator_data*,int ,int ) ;
 scalar_t__ FUNC_3 (struct ikev2_initiator_data*,struct ikev2_hdr const*,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_4 (struct ikev2_initiator_data*,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static int FUNC_7(struct ikev2_initiator_data *VAR_4,
     const struct ikev2_hdr *VAR_5,
     struct ikev2_payloads *VAR_6)
{
 if (FUNC_4(VAR_4, VAR_6->sa, VAR_6->sa_len) < 0 ||
     FUNC_1(VAR_4, VAR_6->ke, VAR_6->ke_len) < 0 ||
     FUNC_2(VAR_4, VAR_6->nonce, VAR_6->nonce_len) < 0)
  return -1;

 FUNC_5(VAR_4->r_spi, VAR_5->r_spi, VAR_0);

 if (FUNC_0(VAR_4) < 0)
  return -1;

 if (VAR_6->encrypted) {
  FUNC_6(VAR_1, "IKEV2: Encrypted payload in SA_INIT - "
      "try to get IDr from it");
  if (FUNC_3(VAR_4, VAR_5, VAR_6->encrypted,
            VAR_6->encrypted_len,
            VAR_6->encr_next_payload) < 0) {
   FUNC_6(VAR_2, "IKEV2: Failed to process "
       "encrypted payload");
   return -1;
  }
 }

 VAR_4->state = VAR_3;

 return 0;
}
