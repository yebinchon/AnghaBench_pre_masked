
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ikev2_payloads {int auth_len; int auth; int cert_len; int cert; int idr_len; int idr; } ;
struct ikev2_initiator_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ikev2_payloads*,int ,int *,int *) ;
 scalar_t__ FUNC_1 (struct ikev2_initiator_data*,int ,int ) ;
 scalar_t__ FUNC_2 (struct ikev2_initiator_data*,int ,int ) ;
 scalar_t__ FUNC_3 (struct ikev2_initiator_data*,int ,int ) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct ikev2_initiator_data *VAR_2,
        u8 VAR_3,
        u8 *VAR_4, size_t VAR_5)
{
 struct ikev2_payloads VAR_6;

 FUNC_4(VAR_0, "IKEV2: Processing decrypted payloads");

 if (FUNC_0(&VAR_6, VAR_3, VAR_4, VAR_4 +
     VAR_5) < 0) {
  FUNC_4(VAR_1, "IKEV2: Failed to parse decrypted "
      "payloads");
  return -1;
 }

 if (FUNC_3(VAR_2, VAR_6.idr, VAR_6.idr_len) < 0 ||
     FUNC_2(VAR_2, VAR_6.cert, VAR_6.cert_len) < 0 ||
     FUNC_1(VAR_2, VAR_6.auth, VAR_6.auth_len) < 0)
  return -1;

 return 0;
}
