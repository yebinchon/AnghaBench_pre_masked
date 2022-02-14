
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_softc {int ti_mtx; scalar_t__ ti_membuf2; scalar_t__ ti_membuf; scalar_t__ ti_res; scalar_t__ ti_irq; scalar_t__ ti_intrhand; int ifmedia; int ti_watchdog; struct ifnet* ti_ifp; scalar_t__ dev; } ;
struct ifnet {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct ti_softc*) ;
 int FUNC_3 (struct ti_softc*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,scalar_t__) ;
 int FUNC_6 (int ,scalar_t__,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__) ;
 struct ti_softc* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct ifnet*) ;
 int FUNC_12 (scalar_t__,int ) ;
 int FUNC_13 (struct ifnet*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct ti_softc*) ;
 int FUNC_18 (struct ti_softc*) ;

__attribute__((used)) static int
FUNC_19(device_t VAR_3)
{
 struct ti_softc *VAR_4;
 struct ifnet *VAR_5;

 VAR_4 = FUNC_9(VAR_3);
 if (VAR_4->dev)
  FUNC_8(VAR_4->dev);
 FUNC_0(FUNC_16(&VAR_4->ti_mtx), ("ti mutex not initialized"));
 VAR_5 = VAR_4->ti_ifp;
 if (FUNC_10(VAR_3)) {
  FUNC_11(VAR_5);
  FUNC_2(VAR_4);
  FUNC_18(VAR_4);
  FUNC_3(VAR_4);
 }


 FUNC_7(&VAR_4->ti_watchdog);
 FUNC_4(VAR_3);
 FUNC_17(VAR_4);
 FUNC_14(&VAR_4->ifmedia);

 if (VAR_4->ti_intrhand)
  FUNC_6(VAR_3, VAR_4->ti_irq, VAR_4->ti_intrhand);
 if (VAR_4->ti_irq)
  FUNC_5(VAR_3, VAR_1, 0, VAR_4->ti_irq);
 if (VAR_4->ti_res) {
  FUNC_5(VAR_3, VAR_2, FUNC_1(0),
      VAR_4->ti_res);
 }
 if (VAR_5)
  FUNC_13(VAR_5);
 if (VAR_4->ti_membuf)
  FUNC_12(VAR_4->ti_membuf, VAR_0);
 if (VAR_4->ti_membuf2)
  FUNC_12(VAR_4->ti_membuf2, VAR_0);

 FUNC_15(&VAR_4->ti_mtx);

 return (0);
}
