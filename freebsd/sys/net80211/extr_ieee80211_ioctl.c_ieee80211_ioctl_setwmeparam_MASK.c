
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wmeParams {int wmep_noackPolicy; int wmep_acm; int wmep_txopLimit; int wmep_aifsn; int wmep_logcwmax; int wmep_logcwmin; } ;
struct ieee80211vap {struct ieee80211com* iv_ic; } ;
struct ieee80211req {int i_len; int i_type; int i_val; } ;
struct TYPE_8__ {struct wmeParams* cap_wmeParams; } ;
struct TYPE_7__ {struct wmeParams* cap_wmeParams; } ;
struct TYPE_6__ {struct wmeParams* cap_wmeParams; } ;
struct TYPE_5__ {struct wmeParams* cap_wmeParams; } ;
struct ieee80211_wme_state {int wme_flags; TYPE_4__ wme_wmeChanParams; TYPE_3__ wme_chanParams; TYPE_2__ wme_wmeBssChanParams; TYPE_1__ wme_bssChanParams; } ;
struct ieee80211com {int ic_caps; struct ieee80211_wme_state ic_wme; } ;


 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ieee80211vap*) ;

__attribute__((used)) static int
FUNC_1(struct ieee80211vap *VAR_7, struct ieee80211req *VAR_8)
{
 struct ieee80211com *VAR_9 = VAR_7->iv_ic;
 struct ieee80211_wme_state *VAR_10 = &VAR_9->ic_wme;
 struct wmeParams *VAR_11, *VAR_12;
 int VAR_13, VAR_14, VAR_15;

 if ((VAR_9->ic_caps & VAR_1) == 0)
  return VAR_0;

 VAR_13 = (VAR_8->i_len & VAR_2);
 VAR_14 = (VAR_8->i_len & VAR_3);
 VAR_15 = (VAR_10->wme_flags & VAR_5);
 if (VAR_14 >= VAR_6)
  VAR_14 = VAR_4;
 if (VAR_13) {
  VAR_12 = &VAR_10->wme_bssChanParams.cap_wmeParams[VAR_14];
  VAR_11 = &VAR_10->wme_wmeBssChanParams.cap_wmeParams[VAR_14];
 } else {
  VAR_12 = &VAR_10->wme_chanParams.cap_wmeParams[VAR_14];
  VAR_11 = &VAR_10->wme_wmeChanParams.cap_wmeParams[VAR_14];
 }
 switch (VAR_8->i_type) {
 case 129:
  VAR_11->wmep_logcwmin = VAR_8->i_val;
  if (!VAR_13 || !VAR_15)
   VAR_12->wmep_logcwmin = VAR_8->i_val;
  break;
 case 130:
  VAR_11->wmep_logcwmax = VAR_8->i_val;
  if (!VAR_13 || !VAR_15)
   VAR_12->wmep_logcwmax = VAR_8->i_val;
  break;
 case 131:
  VAR_11->wmep_aifsn = VAR_8->i_val;
  if (!VAR_13 || !VAR_15)
   VAR_12->wmep_aifsn = VAR_8->i_val;
  break;
 case 128:
  VAR_11->wmep_txopLimit = VAR_8->i_val;
  if (!VAR_13 || !VAR_15)
   VAR_12->wmep_txopLimit = VAR_8->i_val;
  break;
 case 132:
  VAR_11->wmep_acm = VAR_8->i_val;
  if (!VAR_15)
   VAR_12->wmep_acm = VAR_8->i_val;
  break;
 case 133:
  VAR_11->wmep_noackPolicy = VAR_12->wmep_noackPolicy =
   (VAR_8->i_val) == 0;
  break;
 }
 FUNC_0(VAR_7);
 return 0;
}
