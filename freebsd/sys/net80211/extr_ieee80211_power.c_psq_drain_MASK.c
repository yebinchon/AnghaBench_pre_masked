
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {struct mbuf* m_nextpkt; } ;
struct ieee80211_psq_head {scalar_t__ len; int * tail; struct mbuf* head; } ;
struct ieee80211_psq {int psq_len; struct ieee80211_psq_head* psq_head; } ;


 int FUNC_0 (struct ieee80211_psq*) ;
 int FUNC_1 (struct ieee80211_psq*) ;
 int FUNC_2 (struct mbuf*) ;

__attribute__((used)) static int
FUNC_3(struct ieee80211_psq *VAR_0)
{
 struct ieee80211_psq_head *VAR_1;
 struct mbuf *VAR_2;
 int VAR_3;

 FUNC_0(VAR_0);
 VAR_3 = VAR_0->psq_len;
 VAR_1 = &VAR_0->psq_head[0];
again:
 while ((VAR_2 = VAR_1->head) != ((void*)0)) {
  VAR_1->head = VAR_2->m_nextpkt;
  FUNC_2(VAR_2);
 }
 VAR_1->tail = ((void*)0);
 VAR_1->len = 0;
 if (VAR_1 == &VAR_0->psq_head[0]) {
  VAR_1 = &VAR_0->psq_head[1];
  goto again;
 }
 VAR_0->psq_len = 0;
 FUNC_1(VAR_0);

 return VAR_3;
}
