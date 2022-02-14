
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct regulatory_request {int initiator; int alpha2; int intersect; int wiphy_idx; } ;
typedef enum reg_request_treatment { ____Placeholder_reg_request_treatment } reg_request_treatment ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 struct regulatory_request* FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct regulatory_request*) ;
 int FUNC_4 (struct regulatory_request*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 struct wiphy* FUNC_7 (int ) ;

__attribute__((used)) static enum reg_request_treatment
FUNC_8(struct wiphy *VAR_5,
     struct regulatory_request *VAR_6)
{
 struct wiphy *VAR_7 = ((void*)0);
 struct regulatory_request *VAR_8 = FUNC_1();


 if (!VAR_8)
  return VAR_4;

 switch (VAR_6->initiator) {
 case 131:
  return VAR_4;
 case 130:
  if (FUNC_4(VAR_8)) {

   if (FUNC_5(VAR_6->alpha2))
    return VAR_2;
   return VAR_1;
  }

  VAR_7 = FUNC_7(VAR_8->wiphy_idx);

  if (FUNC_6(!FUNC_2(VAR_6->alpha2)))
   return -VAR_0;
  if (VAR_8->initiator == 130) {
   if (VAR_7 != VAR_5) {






    if (FUNC_5(VAR_6->alpha2))
     return VAR_2;
    return VAR_1;
   }




   if (FUNC_0(FUNC_5(VAR_6->alpha2)))
    return VAR_4;
   return VAR_1;
  }
  return 0;
 case 129:
  if (VAR_8->initiator == 131) {
   if (FUNC_5(VAR_6->alpha2))
    return VAR_4;
   return VAR_1;
  }






  if (VAR_8->initiator == 129 &&
      !FUNC_5(VAR_6->alpha2))
   return VAR_1;

  return VAR_3;
 case 128:
  if (FUNC_4(VAR_6))
   return FUNC_3(VAR_6);

  if (FUNC_4(VAR_8))
   return VAR_2;

  if (VAR_8->initiator == 130)
   return VAR_3;




  if (VAR_8->initiator == 128 &&
      VAR_8->intersect)
   return VAR_2;




  if ((VAR_8->initiator == 131 ||
       VAR_8->initiator == 129 ||
       VAR_8->initiator == 128) &&
      FUNC_5(VAR_8->alpha2))
   return VAR_2;

  if (!FUNC_5(VAR_6->alpha2))
   return VAR_1;

  return VAR_4;
 }

 return VAR_2;
}
