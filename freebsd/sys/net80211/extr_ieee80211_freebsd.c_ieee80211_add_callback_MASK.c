
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int m_flags; } ;
struct m_tag {int dummy; } ;
struct ieee80211_cb {void (* func ) (struct ieee80211_node*,void*,int) ;void* arg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct m_tag* FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (struct mbuf*,struct m_tag*) ;

int
FUNC_2(struct mbuf *VAR_4,
 void (*VAR_5)(struct ieee80211_node *, void *, int), void *VAR_6)
{
 struct m_tag *VAR_7;
 struct ieee80211_cb *VAR_8;

 VAR_7 = FUNC_0(VAR_0, VAR_3,
   sizeof(struct ieee80211_cb), VAR_1);
 if (VAR_7 == ((void*)0))
  return 0;

 VAR_8 = (struct ieee80211_cb *)(VAR_7+1);
 VAR_8->func = VAR_5;
 VAR_8->arg = VAR_6;
 FUNC_1(VAR_4, VAR_7);
 VAR_4->m_flags |= VAR_2;
 return 1;
}
