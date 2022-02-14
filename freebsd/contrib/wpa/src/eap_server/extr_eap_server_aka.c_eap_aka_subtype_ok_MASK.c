
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct eap_aka_data {int state; } ;
typedef int Boolean ;



 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;

 int VAR_8 ;


 int VAR_9 ;
 int FUNC_0 (int ,char*,scalar_t__) ;

__attribute__((used)) static Boolean FUNC_1(struct eap_aka_data *VAR_10, u8 VAR_11)
{
 if (VAR_11 == VAR_2 ||
     VAR_11 == VAR_0)
  return VAR_7;

 switch (VAR_10->state) {
 case 130:
  if (VAR_11 != VAR_3) {
   FUNC_0(VAR_8, "EAP-AKA: Unexpected response "
       "subtype %d", VAR_11);
   return VAR_9;
  }
  break;
 case 131:
  if (VAR_11 != VAR_1 &&
      VAR_11 != VAR_6) {
   FUNC_0(VAR_8, "EAP-AKA: Unexpected response "
       "subtype %d", VAR_11);
   return VAR_9;
  }
  break;
 case 128:
  if (VAR_11 != VAR_5) {
   FUNC_0(VAR_8, "EAP-AKA: Unexpected response "
       "subtype %d", VAR_11);
   return VAR_9;
  }
  break;
 case 129:
  if (VAR_11 != VAR_4) {
   FUNC_0(VAR_8, "EAP-AKA: Unexpected response "
       "subtype %d", VAR_11);
   return VAR_9;
  }
  break;
 default:
  FUNC_0(VAR_8, "EAP-AKA: Unexpected state (%d) for "
      "processing a response", VAR_10->state);
  return VAR_9;
 }

 return VAR_7;
}
