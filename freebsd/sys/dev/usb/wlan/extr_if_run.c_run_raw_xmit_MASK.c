
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct run_softc {int sc_flags; } ;
struct mbuf {int dummy; } ;
struct ieee80211_node {TYPE_1__* ni_ic; } ;
struct ieee80211_bpf_params {int dummy; } ;
struct TYPE_2__ {struct run_softc* ic_softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct run_softc*,int ,char*) ;
 int FUNC_1 (struct run_softc*) ;
 int VAR_2 ;
 int FUNC_2 (struct run_softc*) ;
 int FUNC_3 (struct mbuf*) ;
 int FUNC_4 (struct run_softc*,struct mbuf*,struct ieee80211_node*) ;
 int FUNC_5 (struct run_softc*,struct mbuf*,struct ieee80211_node*,struct ieee80211_bpf_params const*) ;

__attribute__((used)) static int
FUNC_6(struct ieee80211_node *VAR_3, struct mbuf *VAR_4,
    const struct ieee80211_bpf_params *VAR_5)
{
 struct run_softc *VAR_6 = VAR_3->ni_ic->ic_softc;
 int VAR_7 = 0;

 FUNC_1(VAR_6);


 if (!(VAR_6->sc_flags & VAR_2)) {
  VAR_7 = VAR_0;
  goto done;
 }

 if (VAR_5 == ((void*)0)) {

  if ((VAR_7 = FUNC_4(VAR_6, VAR_4, VAR_3)) != 0) {
   FUNC_0(VAR_6, VAR_1, "mgt tx failed\n");
   goto done;
  }
 } else {

  if ((VAR_7 = FUNC_5(VAR_6, VAR_4, VAR_3, VAR_5)) != 0) {
   FUNC_0(VAR_6, VAR_1, "tx with param failed\n");
   goto done;
  }
 }

done:
 FUNC_2(VAR_6);

 if (VAR_7 != 0) {
  if(VAR_4 != ((void*)0))
   FUNC_3(VAR_4);
 }

 return (VAR_7);
}
