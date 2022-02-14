
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct ieee80211_node {int dummy; } ;
struct ieee80211_key {struct ieee80211_cipher* wk_cipher; } ;
struct ieee80211_cipher {scalar_t__ (* ic_encap ) (struct ieee80211_key*,struct mbuf*) ;} ;


 struct ieee80211_key* FUNC_0 (struct ieee80211_node*,struct mbuf*) ;
 scalar_t__ FUNC_1 (struct ieee80211_key*,struct mbuf*) ;

struct ieee80211_key *
FUNC_2(struct ieee80211_node *VAR_0, struct mbuf *VAR_1)
{
 struct ieee80211_key *VAR_2;
 const struct ieee80211_cipher *VAR_3;

 if ((VAR_2 = FUNC_0(VAR_0, VAR_1)) != ((void*)0)) {
  VAR_3 = VAR_2->wk_cipher;
  return (VAR_3->ic_encap(VAR_2, VAR_1) ? VAR_2 : ((void*)0));
 }

 return ((void*)0);
}
