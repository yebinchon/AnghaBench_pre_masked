
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ikev2_responder_data {size_t IDi_len; int IDi_type; int * IDi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int const*,size_t) ;
 int FUNC_2 (int ,char*,int const*,size_t) ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static int FUNC_4(struct ikev2_responder_data *VAR_2,
        const u8 *VAR_3, size_t VAR_4)
{
 u8 VAR_5;

 if (VAR_3 == ((void*)0)) {
  FUNC_3(VAR_1, "IKEV2: No IDi received");
  return -1;
 }

 if (VAR_4 < 4) {
  FUNC_3(VAR_1, "IKEV2: Too short IDi payload");
  return -1;
 }

 VAR_5 = VAR_3[0];
 VAR_3 += 4;
 VAR_4 -= 4;

 FUNC_3(VAR_0, "IKEV2: IDi ID Type %d", VAR_5);
 FUNC_2(VAR_0, "IKEV2: IDi", VAR_3, VAR_4);
 FUNC_0(VAR_2->IDi);
 VAR_2->IDi = FUNC_1(VAR_3, VAR_4);
 if (VAR_2->IDi == ((void*)0))
  return -1;
 VAR_2->IDi_len = VAR_4;
 VAR_2->IDi_type = VAR_5;

 return 0;
}
