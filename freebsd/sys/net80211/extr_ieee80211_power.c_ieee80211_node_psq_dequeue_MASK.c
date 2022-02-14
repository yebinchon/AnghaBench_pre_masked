
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {struct mbuf* m_nextpkt; } ;
struct ieee80211_psq_head {scalar_t__ len; int * tail; struct mbuf* head; } ;
struct ieee80211_psq {int psq_len; struct ieee80211_psq_head* psq_head; } ;
struct ieee80211_node {struct ieee80211_psq ni_psq; } ;


 int FUNC_0 (struct ieee80211_psq*) ;
 int FUNC_1 (struct ieee80211_psq*) ;
 int FUNC_2 (int,char*) ;

struct mbuf *
FUNC_3(struct ieee80211_node *VAR_0, int *VAR_1)
{
 struct ieee80211_psq *VAR_2 = &VAR_0->ni_psq;
 struct ieee80211_psq_head *VAR_3;
 struct mbuf *VAR_4;

 FUNC_0(VAR_2);
 VAR_3 = &VAR_2->psq_head[0];
again:
 if ((VAR_4 = VAR_3->head) != ((void*)0)) {
  if ((VAR_3->head = VAR_4->m_nextpkt) == ((void*)0))
   VAR_3->tail = ((void*)0);
  FUNC_2(VAR_3->len > 0, ("qhead len %d", VAR_3->len));
  VAR_3->len--;
  FUNC_2(VAR_2->psq_len > 0, ("psq len %d", VAR_2->psq_len));
  VAR_2->psq_len--;
  VAR_4->m_nextpkt = ((void*)0);
 }
 if (VAR_4 == ((void*)0) && VAR_3 == &VAR_2->psq_head[0]) {

  VAR_3 = &VAR_2->psq_head[1];
  goto again;
 }
 if (VAR_1 != ((void*)0))
  *VAR_1 = VAR_2->psq_len;
 FUNC_1(VAR_2);
 return VAR_4;
}
