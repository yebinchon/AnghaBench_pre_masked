
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {struct mbuf* m_nextpkt; } ;
struct ieee80211_ageq {scalar_t__ aq_len; scalar_t__ aq_maxlen; int aq_drops; struct mbuf* aq_tail; struct mbuf* aq_head; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_ageq*) ;
 int FUNC_1 (struct ieee80211_ageq*) ;
 int FUNC_2 (int,char*) ;
 scalar_t__ FUNC_3 (struct mbuf*) ;
 int FUNC_4 (struct mbuf*,int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct mbuf*) ;

int
FUNC_7(struct ieee80211_ageq *VAR_1, struct mbuf *VAR_2, int VAR_3)
{
 FUNC_0(VAR_1);
 if (FUNC_5(VAR_1->aq_len < VAR_1->aq_maxlen)) {
  if (VAR_1->aq_tail == ((void*)0)) {
   VAR_1->aq_head = VAR_2;
  } else {
   VAR_1->aq_tail->m_nextpkt = VAR_2;
   VAR_3 -= FUNC_3(VAR_1->aq_head);
  }
  FUNC_2(VAR_3 >= 0, ("age %d", VAR_3));
  FUNC_4(VAR_2, VAR_3);
  VAR_2->m_nextpkt = ((void*)0);
  VAR_1->aq_tail = VAR_2;
  VAR_1->aq_len++;
  FUNC_1(VAR_1);
  return 0;
 } else {



  VAR_1->aq_drops++;
  FUNC_1(VAR_1);

  FUNC_6(VAR_2);
  return VAR_0;
 }
}
