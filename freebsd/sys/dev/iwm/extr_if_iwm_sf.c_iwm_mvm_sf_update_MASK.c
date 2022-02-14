
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwm_softc {int dummy; } ;
struct ieee80211vap {int iv_dtim_period; struct ieee80211_node* iv_bss; } ;
struct ieee80211_node {int dummy; } ;
typedef enum iwm_sf_state { ____Placeholder_iwm_sf_state } iwm_sf_state ;
typedef int boolean_t ;
struct TYPE_2__ {int in_assoc; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct ieee80211_node*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct iwm_softc*,struct ieee80211_node*,int) ;

int
FUNC_2(struct iwm_softc *VAR_4, struct ieee80211vap *VAR_5,
 boolean_t VAR_6)
{
 enum iwm_sf_state VAR_7;
 struct ieee80211_node *VAR_8 = ((void*)0);
 int VAR_9 = 0;


 if (VAR_5 && !VAR_6)
  VAR_9++;

 switch (VAR_9) {
 case 0:

  VAR_7 = VAR_2;
  break;
 case 1:
  if (!VAR_5)
   return VAR_0;
  VAR_8 = VAR_5->iv_bss;
  if (VAR_8 != ((void*)0) && FUNC_0(VAR_8)->in_assoc &&
      VAR_5->iv_dtim_period) {
   VAR_7 = VAR_1;
  } else {
   VAR_7 = VAR_2;
  }
  break;
 default:

  VAR_7 = VAR_3;
 }
 return FUNC_1(VAR_4, VAR_8, VAR_7);
}
