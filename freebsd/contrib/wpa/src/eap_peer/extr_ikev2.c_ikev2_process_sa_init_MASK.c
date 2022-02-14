
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ikev2_responder_data {int i_spi; } ;
struct ikev2_payloads {int nonce_len; int nonce; int ke_len; int ke; int sa_len; int sa; } ;
struct ikev2_hdr {int i_spi; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ikev2_responder_data*,int ,int ) ;
 scalar_t__ FUNC_1 (struct ikev2_responder_data*,int ,int ) ;
 scalar_t__ FUNC_2 (struct ikev2_responder_data*,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct ikev2_responder_data *VAR_1,
     const struct ikev2_hdr *VAR_2,
     struct ikev2_payloads *VAR_3)
{
 if (FUNC_2(VAR_1, VAR_3->sa, VAR_3->sa_len) < 0 ||
     FUNC_0(VAR_1, VAR_3->ke, VAR_3->ke_len) < 0 ||
     FUNC_1(VAR_1, VAR_3->nonce, VAR_3->nonce_len) < 0)
  return -1;

 FUNC_3(VAR_1->i_spi, VAR_2->i_spi, VAR_0);

 return 0;
}
