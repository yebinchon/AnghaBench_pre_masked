
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct eap_sim_data {int state; } ;
typedef int Boolean ;



 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int VAR_7 ;
 int FUNC_0 (int ,char*,scalar_t__) ;

__attribute__((used)) static Boolean FUNC_1(struct eap_sim_data *VAR_8,
       u8 VAR_9)
{
 if (VAR_9 == VAR_1)
  return VAR_5;

 switch (VAR_8->state) {
 case 128:
  if (VAR_9 != VAR_4) {
   FUNC_0(VAR_6, "EAP-SIM: Unexpected response "
       "subtype %d", VAR_9);
   return VAR_7;
  }
  break;
 case 131:
  if (VAR_9 != VAR_0) {
   FUNC_0(VAR_6, "EAP-SIM: Unexpected response "
       "subtype %d", VAR_9);
   return VAR_7;
  }
  break;
 case 129:
  if (VAR_9 != VAR_3) {
   FUNC_0(VAR_6, "EAP-SIM: Unexpected response "
       "subtype %d", VAR_9);
   return VAR_7;
  }
  break;
 case 130:
  if (VAR_9 != VAR_2) {
   FUNC_0(VAR_6, "EAP-SIM: Unexpected response "
       "subtype %d", VAR_9);
   return VAR_7;
  }
  break;
 default:
  FUNC_0(VAR_6, "EAP-SIM: Unexpected state (%d) for "
      "processing a response", VAR_8->state);
  return VAR_7;
 }

 return VAR_5;
}
