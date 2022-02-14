
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ikev2_initiator_data {scalar_t__ peer_auth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,int const*,size_t) ;
 int FUNC_1 (int ,char*,...) ;

__attribute__((used)) static int FUNC_2(struct ikev2_initiator_data *VAR_4,
         const u8 *VAR_5, size_t VAR_6)
{
 u8 VAR_7;

 if (VAR_5 == ((void*)0)) {
  if (VAR_4->peer_auth == VAR_3) {
   FUNC_1(VAR_1, "IKEV2: No Certificate received");
   return -1;
  }
  return 0;
 }

 if (VAR_6 < 1) {
  FUNC_1(VAR_1, "IKEV2: No Cert Encoding field");
  return -1;
 }

 VAR_7 = VAR_5[0];
 VAR_5++;
 VAR_6--;

 FUNC_1(VAR_0, "IKEV2: Cert Encoding %d", VAR_7);
 FUNC_0(VAR_2, "IKEV2: Certificate Data", VAR_5, VAR_6);



 return 0;
}
