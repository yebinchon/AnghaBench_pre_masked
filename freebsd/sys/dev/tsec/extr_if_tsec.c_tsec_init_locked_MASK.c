
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct tsec_softc {int tsec_tx_raddr; int tsec_rx_raddr; int tsec_callout; scalar_t__ tsec_watchdog; int tsec_if_flags; scalar_t__ is_etsec; int tsec_rx_dmap; int tsec_rx_dtag; TYPE_1__* rx_data; int tsec_tx_dmap; int tsec_tx_dtag; int tsec_mii; struct ifnet* tsec_ifp; struct tsec_desc* tsec_rx_vaddr; struct tsec_desc* tsec_tx_vaddr; } ;
struct tsec_desc {int flags; scalar_t__ length; scalar_t__ bufptr; } ;
struct ifnet {int if_drv_flags; int if_capenable; int if_flags; int if_mtu; } ;
struct TYPE_2__ {scalar_t__ paddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct tsec_softc*) ;
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
 int FUNC_1 (struct tsec_softc*) ;
 int FUNC_2 (struct tsec_softc*) ;
 int FUNC_3 (struct tsec_softc*,int ,int ) ;
 int FUNC_4 (struct tsec_softc*,int ) ;
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
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int FUNC_5 (struct tsec_softc*) ;
 int FUNC_6 (struct tsec_softc*,int ,int) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int *,int ,int ,struct tsec_softc*) ;
 int VAR_67 ;
 int FUNC_9 (struct ifnet*,char*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct tsec_softc*,int) ;
 int FUNC_12 (struct tsec_softc*,int) ;
 int FUNC_13 (struct tsec_softc*,int ) ;
 int FUNC_14 (struct tsec_softc*) ;
 int FUNC_15 (struct tsec_softc*) ;
 int FUNC_16 (struct tsec_softc*) ;
 int FUNC_17 (struct tsec_softc*,int ) ;
 int FUNC_18 (struct tsec_softc*) ;
 int FUNC_19 (struct tsec_softc*) ;
 int VAR_68 ;

__attribute__((used)) static void
FUNC_20(struct tsec_softc *VAR_69)
{
 struct tsec_desc *VAR_70 = VAR_69->tsec_tx_vaddr;
 struct tsec_desc *VAR_71 = VAR_69->tsec_rx_vaddr;
 struct ifnet *VAR_72 = VAR_69->tsec_ifp;
 uint32_t VAR_73, VAR_74;
 int VAR_75;

 if (VAR_72->if_drv_flags & VAR_4)
  return;

 FUNC_0(VAR_69);
 FUNC_19(VAR_69);







 FUNC_15(VAR_69);


 FUNC_6(VAR_69, VAR_46,
     VAR_15 |
     VAR_17 |
     VAR_16 |
     VAR_18
 );
 VAR_74 = FUNC_4(VAR_69, VAR_43);
 VAR_73 = (VAR_74 & 0xffff)
     ? (VAR_11 | VAR_9)
     : VAR_8;
 FUNC_6(VAR_69, VAR_25, VAR_10 | VAR_73);


 FUNC_16(VAR_69);





 FUNC_6(VAR_69, VAR_60, 5);

 FUNC_1(VAR_69);


 FUNC_3(VAR_69, VAR_47, VAR_20);


 FUNC_3(VAR_69, VAR_47, VAR_19);


 VAR_75 = FUNC_13(VAR_69, VAR_21);

 FUNC_2(VAR_69);
 if (VAR_75) {
  FUNC_9(VAR_72, "tsec_init_locked(): Mgmt busy timeout\n");
  return;
 }


 FUNC_10(VAR_69->tsec_mii);


 FUNC_6(VAR_69, VAR_44, 0xffffffff);
 FUNC_12(VAR_69, 1);


 FUNC_6(VAR_69, VAR_35, 0);
 FUNC_6(VAR_69, VAR_36, 0);
 FUNC_6(VAR_69, VAR_37, 0);
 FUNC_6(VAR_69, VAR_38, 0);
 FUNC_6(VAR_69, VAR_39, 0);
 FUNC_6(VAR_69, VAR_40, 0);
 FUNC_6(VAR_69, VAR_41, 0);
 FUNC_6(VAR_69, VAR_42, 0);


 FUNC_6(VAR_69, VAR_27, 0);
 FUNC_6(VAR_69, VAR_28, 0);
 FUNC_6(VAR_69, VAR_29, 0);
 FUNC_6(VAR_69, VAR_30, 0);
 FUNC_6(VAR_69, VAR_31, 0);
 FUNC_6(VAR_69, VAR_32, 0);
 FUNC_6(VAR_69, VAR_33, 0);
 FUNC_6(VAR_69, VAR_34, 0);


 FUNC_6(VAR_69, VAR_58, 0);


 FUNC_11(VAR_69, 1);


 FUNC_6(VAR_69, VAR_26, VAR_12);





 FUNC_6(VAR_69, VAR_59, VAR_69->tsec_tx_raddr);
 FUNC_6(VAR_69, VAR_57, VAR_69->tsec_rx_raddr);

 for (VAR_74 = 0; VAR_74 < VAR_66; VAR_74++) {
  VAR_70[VAR_74].bufptr = 0;
  VAR_70[VAR_74].length = 0;
  VAR_70[VAR_74].flags = ((VAR_74 == VAR_66 - 1) ?
      VAR_65 : 0);
 }
 FUNC_7(VAR_69->tsec_tx_dtag, VAR_69->tsec_tx_dmap,
     VAR_0 | VAR_1);

 for (VAR_74 = 0; VAR_74 < VAR_64; VAR_74++) {
  VAR_71[VAR_74].bufptr = VAR_69->rx_data[VAR_74].paddr;
  VAR_71[VAR_74].length = 0;
  VAR_71[VAR_74].flags = VAR_61 | VAR_62 |
      ((VAR_74 == VAR_64 - 1) ? VAR_63 : 0);
 }
 FUNC_7(VAR_69->tsec_rx_dtag, VAR_69->tsec_rx_dmap,
     VAR_0 | VAR_1);


 FUNC_6(VAR_69, VAR_56, VAR_5);


 FUNC_6(VAR_69, VAR_48, VAR_22);
 FUNC_17(VAR_69, VAR_72->if_mtu);


 FUNC_6(VAR_69, VAR_23, VAR_7 | VAR_6);
 FUNC_6(VAR_69, VAR_24, 0);


 FUNC_6(VAR_69, VAR_54, 0);
 FUNC_6(VAR_69, VAR_52, 0);
 FUNC_6(VAR_69, VAR_51, 0);
 FUNC_6(VAR_69, VAR_55, 0);
 FUNC_6(VAR_69, VAR_53, 0);


 FUNC_6(VAR_69, VAR_49, 0xffffffff);
 FUNC_6(VAR_69, VAR_50, 0xffffffff);


 VAR_73 = FUNC_4(VAR_69, VAR_45);
 VAR_73 |= (VAR_13 | VAR_14);
 FUNC_6(VAR_69, VAR_45, VAR_73);


 FUNC_5(VAR_69);


 if (VAR_69->is_etsec)
  FUNC_14(VAR_69);


 FUNC_18(VAR_69);


 VAR_72->if_drv_flags |= VAR_4;
 VAR_72->if_drv_flags &= ~VAR_3;
 VAR_69->tsec_if_flags = VAR_72->if_flags;
 VAR_69->tsec_watchdog = 0;


 FUNC_8(&VAR_69->tsec_callout, VAR_67, VAR_68, VAR_69);
}
