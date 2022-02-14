
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {scalar_t__ regd; } ;
struct regulatory_request {scalar_t__ initiator; int intersect; int wiphy_idx; } ;
struct ieee80211_regdomain {int alpha2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ieee80211_regdomain const*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct ieee80211_regdomain const*) ;
 int FUNC_2 () ;
 struct regulatory_request* FUNC_3 () ;
 struct ieee80211_regdomain* FUNC_4 (struct wiphy*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct ieee80211_regdomain const*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct ieee80211_regdomain const*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (struct ieee80211_regdomain const*) ;
 int FUNC_13 (scalar_t__,struct ieee80211_regdomain const*) ;
 int FUNC_14 (struct ieee80211_regdomain const*) ;
 struct ieee80211_regdomain* FUNC_15 (struct ieee80211_regdomain const*) ;
 int FUNC_16 (int ) ;
 int VAR_5 ;
 int FUNC_17 (int ) ;
 struct ieee80211_regdomain* FUNC_18 (struct ieee80211_regdomain const*,int ) ;
 int FUNC_19 (int,struct ieee80211_regdomain const*) ;
 int FUNC_20 (int *,int ) ;
 int FUNC_21 (struct ieee80211_regdomain const*) ;
 struct wiphy* FUNC_22 (int ) ;

__attribute__((used)) static int FUNC_23(const struct ieee80211_regdomain *VAR_6)
{
 const struct ieee80211_regdomain *VAR_7;
 const struct ieee80211_regdomain *VAR_8 = ((void*)0);
 struct wiphy *VAR_9;
 struct regulatory_request *VAR_10 = FUNC_3();



 if (!FUNC_16(VAR_6->alpha2))
  return -VAR_1;

 if (FUNC_9(VAR_6->alpha2)) {
  FUNC_21(VAR_6);
  return 0;
 }

 if (!FUNC_5(VAR_6->alpha2) && !FUNC_6(VAR_6->alpha2) &&
     !FUNC_7(VAR_6->alpha2))
  return -VAR_1;






 if (VAR_10->initiator != VAR_3) {




  if (!FUNC_17(VAR_6->alpha2))
   return -VAR_0;
 }
 if (!FUNC_8(VAR_6)) {
  FUNC_11("Invalid regulatory domain detected:\n");
  FUNC_12(VAR_6);
  return -VAR_1;
 }

 VAR_9 = FUNC_22(VAR_10->wiphy_idx);
 if (!VAR_9 &&
     (VAR_10->initiator == VAR_4 ||
      VAR_10->initiator == VAR_3)) {
  FUNC_20(&VAR_5, 0);
  return -VAR_2;
 }

 if (!VAR_10->intersect) {
  if (VAR_10->initiator != VAR_4) {
   FUNC_19(0, VAR_6);
   return 0;
  }
  if (VAR_9->regd)
   return -VAR_0;

  VAR_7 = FUNC_15(VAR_6);
  if (FUNC_0(VAR_7))
   return FUNC_1(VAR_7);

  FUNC_13(VAR_9->regd, VAR_7);
  FUNC_19(0, VAR_6);
  return 0;
 }



 if (VAR_10->initiator != VAR_3) {
  VAR_8 = FUNC_18(VAR_6, FUNC_2());
  if (!VAR_8)
   return -VAR_1;






  if (VAR_10->initiator == VAR_4) {
   const struct ieee80211_regdomain *VAR_11;

   VAR_11 = FUNC_4(VAR_9);
   FUNC_13(VAR_9->regd, VAR_6);
   FUNC_14(VAR_11);
  } else {
   FUNC_10(VAR_6);
  }

  VAR_6 = ((void*)0);

  FUNC_19(0, VAR_8);

  return 0;
 }

 return -VAR_1;
}
