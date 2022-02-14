
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int flags; } ;
struct regulatory_request {scalar_t__ wiphy_idx; int alpha2; } ;
typedef enum nl80211_reg_initiator { ____Placeholder_nl80211_reg_initiator } nl80211_reg_initiator ;


 int VAR_0 ;
 int VAR_1 ;

 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct wiphy*,struct regulatory_request*) ;
 int FUNC_2 (struct regulatory_request*) ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int FUNC_4 (int *,int ) ;
 struct wiphy* FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct wiphy*,int) ;

__attribute__((used)) static void FUNC_7(struct regulatory_request *VAR_5,
        enum nl80211_reg_initiator VAR_6)
{
 struct wiphy *VAR_7 = ((void*)0);

 if (FUNC_0(!VAR_5->alpha2))
  return;

 if (VAR_5->wiphy_idx != VAR_3)
  VAR_7 = FUNC_5(VAR_5->wiphy_idx);

 if (VAR_6 == VAR_0 && !VAR_7) {
  FUNC_2(VAR_5);
  return;
 }

 switch (FUNC_1(VAR_7, VAR_5)) {
 case 128:

  if (VAR_7 && VAR_7->flags & VAR_2)
   FUNC_6(VAR_7, VAR_6);
  break;
 default:
  if (VAR_6 == VAR_1)
   FUNC_4(&VAR_4,
           FUNC_3(3142));
  break;
 }
}
