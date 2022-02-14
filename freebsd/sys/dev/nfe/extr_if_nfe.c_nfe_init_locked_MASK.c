
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int physaddr; } ;
struct TYPE_5__ {int physaddr; } ;
struct TYPE_6__ {int jphysaddr; } ;
struct nfe_softc {int nfe_framesize; int nfe_flags; int rxtxctl; int mii_phyaddr; int nfe_stat_ch; scalar_t__ nfe_link; TYPE_1__ txq; TYPE_2__ rxq; TYPE_3__ jrxq; int nfe_dev; int nfe_miibus; int nfe_ifp; } ;
struct mii_data {int dummy; } ;
typedef int if_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct nfe_softc*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_4 (struct nfe_softc*,int ) ;
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
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int FUNC_5 (struct nfe_softc*,int ,int) ;
 int FUNC_6 (int *,int ,int ,struct nfe_softc*) ;
 struct mii_data* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;
 int VAR_56 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int,int ) ;
 int FUNC_14 (struct mii_data*) ;
 int FUNC_15 (struct nfe_softc*) ;
 int FUNC_16 (struct nfe_softc*) ;
 int FUNC_17 (struct nfe_softc*,TYPE_3__*) ;
 int FUNC_18 (struct nfe_softc*,TYPE_2__*) ;
 int FUNC_19 (struct nfe_softc*,TYPE_1__*) ;
 int FUNC_20 (struct nfe_softc*) ;
 int FUNC_21 (struct nfe_softc*,int ) ;
 int FUNC_22 (struct nfe_softc*) ;
 int FUNC_23 (struct nfe_softc*) ;
 int FUNC_24 (int ) ;
 int VAR_57 ;

__attribute__((used)) static void
FUNC_25(void *VAR_58)
{
 struct nfe_softc *VAR_59 = VAR_58;
 if_t VAR_60 = VAR_59->nfe_ifp;
 struct mii_data *VAR_61;
 uint32_t VAR_62;
 int VAR_63;

 FUNC_3(VAR_59);

 VAR_61 = FUNC_7(VAR_59->nfe_miibus);

 if (FUNC_10(VAR_60) & VAR_5)
  return;

 FUNC_24(VAR_60);

 VAR_59->nfe_framesize = FUNC_12(VAR_60) + VAR_33;

 FUNC_19(VAR_59, &VAR_59->txq);
 if (VAR_59->nfe_framesize > (VAR_6 - VAR_0))
  VAR_63 = FUNC_17(VAR_59, &VAR_59->jrxq);
 else
  VAR_63 = FUNC_18(VAR_59, &VAR_59->rxq);
 if (VAR_63 != 0) {
  FUNC_8(VAR_59->nfe_dev,
      "initialization failed: no memory for rx buffers\n");
  FUNC_24(VAR_60);
  return;
 }

 VAR_62 = 0;
 if ((VAR_59->nfe_flags & VAR_8) != 0)
  VAR_62 |= VAR_12;
 FUNC_5(VAR_59, VAR_52, VAR_62);
 FUNC_5(VAR_59, VAR_42, 0);

 if ((VAR_59->nfe_flags & VAR_45) != 0)
  FUNC_5(VAR_59, VAR_46, VAR_47);

 VAR_59->rxtxctl = VAR_24;
 if (VAR_59->nfe_flags & VAR_7)
  VAR_59->rxtxctl |= VAR_29;
 else if (VAR_59->nfe_flags & VAR_11)
  VAR_59->rxtxctl |= VAR_28;

 if ((FUNC_9(VAR_60) & VAR_2) != 0)
  VAR_59->rxtxctl |= VAR_27;
 if ((FUNC_9(VAR_60) & VAR_3) != 0)
  VAR_59->rxtxctl |= VAR_30 | VAR_31;

 FUNC_5(VAR_59, VAR_25, VAR_26 | VAR_59->rxtxctl);
 FUNC_0(10);
 FUNC_5(VAR_59, VAR_25, VAR_59->rxtxctl);

 if ((FUNC_9(VAR_60) & VAR_3) != 0)
  FUNC_5(VAR_59, VAR_53, VAR_54);
 else
  FUNC_5(VAR_59, VAR_53, 0);

 FUNC_5(VAR_59, VAR_41, 0);


 FUNC_21(VAR_59, FUNC_11(VAR_60));


 if (VAR_59->nfe_framesize > VAR_6 - VAR_0) {
  FUNC_5(VAR_59, VAR_34,
      FUNC_1(VAR_59->jrxq.jphysaddr));
  FUNC_5(VAR_59, VAR_35,
      FUNC_2(VAR_59->jrxq.jphysaddr));
 } else {
  FUNC_5(VAR_59, VAR_34,
      FUNC_1(VAR_59->rxq.physaddr));
  FUNC_5(VAR_59, VAR_35,
      FUNC_2(VAR_59->rxq.physaddr));
 }
 FUNC_5(VAR_59, VAR_48, FUNC_1(VAR_59->txq.physaddr));
 FUNC_5(VAR_59, VAR_49, FUNC_2(VAR_59->txq.physaddr));

 FUNC_5(VAR_59, VAR_21,
     (VAR_36 - 1) << 16 |
     (VAR_50 - 1));

 FUNC_5(VAR_59, VAR_22, VAR_59->nfe_framesize);


 VAR_62 = FUNC_4(VAR_59, VAR_14);
 if ((VAR_62 & VAR_16) == 0)
  FUNC_5(VAR_59, VAR_14, VAR_62 | VAR_16);
 FUNC_0(10);
 VAR_62 = FUNC_4(VAR_59, VAR_14);
 FUNC_5(VAR_59, VAR_14, VAR_62 | VAR_15);



 FUNC_5(VAR_59, VAR_9, VAR_10);





 FUNC_5(VAR_59, VAR_38, VAR_17);
 FUNC_5(VAR_59, VAR_39, VAR_18);
 FUNC_5(VAR_59, VAR_41, VAR_20);


 FUNC_5(VAR_59, VAR_42, VAR_59->mii_phyaddr << 24 | VAR_43);

 FUNC_5(VAR_59, VAR_40, VAR_19);

 FUNC_5(VAR_59, VAR_55, 0);

 VAR_59->rxtxctl &= ~VAR_24;
 FUNC_5(VAR_59, VAR_25, VAR_59->rxtxctl);
 FUNC_0(10);
 FUNC_5(VAR_59, VAR_25, VAR_23 | VAR_59->rxtxctl);


 FUNC_22(VAR_59);


 FUNC_5(VAR_59, VAR_32, VAR_37);


 FUNC_5(VAR_59, VAR_44, VAR_51);

 FUNC_5(VAR_59, VAR_13, 0xf);


 FUNC_23(VAR_59);






 FUNC_20(VAR_59);
 FUNC_16(VAR_59);

 FUNC_13(VAR_60, VAR_5, 0);
 FUNC_13(VAR_60, 0, VAR_4);

 VAR_59->nfe_link = 0;
 FUNC_14(VAR_61);

 FUNC_6(&VAR_59->nfe_stat_ch, VAR_56, VAR_57, VAR_59);
}
