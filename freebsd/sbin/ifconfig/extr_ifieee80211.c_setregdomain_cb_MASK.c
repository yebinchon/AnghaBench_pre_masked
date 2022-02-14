
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct regdomain {int name; struct country const* cc; } ;
struct regdata {int dummy; } ;
struct TYPE_6__ {scalar_t__ ic_nchans; } ;
struct ieee80211_regdomain {scalar_t__ country; int regdomain; } ;
struct ieee80211_regdomain_req {int dc_drivercaps; int dc_cryptocaps; int dc_htcaps; int dc_vhtcaps; TYPE_2__ chaninfo; struct ieee80211_regdomain rd; TYPE_2__ dc_chaninfo; } ;
struct ieee80211_devcaps_req {int dc_drivercaps; int dc_cryptocaps; int dc_htcaps; int dc_vhtcaps; TYPE_2__ chaninfo; struct ieee80211_regdomain rd; TYPE_2__ dc_chaninfo; } ;
struct country {int name; int isoname; TYPE_1__* rd; } ;
struct TYPE_5__ {int sku; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct ieee80211_regdomain_req*) ;
 int FUNC_4 () ;
 int FUNC_5 (char) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct ieee80211_regdomain_req* VAR_3 ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (struct ieee80211_regdomain_req*) ;
 int FUNC_8 (int,struct ieee80211_regdomain_req*) ;
 struct regdata* FUNC_9 () ;
 struct country* FUNC_10 (struct regdata*,scalar_t__) ;
 struct regdomain* FUNC_11 (struct regdata*,int ) ;
 struct ieee80211_regdomain_req* FUNC_12 (int ) ;
 int FUNC_13 (struct ieee80211_regdomain_req*,TYPE_2__*,int ) ;
 int FUNC_14 (int,TYPE_2__*,int,int) ;
 int FUNC_15 (struct ieee80211_regdomain*,int) ;
 int FUNC_16 (char*,int) ;
 int FUNC_17 (struct ieee80211_regdomain_req*,struct ieee80211_regdomain_req*) ;
 int FUNC_18 (int,int ,int ,int ,struct ieee80211_regdomain_req*) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_19(int VAR_5, void *VAR_6)
{
 struct ieee80211_regdomain_req *VAR_7;
 struct ieee80211_regdomain *VAR_8 = VAR_6;
 struct ieee80211_devcaps_req *VAR_9;
 struct regdata *VAR_10 = FUNC_9();

 if (VAR_8->country != VAR_2) {
  const struct country *VAR_11;






  VAR_11 = FUNC_10(VAR_10, VAR_8->country);
  if (VAR_11 == ((void*)0))
   FUNC_6(1, "unknown ISO country code %d", VAR_8->country);
  if (VAR_11->rd->sku != VAR_8->regdomain) {
   const struct regdomain *VAR_12;
   VAR_12 = FUNC_11(VAR_10, VAR_8->regdomain);
   if (VAR_12 == ((void*)0))
    FUNC_6(1, "country %s (%s) is not usable with "
        "regdomain %d", VAR_11->isoname, VAR_11->name,
        VAR_8->regdomain);
   else if (VAR_12->cc != ((void*)0) && VAR_12->cc != VAR_11)
    FUNC_6(1, "country %s (%s) is not usable with "
       "regdomain %s", VAR_11->isoname, VAR_11->name,
       VAR_12->name);
  }
 }






 VAR_9 = FUNC_12(FUNC_1(VAR_1));
 if (VAR_9 == ((void*)0))
  FUNC_6(1, "no space for device capabilities");
 VAR_9->dc_chaninfo.ic_nchans = VAR_1;
 FUNC_8(VAR_5, VAR_9);
 VAR_7 = FUNC_12(FUNC_2(VAR_9->dc_chaninfo.ic_nchans));
 if (VAR_7 == ((void*)0))
  FUNC_6(1, "no space for regdomain request");
 VAR_7->rd = *VAR_8;
 FUNC_17(VAR_7, VAR_9);
 if (VAR_4) {
  FUNC_5(':');
  FUNC_15(VAR_8, 1 );
  FUNC_4();

  if (VAR_3 != ((void*)0))
   FUNC_7(VAR_3);
  VAR_3 = FUNC_12(FUNC_0(&VAR_7->chaninfo));
  if (VAR_3 == ((void*)0))
   FUNC_6(1, "no space for channel list");
  FUNC_13(VAR_3, &VAR_7->chaninfo,
      FUNC_0(&VAR_7->chaninfo));
  FUNC_14(VAR_5, &VAR_7->chaninfo, 1 , 1 );
 }
 if (VAR_7->chaninfo.ic_nchans == 0)
  FUNC_6(1, "no channels calculated");
 FUNC_18(VAR_5, VAR_0, 0,
     FUNC_3(VAR_7), VAR_7);
 FUNC_7(VAR_7);
 FUNC_7(VAR_9);
}
