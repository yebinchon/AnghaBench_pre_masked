
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int regd; } ;
typedef struct regulatory_request {scalar_t__ initiator; int intersect; int processed; int * alpha2; } const regulatory_request ;
struct ieee80211_regdomain {scalar_t__ initiator; int intersect; int processed; int * alpha2; } ;
typedef enum reg_request_treatment { ____Placeholder_reg_request_treatment } reg_request_treatment ;


 int FUNC_0 (struct regulatory_request const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct regulatory_request const*) ;
 int VAR_2 ;
 int VAR_3 ;


 scalar_t__ FUNC_2 (int *) ;
 struct regulatory_request const VAR_4 ;
 int FUNC_3 () ;
 struct regulatory_request* FUNC_4 () ;
 int FUNC_5 (struct wiphy*,struct regulatory_request const*) ;
 int FUNC_6 (struct regulatory_request const*) ;
 int FUNC_7 (struct regulatory_request const*,int ) ;
 int VAR_5 ;
 int FUNC_8 (struct regulatory_request const*) ;
 int FUNC_9 (int ,struct regulatory_request const*) ;
 int VAR_6 ;
 struct regulatory_request* FUNC_10 (int ) ;
 int FUNC_11 () ;
 int * VAR_7 ;

__attribute__((used)) static enum reg_request_treatment
FUNC_12(struct wiphy *VAR_8,
    struct regulatory_request *VAR_9)
{
 const struct ieee80211_regdomain *VAR_10;
 bool VAR_11 = 0;
 enum reg_request_treatment VAR_12;
 struct regulatory_request *VAR_13;

 VAR_12 = FUNC_5(VAR_8, VAR_9);

 switch (VAR_12) {
 case 129:
  if (VAR_9->initiator ==
      VAR_0) {
   VAR_10 = FUNC_10(FUNC_3());
   if (FUNC_0(VAR_10)) {
    FUNC_6(VAR_9);
    return FUNC_1(VAR_10);
   }
   FUNC_9(VAR_8->regd, VAR_10);
  }
  VAR_11 = 1;
  break;
 case 128:
  break;
 default:





  if (VAR_12 == VAR_2 &&
      VAR_9->initiator == VAR_0) {
   VAR_10 = FUNC_10(FUNC_3());
   if (FUNC_0(VAR_10)) {
    FUNC_6(VAR_9);
    return VAR_3;
   }
   VAR_12 = VAR_2;
   FUNC_9(VAR_8->regd, VAR_10);
   goto new_request;
  }
  FUNC_6(VAR_9);
  return VAR_12;
 }

new_request:
 VAR_13 = FUNC_4();
 if (VAR_13 != &VAR_4 && VAR_13)
  FUNC_7(VAR_13, VAR_6);

 VAR_9->intersect = VAR_11;
 VAR_9->processed = 0;
 FUNC_9(VAR_5, VAR_9);
 VAR_13 = VAR_9;

 VAR_9 = ((void*)0);

 if (VAR_13->initiator == VAR_1) {
  VAR_7[0] = VAR_13->alpha2[0];
  VAR_7[1] = VAR_13->alpha2[1];
 }


 if (VAR_12 != 128 && VAR_12 != 129) {





  if (VAR_12 == VAR_2) {
   FUNC_8(VAR_13);
   FUNC_11();
  }
  return VAR_12;
 }

 if (FUNC_2(VAR_13->alpha2))
  return VAR_3;
 return 128;
}
