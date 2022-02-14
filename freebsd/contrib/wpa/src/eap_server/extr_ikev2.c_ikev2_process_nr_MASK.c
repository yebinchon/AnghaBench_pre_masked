
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ikev2_initiator_data {size_t r_nonce_len; int r_nonce; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int const*,size_t) ;
 int FUNC_1 (int ,char*,int ,size_t) ;
 int FUNC_2 (int ,char*,...) ;

__attribute__((used)) static int FUNC_3(struct ikev2_initiator_data *VAR_4,
       const u8 *VAR_5, size_t VAR_6)
{
 if (VAR_5 == ((void*)0)) {
  FUNC_2(VAR_2, "IKEV2: Nr not received");
  return -1;
 }

 if (VAR_6 < VAR_1 || VAR_6 > VAR_0) {
  FUNC_2(VAR_2, "IKEV2: Invalid Nr length %ld",
      (long) VAR_6);
  return -1;
 }

 VAR_4->r_nonce_len = VAR_6;
 FUNC_0(VAR_4->r_nonce, VAR_5, VAR_6);
 FUNC_1(VAR_3, "IKEV2: Nr",
      VAR_4->r_nonce, VAR_4->r_nonce_len);

 return 0;
}
