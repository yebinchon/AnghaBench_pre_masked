
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsec_softc {int tsec_link; int tsec_callout; int tsec_mii; struct ifnet* tsec_ifp; } ;
struct ifnet {int if_snd; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct tsec_softc*) ;
 int FUNC_2 (struct tsec_softc*) ;
 int FUNC_3 (int *,int ,void (*) (void*),struct tsec_softc*) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ifnet*) ;
 int FUNC_6 (struct tsec_softc*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_1)
{
 struct tsec_softc *VAR_2 = VAR_1;
 struct ifnet *VAR_3;
 int VAR_4;

 FUNC_1(VAR_2);

 FUNC_6(VAR_2);

 VAR_3 = VAR_2->tsec_ifp;
 VAR_4 = VAR_2->tsec_link;

 FUNC_4(VAR_2->tsec_mii);

 if (VAR_4 == 0 && VAR_2->tsec_link == 1 &&
     (!FUNC_0(&VAR_3->if_snd)))
  FUNC_5(VAR_3);


 FUNC_3(&VAR_2->tsec_callout, VAR_0, FUNC_7, VAR_2);

 FUNC_2(VAR_2);
}
