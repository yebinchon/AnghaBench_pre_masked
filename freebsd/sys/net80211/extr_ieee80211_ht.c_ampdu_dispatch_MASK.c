
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int m_flags; } ;
struct ieee80211_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_node*,struct mbuf*,int ,int ) ;

__attribute__((used)) static __inline void
FUNC_1(struct ieee80211_node *VAR_1, struct mbuf *VAR_2)
{
 VAR_2->m_flags |= VAR_0;

 (void) FUNC_0(VAR_1, VAR_2, 0, 0);
}
