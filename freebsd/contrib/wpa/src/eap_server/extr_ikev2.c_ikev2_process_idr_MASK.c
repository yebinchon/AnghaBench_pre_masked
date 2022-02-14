
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ikev2_initiator_data {scalar_t__ const* IDr; scalar_t__ IDr_type; size_t IDr_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__ const*) ;
 scalar_t__ FUNC_1 (scalar_t__ const*,scalar_t__ const*,size_t) ;
 scalar_t__ const* FUNC_2 (scalar_t__ const*,size_t) ;
 int FUNC_3 (int ,char*,scalar_t__ const*,size_t) ;
 int FUNC_4 (int ,char*,...) ;

__attribute__((used)) static int FUNC_5(struct ikev2_initiator_data *VAR_2,
        const u8 *VAR_3, size_t VAR_4)
{
 u8 VAR_5;

 if (VAR_3 == ((void*)0)) {
  FUNC_4(VAR_1, "IKEV2: No IDr received");
  return -1;
 }

 if (VAR_4 < 4) {
  FUNC_4(VAR_1, "IKEV2: Too short IDr payload");
  return -1;
 }

 VAR_5 = VAR_3[0];
 VAR_3 += 4;
 VAR_4 -= 4;

 FUNC_4(VAR_0, "IKEV2: IDr ID Type %d", VAR_5);
 FUNC_3(VAR_0, "IKEV2: IDr", VAR_3, VAR_4);
 if (VAR_2->IDr) {
  if (VAR_5 != VAR_2->IDr_type || VAR_4 != VAR_2->IDr_len ||
      FUNC_1(VAR_3, VAR_2->IDr, VAR_4) != 0) {
   FUNC_4(VAR_1, "IKEV2: IDr differs from the one "
       "received earlier");
   FUNC_4(VAR_0, "IKEV2: Previous IDr ID Type %d",
       VAR_5);
   FUNC_3(VAR_0, "Previous IKEV2: IDr",
       VAR_2->IDr, VAR_2->IDr_len);
   return -1;
  }
  FUNC_0(VAR_2->IDr);
 }
 VAR_2->IDr = FUNC_2(VAR_3, VAR_4);
 if (VAR_2->IDr == ((void*)0))
  return -1;
 VAR_2->IDr_len = VAR_4;
 VAR_2->IDr_type = VAR_5;

 return 0;
}
