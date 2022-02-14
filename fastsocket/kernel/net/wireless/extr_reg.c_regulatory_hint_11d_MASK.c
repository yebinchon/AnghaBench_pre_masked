
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wiphy {int dummy; } ;
struct regulatory_request {scalar_t__ initiator; scalar_t__ wiphy_idx; char* alpha2; int country_ie_env; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;
typedef enum environment_cap { ____Placeholder_environment_cap } environment_cap ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct regulatory_request* FUNC_0 () ;
 scalar_t__ FUNC_1 (struct wiphy*) ;
 struct regulatory_request* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct regulatory_request*) ;
 int VAR_7 ;
 scalar_t__ FUNC_6 (int) ;

void FUNC_7(struct wiphy *VAR_8, enum ieee80211_band VAR_9,
    const u8 *VAR_10, u8 VAR_11)
{
 char VAR_12[2];
 enum environment_cap VAR_13 = VAR_0;
 struct regulatory_request *VAR_14, *VAR_15;

 FUNC_3(&VAR_7);
 VAR_15 = FUNC_0();

 if (FUNC_6(!VAR_15))
  goto out;


 if (VAR_11 & 0x01)
  goto out;

 if (VAR_11 < VAR_4)
  goto out;

 VAR_12[0] = VAR_10[0];
 VAR_12[1] = VAR_10[1];

 if (VAR_10[2] == 'I')
  VAR_13 = VAR_1;
 else if (VAR_10[2] == 'O')
  VAR_13 = VAR_2;






 if (VAR_15->initiator == VAR_5 &&
     VAR_15->wiphy_idx != VAR_6)
  goto out;

 VAR_14 = FUNC_2(sizeof(struct regulatory_request), VAR_3);
 if (!VAR_14)
  goto out;

 VAR_14->wiphy_idx = FUNC_1(VAR_8);
 VAR_14->alpha2[0] = VAR_12[0];
 VAR_14->alpha2[1] = VAR_12[1];
 VAR_14->initiator = VAR_5;
 VAR_14->country_ie_env = VAR_13;

 FUNC_5(VAR_14);
out:
 FUNC_4(&VAR_7);
}
