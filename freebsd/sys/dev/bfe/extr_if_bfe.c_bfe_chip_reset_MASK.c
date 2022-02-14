
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct bfe_softc {int bfe_tx_dma; int bfe_rx_dma; } ;


 int FUNC_0 (struct bfe_softc*,int ,int) ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (struct bfe_softc*) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (struct bfe_softc*,int ,int) ;
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
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_3 (struct bfe_softc*,int ) ;
 int FUNC_4 (struct bfe_softc*,int ,int) ;
 int FUNC_5 (int) ;
 int VAR_34 ;
 int FUNC_6 (struct bfe_softc*) ;
 int FUNC_7 (struct bfe_softc*) ;
 int FUNC_8 (struct bfe_softc*,int ) ;
 int FUNC_9 (struct bfe_softc*) ;
 int FUNC_10 (struct bfe_softc*) ;
 int FUNC_11 (struct bfe_softc*,int ,int,int,int) ;

__attribute__((used)) static void
FUNC_12(struct bfe_softc *VAR_35)
{
 u_int32_t VAR_36;

 FUNC_1(VAR_35);


 FUNC_8(VAR_35, VAR_14);


 VAR_36 = FUNC_3(VAR_35, VAR_28) &
     (VAR_23 | VAR_22 | VAR_0);
 if (VAR_36 == VAR_0) {

  FUNC_4(VAR_35, VAR_21, 0);
  FUNC_4(VAR_35, VAR_10, VAR_11);
  FUNC_11(VAR_35, VAR_10, VAR_11, 100, 1);
  FUNC_4(VAR_35, VAR_9, 0);
  if (FUNC_3(VAR_35, VAR_7) & VAR_29)
   FUNC_11(VAR_35, VAR_7, VAR_30,
       100, 0);
  FUNC_4(VAR_35, VAR_6, 0);
 }

 FUNC_7(VAR_35);
 FUNC_6(VAR_35);
 FUNC_4(VAR_35, VAR_19, 0x8d);


 VAR_36 = FUNC_3(VAR_35, VAR_4);
 if (!(VAR_36 & VAR_15))
  FUNC_4(VAR_35, VAR_10, VAR_12);
 else if (FUNC_3(VAR_35, VAR_4) & VAR_13) {
  FUNC_0(VAR_35, VAR_4, ~VAR_13);
  FUNC_5(100);
 }


 FUNC_2(VAR_35, VAR_18, VAR_1 | VAR_2);


 FUNC_0(VAR_35, VAR_18, ~VAR_3);

 FUNC_4(VAR_35, VAR_21, ((1 << VAR_17) &
    VAR_16));





 FUNC_2(VAR_35, VAR_21, 0);


 FUNC_4(VAR_35, VAR_24, VAR_34+32);
 FUNC_4(VAR_35, VAR_31, VAR_34+32);


 FUNC_4(VAR_35, VAR_33, 56);





 FUNC_4(VAR_35, VAR_9, VAR_32);
 FUNC_4(VAR_35, VAR_8, VAR_35->bfe_tx_dma + VAR_20);

 FUNC_4(VAR_35, VAR_6, (VAR_27 << VAR_26) |
   VAR_25);
 FUNC_4(VAR_35, VAR_5, VAR_35->bfe_rx_dma + VAR_20);

 FUNC_9(VAR_35);
 FUNC_10(VAR_35);
}
