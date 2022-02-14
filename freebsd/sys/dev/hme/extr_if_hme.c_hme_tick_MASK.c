
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int dummy; } ;
struct hme_softc {int sc_tick_ch; int sc_mii; struct ifnet* sc_ifp; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hme_softc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct hme_softc*,int ) ;
 int FUNC_2 (struct hme_softc*,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *,int ,void (*) (void*),struct hme_softc*) ;
 scalar_t__ FUNC_4 (struct hme_softc*) ;
 int VAR_7 ;
 int FUNC_5 (struct ifnet*,int ,scalar_t__) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(void *VAR_8)
{
 struct hme_softc *VAR_9 = VAR_8;
 struct ifnet *VAR_10;

 FUNC_0(VAR_9, VAR_6);

 VAR_10 = VAR_9->sc_ifp;



 FUNC_5(VAR_10, VAR_5,
  FUNC_1(VAR_9, VAR_4) +
  FUNC_1(VAR_9, VAR_2) +
  FUNC_1(VAR_9, VAR_1) +
  FUNC_1(VAR_9, VAR_3));




 FUNC_2(VAR_9, VAR_4, 0);
 FUNC_2(VAR_9, VAR_2, 0);
 FUNC_2(VAR_9, VAR_1, 0);
 FUNC_2(VAR_9, VAR_3, 0);

 FUNC_6(VAR_9->sc_mii);

 if (FUNC_4(VAR_9) == VAR_0)
  return;

 FUNC_3(&VAR_9->sc_tick_ch, VAR_7, FUNC_7, VAR_9);
}
