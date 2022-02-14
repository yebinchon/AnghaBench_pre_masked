
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct m_tag {int dummy; } ;
struct ieee80211_node {int dummy; } ;
struct ieee80211_cb {int arg; int (* func ) (struct ieee80211_node*,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct m_tag* FUNC_0 (struct mbuf*,int ,int ,int *) ;
 int FUNC_1 (struct ieee80211_node*,int ,int) ;

void
FUNC_2(struct ieee80211_node *VAR_2,
 struct mbuf *VAR_3, int VAR_4)
{
 struct m_tag *VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_0, VAR_1, ((void*)0));
 if (VAR_5 != ((void*)0)) {
  struct ieee80211_cb *VAR_6 = (struct ieee80211_cb *)(VAR_5+1);
  VAR_6->func(VAR_2, VAR_6->arg, VAR_4);
 }
}
