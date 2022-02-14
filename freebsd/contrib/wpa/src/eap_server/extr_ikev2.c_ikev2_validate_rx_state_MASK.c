
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ikev2_initiator_data {int state; } ;



 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static int FUNC_1(struct ikev2_initiator_data *VAR_4,
       u8 VAR_5, u32 VAR_6)
{
 switch (VAR_4->state) {
 case 128:


  if (VAR_5 != VAR_2) {
   FUNC_0(VAR_3, "IKEV2: Unexpected Exchange Type "
       "%u in SA_INIT state", VAR_5);
   return -1;
  }
  if (VAR_6 != 0) {
   FUNC_0(VAR_3, "IKEV2: Unexpected Message ID %u "
       "in SA_INIT state", VAR_6);
   return -1;
  }
  break;
 case 129:



  if (VAR_5 != VAR_1) {
   FUNC_0(VAR_3, "IKEV2: Unexpected Exchange Type "
       "%u in SA_AUTH state", VAR_5);
   return -1;
  }
  if (VAR_6 != 1) {
   FUNC_0(VAR_3, "IKEV2: Unexpected Message ID %u "
       "in SA_AUTH state", VAR_6);
   return -1;
  }
  break;
 case 131:
  if (VAR_5 != VAR_0) {
   FUNC_0(VAR_3, "IKEV2: Unexpected Exchange Type "
       "%u in CHILD_SA state", VAR_5);
   return -1;
  }
  if (VAR_6 != 2) {
   FUNC_0(VAR_3, "IKEV2: Unexpected Message ID %u "
       "in CHILD_SA state", VAR_6);
   return -1;
  }
  break;
 case 130:
  return -1;
 }

 return 0;
}
