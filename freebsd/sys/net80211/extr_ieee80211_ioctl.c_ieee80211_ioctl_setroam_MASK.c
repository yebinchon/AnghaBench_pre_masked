
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {scalar_t__ iv_roaming; struct ieee80211_roamparam* iv_roamparms; struct ieee80211com* iv_ic; } ;
struct ieee80211req {int i_len; int i_data; } ;
struct ieee80211_htrateset {int dummy; } ;
struct ieee80211com {int ic_modecaps; struct ieee80211_htrateset ic_sup_htrates; struct ieee80211_rateset* ic_sup_rates; } ;
struct ieee80211_roamparams_req {struct ieee80211_roamparam* params; } ;
struct ieee80211_roamparam {scalar_t__ rate; scalar_t__ rssi; } ;
struct ieee80211_rateset {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ieee80211_roamparams_req*,int ) ;
 struct ieee80211_roamparams_req* FUNC_1 (int,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct ieee80211_htrateset const*,scalar_t__) ;
 int FUNC_3 (struct ieee80211_rateset const*,scalar_t__) ;
 int FUNC_4 (int ,struct ieee80211_roamparams_req*,int) ;
 scalar_t__ FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int ,int) ;

__attribute__((used)) static int
FUNC_7(struct ieee80211vap *VAR_11,
        const struct ieee80211req *VAR_12)
{
 struct ieee80211com *VAR_13 = VAR_11->iv_ic;
 struct ieee80211_roamparams_req *VAR_14;
 struct ieee80211_roamparam *VAR_15, *VAR_16;
 const struct ieee80211_htrateset *VAR_17;
 const struct ieee80211_rateset *VAR_18;
 int VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;

 if (VAR_12->i_len != sizeof(VAR_11->iv_roamparms))
  return VAR_0;

 VAR_14 = FUNC_1(sizeof(*VAR_14), VAR_10,
     VAR_7 | VAR_8);
 if (VAR_14 == ((void*)0))
  return VAR_1;

 VAR_20 = FUNC_4(VAR_12->i_data, VAR_14, VAR_12->i_len);
 if (VAR_20 != 0)
  goto fail;

 VAR_19 = 0;
 VAR_23 = VAR_6;


 for (VAR_21 = VAR_3; VAR_21 < VAR_23; VAR_21++) {
  if (FUNC_5(VAR_13->ic_modecaps, VAR_21))
   continue;
  VAR_15 = &VAR_14->params[VAR_21];
  VAR_16 = &VAR_11->iv_roamparms[VAR_21];
  VAR_18 = &VAR_13->ic_sup_rates[VAR_21];
  VAR_17 = &VAR_13->ic_sup_htrates;
  VAR_22 = (VAR_21 == VAR_4 ||
    VAR_21 == VAR_5);

  if (VAR_15->rate != VAR_16->rate) {
   if (!FUNC_3(VAR_18, VAR_15->rate) &&
       (!VAR_22 || !FUNC_2(VAR_17, VAR_15->rate))) {
    VAR_20 = VAR_0;
    goto fail;
   }
   VAR_19++;
  }
  if (VAR_15->rssi != VAR_16->rssi)
   VAR_19++;
 }
 if (VAR_19) {





  for (VAR_21 = VAR_3; VAR_21 < VAR_23; VAR_21++) {
   if (FUNC_6(VAR_13->ic_modecaps, VAR_21))
    VAR_11->iv_roamparms[VAR_21] = VAR_14->params[VAR_21];
  }

  if (VAR_11->iv_roaming == VAR_9)
   VAR_20 = VAR_2;
 }

fail: FUNC_0(VAR_14, VAR_10);
 return VAR_20;
}
