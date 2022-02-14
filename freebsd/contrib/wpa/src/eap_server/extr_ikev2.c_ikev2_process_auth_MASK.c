
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ikev2_initiator_data {int peer_auth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct ikev2_initiator_data*,int ,int const*,size_t) ;
 int FUNC_1 (struct ikev2_initiator_data*,int ,int const*,size_t) ;
 int FUNC_2 (int ,char*,int const*,size_t) ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static int FUNC_4(struct ikev2_initiator_data *VAR_3,
         const u8 *VAR_4, size_t VAR_5)
{
 u8 VAR_6;

 if (VAR_4 == ((void*)0)) {
  FUNC_3(VAR_1, "IKEV2: No Authentication Payload");
  return -1;
 }

 if (VAR_5 < 4) {
  FUNC_3(VAR_1, "IKEV2: Too short Authentication "
      "Payload");
  return -1;
 }

 VAR_6 = VAR_4[0];
 VAR_4 += 4;
 VAR_5 -= 4;

 FUNC_3(VAR_0, "IKEV2: Auth Method %d", VAR_6);
 FUNC_2(VAR_2, "IKEV2: Authentication Data", VAR_4, VAR_5);

 switch (VAR_3->peer_auth) {
 case 129:
  return FUNC_0(VAR_3, VAR_6, VAR_4,
            VAR_5);
 case 128:
  return FUNC_1(VAR_3, VAR_6, VAR_4,
       VAR_5);
 }

 return -1;
}
