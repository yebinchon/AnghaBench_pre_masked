
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {struct mbuf* m_nextpkt; } ;
struct ieee80211_ageq {scalar_t__ aq_len; int * aq_tail; struct mbuf* aq_head; } ;


 int FUNC_0 (struct ieee80211_ageq*) ;
 int FUNC_1 (struct ieee80211_ageq*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct mbuf*) ;
 int FUNC_4 (struct mbuf*,int) ;

struct mbuf *
FUNC_5(struct ieee80211_ageq *VAR_0, int VAR_1)
{
 struct mbuf *VAR_2, **VAR_3;
 struct mbuf *VAR_4;

 VAR_3 = &VAR_2;
 if (VAR_0->aq_len != 0) {
  FUNC_0(VAR_0);
  while ((VAR_4 = VAR_0->aq_head) != ((void*)0) && FUNC_3(VAR_4) < VAR_1) {
   if ((VAR_0->aq_head = VAR_4->m_nextpkt) == ((void*)0))
    VAR_0->aq_tail = ((void*)0);
   FUNC_2(VAR_0->aq_len > 0, ("aq len %d", VAR_0->aq_len));
   VAR_0->aq_len--;

   *VAR_3 = VAR_4;
   VAR_3 = &VAR_4->m_nextpkt;
  }
  if (VAR_4 != ((void*)0))
   FUNC_4(VAR_4, VAR_1);
  FUNC_1(VAR_0);
 }
 *VAR_3 = ((void*)0);
 return VAR_2;
}
