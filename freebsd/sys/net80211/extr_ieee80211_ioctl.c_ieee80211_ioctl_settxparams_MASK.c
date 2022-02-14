
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {struct ieee80211_txparam* iv_txparms; struct ieee80211com* iv_ic; } ;
struct ieee80211req {int i_len; int i_data; } ;
struct ieee80211_htrateset {int dummy; } ;
struct ieee80211com {int ic_modecaps; struct ieee80211_htrateset ic_sup_htrates; struct ieee80211_rateset* ic_sup_rates; } ;
struct ieee80211_txparams_req {struct ieee80211_txparam* params; } ;
struct ieee80211_txparam {scalar_t__ ucastrate; scalar_t__ mcastrate; scalar_t__ mgmtrate; scalar_t__ maxretry; } ;
struct ieee80211_rateset {int dummy; } ;
typedef int parms ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ieee80211_htrateset const*,scalar_t__) ;
 int FUNC_1 (struct ieee80211_rateset const*,scalar_t__) ;
 int FUNC_2 (int ,struct ieee80211_txparams_req*,int) ;
 scalar_t__ FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ,int) ;

__attribute__((used)) static int
FUNC_5(struct ieee80211vap *VAR_5,
 const struct ieee80211req *VAR_6)
{
 struct ieee80211com *VAR_7 = VAR_5->iv_ic;
 struct ieee80211_txparams_req VAR_8;
 struct ieee80211_txparam *VAR_9, *VAR_10;
 const struct ieee80211_htrateset *VAR_11;
 const struct ieee80211_rateset *VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;


 if (VAR_6->i_len > sizeof(VAR_8))
  return VAR_0;
 VAR_13 = FUNC_2(VAR_6->i_data, &VAR_8, VAR_6->i_len);
 if (VAR_13 != 0)
  return VAR_13;
 VAR_17 = VAR_6->i_len / sizeof(struct ieee80211_txparam);
 VAR_15 = 0;

 for (VAR_14 = VAR_2; VAR_14 < VAR_17; VAR_14++) {
  if (FUNC_3(VAR_7->ic_modecaps, VAR_14))
   continue;
  VAR_9 = &VAR_8.params[VAR_14];
  VAR_10 = &VAR_5->iv_txparms[VAR_14];
  VAR_12 = &VAR_7->ic_sup_rates[VAR_14];
  VAR_11 = &VAR_7->ic_sup_htrates;
  VAR_16 = (VAR_14 == VAR_3 ||
    VAR_14 == VAR_4);
  if (VAR_9->ucastrate != VAR_10->ucastrate) {
   if (!FUNC_1(VAR_12, VAR_9->ucastrate) &&
       (!VAR_16 || !FUNC_0(VAR_11, VAR_9->ucastrate)))
    return VAR_0;
   VAR_15++;
  }
  if (VAR_9->mcastrate != VAR_10->mcastrate) {
   if (!FUNC_1(VAR_12, VAR_9->mcastrate) &&
       (!VAR_16 || !FUNC_0(VAR_11, VAR_9->mcastrate)))
    return VAR_0;
   VAR_15++;
  }
  if (VAR_9->mgmtrate != VAR_10->mgmtrate) {
   if (!FUNC_1(VAR_12, VAR_9->mgmtrate) &&
       (!VAR_16 || !FUNC_0(VAR_11, VAR_9->mgmtrate)))
    return VAR_0;
   VAR_15++;
  }
  if (VAR_9->maxretry != VAR_10->maxretry)
   VAR_15++;
 }
 if (VAR_15) {




  for (VAR_14 = VAR_2; VAR_14 < VAR_17; VAR_14++) {
   if (FUNC_4(VAR_7->ic_modecaps, VAR_14))
    VAR_5->iv_txparms[VAR_14] = VAR_8.params[VAR_14];
  }


  return VAR_1;
 }
 return 0;
}
