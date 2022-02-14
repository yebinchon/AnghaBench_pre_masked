
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int m_flags; struct mbuf* m_nextpkt; int m_len; } ;
struct ieee80211vap {int (* iv_set_tim ) (struct ieee80211_node*,int) ;} ;
struct ieee80211com {int ic_bintval; } ;
struct ieee80211_psq_head {int len; struct mbuf* tail; struct mbuf* head; } ;
struct ieee80211_psq {int psq_len; int psq_maxlen; int psq_drops; struct ieee80211_psq_head* psq_head; } ;
struct ieee80211_node {int ni_intval; struct ieee80211com* ni_ic; struct ieee80211vap* ni_vap; struct ieee80211_psq ni_psq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ieee80211vap*,int ,struct ieee80211_node*,char*,int,int) ;
 int FUNC_1 (struct ieee80211_psq*) ;
 int FUNC_2 (struct ieee80211_psq*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (struct mbuf*) ;
 int FUNC_6 (struct mbuf*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (struct ieee80211com*,int ,int ,int,int) ;
 scalar_t__ FUNC_8 (struct ieee80211vap*) ;
 int FUNC_9 (struct mbuf*,int ) ;
 int FUNC_10 (struct mbuf*) ;
 int FUNC_11 (struct ieee80211_node*,int) ;

int
FUNC_12(struct ieee80211_node *VAR_5, struct mbuf *VAR_6)
{
 struct ieee80211_psq *VAR_7 = &VAR_5->ni_psq;
 struct ieee80211vap *VAR_8 = VAR_5->ni_vap;
 struct ieee80211com *VAR_9 = VAR_5->ni_ic;
 struct ieee80211_psq_head *VAR_10;
 int VAR_11, VAR_12;

 FUNC_1(VAR_7);
 if (VAR_7->psq_len >= VAR_7->psq_maxlen) {
  VAR_7->psq_drops++;
  FUNC_2(VAR_7);
  FUNC_0(VAR_8, VAR_1, VAR_5,
      "pwr save q overflow, drops %d (size %d)",
      VAR_7->psq_drops, VAR_7->psq_len);





  FUNC_10(VAR_6);
  return VAR_0;
 }
 VAR_12 = FUNC_3((VAR_5->ni_intval * VAR_9->ic_bintval) << 2) / 1000;






 if (VAR_6->m_flags & VAR_3)
  VAR_10 = &VAR_7->psq_head[0];
 else
  VAR_10 = &VAR_7->psq_head[1];
 if (VAR_10->tail == ((void*)0)) {
  struct mbuf *VAR_13;

  VAR_10->head = VAR_6;






  if (VAR_10 == &VAR_7->psq_head[1]) {
   VAR_13 = VAR_7->psq_head[0].head;
   if (VAR_13 != ((void*)0))
    VAR_12-= FUNC_5(VAR_13);
  } else {
   VAR_13 = VAR_7->psq_head[1].head;
   if (VAR_13 != ((void*)0)) {
    int VAR_14 = FUNC_5(VAR_13) - VAR_12;

    FUNC_6(VAR_13, VAR_14 < 0 ? 0 : VAR_14);
   }
  }
 } else {
  VAR_10->tail->m_nextpkt = VAR_6;
  VAR_12 -= FUNC_5(VAR_10->head);
 }
 FUNC_4(VAR_12 >= 0, ("age %d", VAR_12));
 FUNC_6(VAR_6, VAR_12);
 VAR_6->m_nextpkt = ((void*)0);
 VAR_10->tail = VAR_6;
 VAR_10->len++;
 VAR_11 = ++(VAR_7->psq_len);
 FUNC_2(VAR_7);

 FUNC_0(VAR_8, VAR_2, VAR_5,
     "save frame with age %d, %u now queued", VAR_12, VAR_11);

 if (VAR_11 == 1 && VAR_8->iv_set_tim != ((void*)0))
  VAR_8->iv_set_tim(VAR_5, 1);

 return 0;
}
