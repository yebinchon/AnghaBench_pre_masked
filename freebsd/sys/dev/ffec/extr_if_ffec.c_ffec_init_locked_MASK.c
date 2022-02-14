
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ifnet {int if_drv_flags; } ;
struct ffec_softc {int rxdesc_ring_paddr; int txdesc_ring_paddr; int fecflags; int ffec_callout; int mii_softc; scalar_t__ txcount; scalar_t__ tx_idx_tail; scalar_t__ tx_idx_head; scalar_t__ rx_idx; int rxbuf_align; struct ifnet* ifp; } ;


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
 int FUNC_0 (struct ffec_softc*) ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_1 (struct ffec_softc*,int ) ;
 int FUNC_2 (struct ffec_softc*,int ,int) ;
 int FUNC_3 (int *,int ,int ,struct ffec_softc*) ;
 int FUNC_4 (struct ffec_softc*) ;
 int FUNC_5 (struct ffec_softc*) ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static void
FUNC_9(struct ffec_softc *VAR_32)
{
 struct ifnet *VAR_33 = VAR_32->ifp;
 uint32_t VAR_34, VAR_35, VAR_36;

 FUNC_0(VAR_32);
 VAR_34 = VAR_29 - FUNC_8(VAR_0, VAR_32->rxbuf_align);
 VAR_35 = FUNC_7(VAR_34, 0x7ff);

 if (VAR_33->if_drv_flags & VAR_28)
  return;


 FUNC_2(VAR_32, VAR_6, 0x00000000);
 FUNC_2(VAR_32, VAR_8, 0xffffffff);




 FUNC_5(VAR_32);
 FUNC_2(VAR_32, VAR_25, VAR_26 | VAR_27);





 FUNC_2(VAR_32, VAR_19, (VAR_35 << VAR_18));







 FUNC_2(VAR_32, VAR_23, 0);






 FUNC_2(VAR_32, VAR_15, 0x00010020);
 FUNC_2(VAR_32, VAR_13, VAR_35 << VAR_14);






 FUNC_2(VAR_32, VAR_5, VAR_35);
 VAR_32->rx_idx = 0;
 VAR_32->tx_idx_head = VAR_32->tx_idx_tail = 0;
 VAR_32->txcount = 0;
 FUNC_2(VAR_32, VAR_22, VAR_32->rxdesc_ring_paddr);
 FUNC_2(VAR_32, VAR_24, VAR_32->txdesc_ring_paddr);
 FUNC_2(VAR_32, VAR_6, VAR_10 | VAR_9 | VAR_7);





 VAR_36 = FUNC_1(VAR_32, VAR_12);
 FUNC_2(VAR_32, VAR_12, VAR_36 | VAR_11);
 FUNC_4(VAR_32);
 FUNC_2(VAR_32, VAR_12, VAR_36 & ~VAR_11);

 if (VAR_32->fecflags & VAR_1) {



  VAR_36 = FUNC_1(VAR_32, VAR_16);
  FUNC_2(VAR_32, VAR_16, VAR_36 | VAR_17);
 }
 VAR_36 = FUNC_1(VAR_32, VAR_4);

 VAR_36 |= VAR_2;

 VAR_36 |= VAR_3;
 FUNC_2(VAR_32, VAR_4, VAR_36);

 VAR_33->if_drv_flags |= VAR_28;





 FUNC_6(VAR_32->mii_softc);
 FUNC_3(&VAR_32->ffec_callout, VAR_31, VAR_30, VAR_32);





 FUNC_2(VAR_32, VAR_21, VAR_20);
}
