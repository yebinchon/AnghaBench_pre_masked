
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int sge_rx_paddr; int sge_tx_paddr; } ;
struct sge_softc {int sge_flags; int sge_intrcontrol; int sge_intrtimer; int sge_stat_ch; TYPE_1__ sge_ldata; int sge_dev; int sge_miibus; struct ifnet* sge_ifp; } ;
struct mii_data {int dummy; } ;
struct ifnet {int if_drv_flags; } ;


 int FUNC_0 (struct sge_softc*,scalar_t__,int ) ;
 int FUNC_1 (struct sge_softc*,int ,int) ;
 int FUNC_2 (struct sge_softc*,int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_3 (struct ifnet*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_4 (int ) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_5 (struct sge_softc*) ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_6 (int *,int ,int ,struct sge_softc*) ;
 struct mii_data* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;
 int VAR_34 ;
 int FUNC_9 (struct mii_data*) ;
 scalar_t__ FUNC_10 (struct sge_softc*) ;
 int FUNC_11 (struct sge_softc*) ;
 int FUNC_12 (struct sge_softc*) ;
 int FUNC_13 (struct sge_softc*) ;
 int FUNC_14 (struct sge_softc*) ;
 int FUNC_15 (struct sge_softc*) ;
 int VAR_35 ;

__attribute__((used)) static void
FUNC_16(struct sge_softc *VAR_36)
{
 struct ifnet *VAR_37;
 struct mii_data *VAR_38;
 uint16_t VAR_39;
 int VAR_40;

 FUNC_5(VAR_36);
 VAR_37 = VAR_36->sge_ifp;
 VAR_38 = FUNC_7(VAR_36->sge_miibus);
 if ((VAR_37->if_drv_flags & VAR_5) != 0)
  return;



 FUNC_15(VAR_36);
 FUNC_12(VAR_36);


 if (FUNC_10(VAR_36) == VAR_0) {
  FUNC_8(VAR_36->sge_dev, "no memory for Rx buffers\n");
  FUNC_15(VAR_36);
  return;
 }

 FUNC_11(VAR_36);



 FUNC_2(VAR_36, VAR_32, FUNC_4(VAR_36->sge_ldata.sge_tx_paddr));
 FUNC_2(VAR_36, VAR_16, FUNC_4(VAR_36->sge_ldata.sge_rx_paddr));

 FUNC_2(VAR_36, VAR_33, 0x60);
 FUNC_2(VAR_36, VAR_20, 0);
 FUNC_2(VAR_36, VAR_21, 0);

 FUNC_1(VAR_36, VAR_17, VAR_2 + VAR_3 +
     VAR_28);

 for (VAR_40 = 0; VAR_40 < VAR_1; VAR_40++)
  FUNC_0(VAR_36, VAR_18 + VAR_40, FUNC_3(VAR_37)[VAR_40]);

 VAR_39 = VAR_12 | VAR_11 | VAR_10;
 FUNC_1(VAR_36, VAR_19, VAR_39);
 FUNC_13(VAR_36);
 FUNC_14(VAR_36);


 if ((VAR_36->sge_flags & VAR_22) == 0)
  VAR_36->sge_flags |= VAR_26;
 VAR_36->sge_flags |= VAR_23;
 if ((VAR_36->sge_flags & VAR_25) != 0)
  FUNC_2(VAR_36, VAR_29, 0x04008001);
 else
  FUNC_2(VAR_36, VAR_29, 0x04000001);



 FUNC_2(VAR_36, VAR_6, 0x08880000);
 FUNC_2(VAR_36, VAR_8, 0xFFFFFFFF);
 FUNC_2(VAR_36, VAR_7, VAR_27);


 FUNC_2(VAR_36, VAR_30, 0x1a00 | VAR_31);
 FUNC_2(VAR_36, VAR_13, 0x1a00 | 0x000c | VAR_15 | VAR_14);

 VAR_37->if_drv_flags |= VAR_5;
 VAR_37->if_drv_flags &= ~VAR_4;

 VAR_36->sge_flags &= ~VAR_24;
 FUNC_9(VAR_38);
 FUNC_6(&VAR_36->sge_stat_ch, VAR_34, VAR_35, VAR_36);
}
