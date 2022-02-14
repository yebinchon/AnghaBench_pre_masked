
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct vge_softc {int vge_flags; scalar_t__ vge_pmcap; int vge_dev; struct ifnet* vge_ifp; int vge_phyaddr; } ;
struct ifnet {int if_capenable; } ;


 int VAR_0 ;
 int FUNC_0 (struct vge_softc*,int ,int ) ;
 int FUNC_1 (struct vge_softc*,int ) ;
 int FUNC_2 (struct vge_softc*,int ,int) ;
 int FUNC_3 (struct vge_softc*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (struct vge_softc*) ;
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
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_5 (int ,scalar_t__,int) ;
 int FUNC_6 (int ,scalar_t__,int,int) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (struct vge_softc*) ;
 int FUNC_9 (struct vge_softc*) ;

__attribute__((used)) static void
FUNC_10(struct vge_softc *VAR_31)
{
 struct ifnet *VAR_32;
 uint16_t VAR_33;
 uint8_t VAR_34;

 FUNC_4(VAR_31);

 if ((VAR_31->vge_flags & VAR_13) == 0) {

  FUNC_7(VAR_31->vge_dev, VAR_31->vge_phyaddr, VAR_5,
      VAR_0);
  FUNC_8(VAR_31);
  return;
 }

 VAR_32 = VAR_31->vge_ifp;


 FUNC_3(VAR_31, VAR_23, VAR_24);

 FUNC_3(VAR_31, VAR_25, 0x0F);
 FUNC_3(VAR_31, VAR_18, VAR_21 | VAR_22 |
     VAR_20);
 if ((VAR_32->if_capenable & VAR_1) != 0) {
  FUNC_9(VAR_31);
  VAR_34 = 0;
  if ((VAR_32->if_capenable & VAR_4) != 0)
   VAR_34 |= VAR_28;
  if ((VAR_32->if_capenable & VAR_2) != 0)
   VAR_34 |= VAR_27;
  FUNC_3(VAR_31, VAR_26, VAR_34);
  VAR_34 = 0;
  if ((VAR_32->if_capenable & VAR_3) != 0)
   VAR_34 |= VAR_22 | VAR_21;
  FUNC_3(VAR_31, VAR_19, VAR_34 | VAR_20);

  FUNC_8(VAR_31);
 }
 FUNC_2(VAR_31, VAR_9,
     VAR_12 | VAR_10);
 FUNC_0(VAR_31, VAR_9, VAR_11);


 FUNC_3(VAR_31, VAR_29, 0xFF);
 FUNC_3(VAR_31, VAR_30, 0xFF);

 VAR_34 = FUNC_1(VAR_31, VAR_14);
 VAR_34 |= VAR_17;
 FUNC_3(VAR_31, VAR_14, VAR_34);

 VAR_34 = FUNC_1(VAR_31, VAR_14);
 VAR_34 |= VAR_15 | VAR_16;
 FUNC_3(VAR_31, VAR_14, VAR_34);

 VAR_33 = FUNC_5(VAR_31->vge_dev, VAR_31->vge_pmcap +
     VAR_8, 2);
 VAR_33 &= ~(VAR_6 | VAR_7);
 if ((VAR_32->if_capenable & VAR_1) != 0)
  VAR_33 |= VAR_6 | VAR_7;
 FUNC_6(VAR_31->vge_dev, VAR_31->vge_pmcap + VAR_8,
     VAR_33, 2);
}
