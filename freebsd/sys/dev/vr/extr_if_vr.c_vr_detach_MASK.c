
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vr_softc {int vr_mtx; scalar_t__ vr_res; int vr_res_id; int vr_res_type; scalar_t__ vr_irq; scalar_t__ vr_intrhand; scalar_t__ vr_miibus; int vr_inttask; int vr_stat_callout; int vr_flags; struct ifnet* vr_ifp; } ;
struct ifnet {int if_capenable; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct vr_softc*) ;
 int FUNC_2 (struct vr_softc*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,scalar_t__) ;
 int FUNC_5 (int ,scalar_t__,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,scalar_t__) ;
 struct vr_softc* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct ifnet*) ;
 int FUNC_11 (struct ifnet*) ;
 int FUNC_12 (struct ifnet*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,int *) ;
 int VAR_3 ;
 int FUNC_16 (struct vr_softc*) ;
 int FUNC_17 (struct vr_softc*) ;

__attribute__((used)) static int
FUNC_18(device_t VAR_4)
{
 struct vr_softc *VAR_5 = FUNC_8(VAR_4);
 struct ifnet *VAR_6 = VAR_5->vr_ifp;

 FUNC_0(FUNC_14(&VAR_5->vr_mtx), ("vr mutex not initialized"));







 if (FUNC_9(VAR_4)) {
  FUNC_1(VAR_5);
  VAR_5->vr_flags |= VAR_2;
  FUNC_17(VAR_5);
  FUNC_2(VAR_5);
  FUNC_6(&VAR_5->vr_stat_callout);
  FUNC_15(VAR_3, &VAR_5->vr_inttask);
  FUNC_10(VAR_6);
 }
 if (VAR_5->vr_miibus)
  FUNC_7(VAR_4, VAR_5->vr_miibus);
 FUNC_3(VAR_4);

 if (VAR_5->vr_intrhand)
  FUNC_5(VAR_4, VAR_5->vr_irq, VAR_5->vr_intrhand);
 if (VAR_5->vr_irq)
  FUNC_4(VAR_4, VAR_1, 0, VAR_5->vr_irq);
 if (VAR_5->vr_res)
  FUNC_4(VAR_4, VAR_5->vr_res_type, VAR_5->vr_res_id,
      VAR_5->vr_res);

 if (VAR_6)
  FUNC_12(VAR_6);

 FUNC_16(VAR_5);

 FUNC_13(&VAR_5->vr_mtx);

 return (0);
}
