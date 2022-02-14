
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct vr_softc {scalar_t__ vr_revid; int vr_dev; struct ifnet* vr_ifp; } ;
struct ifnet {int if_capenable; } ;


 int FUNC_0 (struct vr_softc*,int ) ;
 int FUNC_1 (struct vr_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (struct vr_softc*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int ,scalar_t__,int) ;
 int FUNC_5 (int ,scalar_t__,int,int) ;

__attribute__((used)) static void
FUNC_6(struct vr_softc *VAR_28)
{
 struct ifnet *VAR_29;
 int VAR_30;
 uint16_t VAR_31;
 uint8_t VAR_32;

 FUNC_2(VAR_28);

 if (VAR_28->vr_revid < VAR_7 ||
     FUNC_3(VAR_28->vr_dev, VAR_6, &VAR_30) != 0)
  return;

 VAR_29 = VAR_28->vr_ifp;


 FUNC_1(VAR_28, VAR_24, 0xFF);
 FUNC_1(VAR_28, VAR_19, VAR_21 | VAR_22);
 FUNC_1(VAR_28, VAR_13, 0xFF);
 FUNC_1(VAR_28, VAR_9, VAR_11);
 if (VAR_28->vr_revid > VAR_8) {

  FUNC_1(VAR_28, VAR_19, VAR_20);
  FUNC_1(VAR_28, VAR_18, 3);
  FUNC_1(VAR_28, VAR_12, 3);
 }
 if ((VAR_29->if_capenable & VAR_2) != 0)
  FUNC_1(VAR_28, VAR_26, VAR_27);
 if ((VAR_29->if_capenable & VAR_1) != 0)
  FUNC_1(VAR_28, VAR_26, VAR_25);






 if ((VAR_29->if_capenable & VAR_0) != 0) {
  FUNC_1(VAR_28, VAR_23, VAR_21 | VAR_22);
  VAR_32 = FUNC_0(VAR_28, VAR_14);
  FUNC_1(VAR_28, VAR_14, VAR_32 | VAR_17);
  FUNC_1(VAR_28, VAR_10, VAR_11);
 }


 VAR_32 = FUNC_0(VAR_28, VAR_14);
 VAR_32 |= VAR_15 | VAR_16;
 FUNC_1(VAR_28, VAR_14, VAR_32);


 VAR_31 = FUNC_4(VAR_28->vr_dev, VAR_30 + VAR_5, 2);
 VAR_31 &= ~(VAR_3 | VAR_4);
 if ((VAR_29->if_capenable & VAR_0) != 0)
  VAR_31 |= VAR_3 | VAR_4;
 FUNC_5(VAR_28->vr_dev, VAR_30 + VAR_5, VAR_31, 2);
}
