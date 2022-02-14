
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uath_datahead ;
struct uath_softc {int dummy; } ;
struct uath_data {int dummy; } ;
struct mbuf {struct mbuf* m_nextpkt; } ;
struct ieee80211_node {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct uath_data*,int ) ;
 int FUNC_2 (struct uath_softc*) ;
 int FUNC_3 (struct ieee80211_node*) ;
 int VAR_0 ;
 struct uath_data* FUNC_4 (struct uath_softc*) ;
 int FUNC_5 (struct uath_softc*,int *,struct ieee80211_node*) ;

__attribute__((used)) static int
FUNC_6(struct uath_softc *VAR_1, uath_datahead *VAR_2,
    struct mbuf *VAR_3, struct ieee80211_node *VAR_4)
{
 struct mbuf *VAR_5;
 struct uath_data *VAR_6;

 FUNC_2(VAR_1);
 for (VAR_5 = VAR_3->m_nextpkt; VAR_5 != ((void*)0); VAR_5 = VAR_5->m_nextpkt) {
  VAR_6 = FUNC_4(VAR_1);
  if (VAR_6 == ((void*)0)) {
   FUNC_5(VAR_1, VAR_2, VAR_4);
   break;
  }
  FUNC_3(VAR_4);
  FUNC_1(VAR_2, VAR_6, VAR_0);
 }

 return !FUNC_0(VAR_2);
}
