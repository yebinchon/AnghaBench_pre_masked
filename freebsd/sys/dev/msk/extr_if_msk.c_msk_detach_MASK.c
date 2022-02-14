
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msk_softc {int ** msk_if; int msk_mtx; } ;
struct msk_if_softc {size_t msk_port; struct msk_softc* msk_softc; int msk_tick_ch; int msk_flags; struct ifnet* msk_ifp; } ;
struct ifnet {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct msk_if_softc*) ;
 int FUNC_2 (struct msk_if_softc*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 struct msk_if_softc* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct ifnet*) ;
 int FUNC_8 (struct ifnet*) ;
 int FUNC_9 (struct msk_if_softc*) ;
 int FUNC_10 (struct msk_if_softc*) ;
 int FUNC_11 (struct msk_if_softc*) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int
FUNC_13(device_t VAR_1)
{
 struct msk_softc *VAR_2;
 struct msk_if_softc *VAR_3;
 struct ifnet *VAR_4;

 VAR_3 = FUNC_5(VAR_1);
 FUNC_0(FUNC_12(&VAR_3->msk_softc->msk_mtx),
     ("msk mutex not initialized in msk_detach"));
 FUNC_1(VAR_3);

 VAR_4 = VAR_3->msk_ifp;
 if (FUNC_6(VAR_1)) {

  VAR_3->msk_flags |= VAR_0;
  FUNC_10(VAR_3);

  FUNC_2(VAR_3);
  FUNC_4(&VAR_3->msk_tick_ch);
  if (VAR_4)
   FUNC_7(VAR_4);
  FUNC_1(VAR_3);
 }
 FUNC_9(VAR_3);
 FUNC_11(VAR_3);
 FUNC_3(VAR_1);

 VAR_2 = VAR_3->msk_softc;
 VAR_2->msk_if[VAR_3->msk_port] = ((void*)0);
 FUNC_2(VAR_3);
 if (VAR_4)
  FUNC_8(VAR_4);

 return (0);
}
