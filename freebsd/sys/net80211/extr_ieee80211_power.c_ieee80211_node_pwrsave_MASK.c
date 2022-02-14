
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211vap {int iv_ps_sta; int (* iv_update_ps ) (struct ieee80211vap*,int ) ;int (* iv_set_tim ) (struct ieee80211_node*,int ) ;} ;
struct TYPE_2__ {scalar_t__ psq_len; } ;
struct ieee80211_node {int ni_flags; TYPE_1__ ni_psq; struct ieee80211vap* ni_vap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211vap*,int ,struct ieee80211_node*,char*,int ) ;
 int FUNC_1 (struct ieee80211_node*) ;
 int FUNC_2 (struct ieee80211vap*,int ) ;
 int FUNC_3 (struct ieee80211_node*,int ) ;
 int FUNC_4 (struct ieee80211vap*,int ) ;

void
FUNC_5(struct ieee80211_node *VAR_2, int VAR_3)
{
 struct ieee80211vap *VAR_4 = VAR_2->ni_vap;
 int VAR_5;

 VAR_5 = 0;
 if (VAR_3) {
  if ((VAR_2->ni_flags & VAR_1) == 0) {
   VAR_4->iv_ps_sta++;
   VAR_5 = 1;
  }
  VAR_2->ni_flags |= VAR_1;
  FUNC_0(VAR_4, VAR_0, VAR_2,
      "power save mode on, %u sta's in ps mode", VAR_4->iv_ps_sta);

  if (VAR_5)
   VAR_4->iv_update_ps(VAR_4, VAR_4->iv_ps_sta);
 } else {
  if (VAR_2->ni_flags & VAR_1) {
   VAR_4->iv_ps_sta--;
   VAR_5 = 1;
  }
  VAR_2->ni_flags &= ~VAR_1;
  FUNC_0(VAR_4, VAR_0, VAR_2,
      "power save mode off, %u sta's in ps mode", VAR_4->iv_ps_sta);


  if (VAR_4->iv_set_tim != ((void*)0))
   VAR_4->iv_set_tim(VAR_2, 0);
  if (VAR_5) {

   VAR_4->iv_update_ps(VAR_4, VAR_4->iv_ps_sta);
  }
  if (VAR_2->ni_psq.psq_len != 0)
   FUNC_1(VAR_2);
 }
}
