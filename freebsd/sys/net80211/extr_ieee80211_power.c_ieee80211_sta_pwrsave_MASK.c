
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211vap {struct ieee80211_node* iv_bss; } ;
struct TYPE_2__ {scalar_t__ psq_len; } ;
struct ieee80211_node {int ni_flags; TYPE_1__ ni_psq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211vap*,int ,struct ieee80211_node*,char*,char*) ;
 int FUNC_1 (struct ieee80211_node*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ieee80211_node*) ;

void
FUNC_4(struct ieee80211vap *VAR_2, int VAR_3)
{
 struct ieee80211_node *VAR_4 = VAR_2->iv_bss;

 if (!((VAR_3 != 0) ^ ((VAR_4->ni_flags & VAR_1) != 0)))
  return;

 FUNC_0(VAR_2, VAR_0, VAR_4,
     "sta power save mode %s", VAR_3 ? "on" : "off");
 if (!VAR_3) {
  VAR_4->ni_flags &= ~VAR_1;
  FUNC_2(FUNC_1(VAR_4));






  if (VAR_4->ni_psq.psq_len != 0)
   FUNC_3(VAR_4);
 } else {
  VAR_4->ni_flags |= VAR_1;
  FUNC_2(FUNC_1(VAR_4));
 }
}
