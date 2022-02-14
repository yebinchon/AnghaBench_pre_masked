
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vge_softc {int vge_flags; int vge_mtx; scalar_t__ vge_res; scalar_t__ vge_irq; scalar_t__ vge_intrhand; scalar_t__ vge_miibus; int vge_watchdog; struct ifnet* vge_ifp; } ;
struct ifnet {int if_capenable; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct vge_softc*) ;
 int FUNC_3 (struct vge_softc*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int,scalar_t__) ;
 int FUNC_6 (int ,scalar_t__,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,scalar_t__) ;
 struct vge_softc* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct ifnet*) ;
 int FUNC_12 (struct ifnet*) ;
 int FUNC_13 (struct ifnet*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct vge_softc*) ;
 int FUNC_18 (struct vge_softc*) ;

__attribute__((used)) static int
FUNC_19(device_t VAR_4)
{
 struct vge_softc *VAR_5;
 struct ifnet *VAR_6;

 VAR_5 = FUNC_9(VAR_4);
 FUNC_0(FUNC_15(&VAR_5->vge_mtx), ("vge mutex not initialized"));
 VAR_6 = VAR_5->vge_ifp;







 if (FUNC_10(VAR_4)) {
  FUNC_11(VAR_6);
  FUNC_2(VAR_5);
  FUNC_18(VAR_5);
  FUNC_3(VAR_5);
  FUNC_7(&VAR_5->vge_watchdog);
 }
 if (VAR_5->vge_miibus)
  FUNC_8(VAR_4, VAR_5->vge_miibus);
 FUNC_4(VAR_4);

 if (VAR_5->vge_intrhand)
  FUNC_6(VAR_4, VAR_5->vge_irq, VAR_5->vge_intrhand);
 if (VAR_5->vge_irq)
  FUNC_5(VAR_4, VAR_1,
      VAR_5->vge_flags & VAR_3 ? 1 : 0, VAR_5->vge_irq);
 if (VAR_5->vge_flags & VAR_3)
  FUNC_16(VAR_4);
 if (VAR_5->vge_res)
  FUNC_5(VAR_4, VAR_2,
      FUNC_1(1), VAR_5->vge_res);
 if (VAR_6)
  FUNC_13(VAR_6);

 FUNC_17(VAR_5);
 FUNC_14(&VAR_5->vge_mtx);

 return (0);
}
