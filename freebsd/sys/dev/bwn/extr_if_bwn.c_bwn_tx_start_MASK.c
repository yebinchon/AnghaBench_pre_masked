
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ieee80211_node {int dummy; } ;
struct bwn_softc {struct bwn_mac* sc_curmac; } ;
struct bwn_mac {int mac_flags; } ;


 int FUNC_0 (struct bwn_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct bwn_mac*,struct ieee80211_node*,struct mbuf**) ;
 int FUNC_2 (struct bwn_mac*,struct ieee80211_node*,struct mbuf**) ;
 int FUNC_3 (struct mbuf*) ;

__attribute__((used)) static int
FUNC_4(struct bwn_softc *VAR_3, struct ieee80211_node *VAR_4, struct mbuf *VAR_5)
{
 struct bwn_mac *VAR_6 = VAR_3->sc_curmac;
 int VAR_7;

 FUNC_0(VAR_3);

 if (VAR_5->m_pkthdr.len < VAR_2 || VAR_6 == ((void*)0)) {
  FUNC_3(VAR_5);
  return (VAR_1);
 }

 VAR_7 = (VAR_6->mac_flags & VAR_0) ?
     FUNC_1(VAR_6, VAR_4, &VAR_5) : FUNC_2(VAR_6, VAR_4, &VAR_5);
 if (VAR_7) {
  FUNC_3(VAR_5);
  return (VAR_7);
 }
 return (0);
}
