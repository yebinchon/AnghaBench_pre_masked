
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wmeParams {int wmep_logcwmin; int wmep_logcwmax; int wmep_aifsn; int wmep_txopLimit; int wmep_acm; int wmep_noackPolicy; } ;
struct ieee80211vap {struct ieee80211com* iv_ic; } ;
struct ieee80211req {int i_len; int i_type; int i_val; } ;
struct TYPE_4__ {struct wmeParams* cap_wmeParams; } ;
struct TYPE_3__ {struct wmeParams* cap_wmeParams; } ;
struct ieee80211_wme_state {TYPE_2__ wme_wmeChanParams; TYPE_1__ wme_wmeBssChanParams; } ;
struct ieee80211com {int ic_caps; struct ieee80211_wme_state ic_wme; } ;


 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_0(struct ieee80211vap *VAR_6, struct ieee80211req *VAR_7)
{
 struct ieee80211com *VAR_8 = VAR_6->iv_ic;
 struct ieee80211_wme_state *VAR_9 = &VAR_8->ic_wme;
 struct wmeParams *VAR_10;
 int VAR_11;

 if ((VAR_8->ic_caps & VAR_1) == 0)
  return VAR_0;

 VAR_11 = (VAR_7->i_len & VAR_3);
 if (VAR_11 >= VAR_5)
  VAR_11 = VAR_4;
 if (VAR_7->i_len & VAR_2)
  VAR_10 = &VAR_9->wme_wmeBssChanParams.cap_wmeParams[VAR_11];
 else
  VAR_10 = &VAR_9->wme_wmeChanParams.cap_wmeParams[VAR_11];
 switch (VAR_7->i_type) {
 case 129:
  VAR_7->i_val = VAR_10->wmep_logcwmin;
  break;
 case 130:
  VAR_7->i_val = VAR_10->wmep_logcwmax;
  break;
 case 131:
  VAR_7->i_val = VAR_10->wmep_aifsn;
  break;
 case 128:
  VAR_7->i_val = VAR_10->wmep_txopLimit;
  break;
 case 132:
  VAR_10 = &VAR_9->wme_wmeBssChanParams.cap_wmeParams[VAR_11];
  VAR_7->i_val = VAR_10->wmep_acm;
  break;
 case 133:
  VAR_10 = &VAR_9->wme_wmeChanParams.cap_wmeParams[VAR_11];
  VAR_7->i_val = !VAR_10->wmep_noackPolicy;
  break;
 }
 return 0;
}
