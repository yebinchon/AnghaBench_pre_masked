
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct ieee80211_node {int dummy; } ;
struct ath_softc {int sc_dmat; } ;
struct ath_buf {struct mbuf* bf_m; struct ieee80211_node* bf_node; int bf_dmamap; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath_softc*,struct ath_buf*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct ieee80211_node*,struct mbuf*,int) ;

void
FUNC_4(struct ath_softc *VAR_1, struct ath_buf *VAR_2, int VAR_3)
{
 struct ieee80211_node *VAR_4 = VAR_2->bf_node;
 struct mbuf *VAR_5 = VAR_2->bf_m;






 if (VAR_2->bf_m != ((void*)0)) {
  FUNC_1(VAR_1->sc_dmat, VAR_2->bf_dmamap,
      VAR_0);
  FUNC_2(VAR_1->sc_dmat, VAR_2->bf_dmamap);
 }

 VAR_2->bf_node = ((void*)0);
 VAR_2->bf_m = ((void*)0);


 FUNC_0(VAR_1, VAR_2);


 FUNC_3(VAR_4, VAR_5, VAR_3);
}
