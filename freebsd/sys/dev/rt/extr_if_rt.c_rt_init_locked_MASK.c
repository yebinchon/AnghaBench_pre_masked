
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct rt_softc {scalar_t__ gdma1_base; scalar_t__ pdma_glo_cfg; scalar_t__ pdma_rst_idx; scalar_t__* tx_base_ptr; scalar_t__* tx_max_cnt; scalar_t__* tx_ctx_idx; int rx_ring_count; scalar_t__* rx_base_ptr; scalar_t__* rx_max_cnt; scalar_t__* rx_calc_idx; scalar_t__ rt_chipid; scalar_t__ delay_int_cfg; scalar_t__ fe_int_status; int intr_enable_mask; scalar_t__ fe_int_enable; int periodic_ch; scalar_t__ periodic_round; TYPE_2__* rx_ring; TYPE_1__* tx_ring; int dev; int rt_miibus; struct ifnet* ifp; } ;
struct mii_data {int dummy; } ;
struct ifnet {int if_drv_flags; } ;
struct TYPE_4__ {int desc_phys_addr; } ;
struct TYPE_3__ {int desc_phys_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
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
 scalar_t__ VAR_13 ;
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
 scalar_t__ VAR_47 ;
 scalar_t__ VAR_48 ;
 scalar_t__ VAR_49 ;
 int VAR_50 ;
 int FUNC_1 (struct rt_softc*,int ,char*) ;
 int FUNC_2 (struct rt_softc*,scalar_t__) ;
 int FUNC_3 (struct rt_softc*) ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int FUNC_4 (struct rt_softc*,scalar_t__,int) ;
 int FUNC_5 (int *,int,int ,struct rt_softc*) ;
 struct mii_data* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 int VAR_54 ;
 int FUNC_8 (struct mii_data*) ;
 int VAR_55 ;
 int FUNC_9 (struct rt_softc*,TYPE_2__*) ;
 int FUNC_10 (struct rt_softc*,TYPE_1__*) ;
 int FUNC_11 (struct rt_softc*) ;
 scalar_t__ FUNC_12 (struct rt_softc*) ;

__attribute__((used)) static void
FUNC_13(void *VAR_56)
{
 struct rt_softc *VAR_57;
 struct ifnet *VAR_58;



 int VAR_59, VAR_60;
 uint32_t VAR_61;

 VAR_57 = VAR_56;
 VAR_58 = VAR_57->ifp;




 FUNC_1(VAR_57, VAR_50, "initializing\n");

 FUNC_3(VAR_57);






 if (VAR_57->gdma1_base != 0)
  FUNC_4(VAR_57, VAR_57->gdma1_base + VAR_13,
  (
  VAR_17 |
  VAR_22 |
  VAR_23 |
  VAR_21 |
  VAR_16 << VAR_24 |
  VAR_16 << VAR_14 |
  VAR_16 << VAR_18 |
  VAR_16 << VAR_19
  ));


 FUNC_4(VAR_57, VAR_57->pdma_glo_cfg, 0);
 FUNC_4(VAR_57, VAR_57->pdma_rst_idx, 0xffffffff);


 for (VAR_60 = 0; VAR_60 < 100; VAR_60++) {
  VAR_61 = FUNC_2(VAR_57, VAR_57->pdma_glo_cfg);
  if (!(VAR_61 & (VAR_10 | VAR_8)))
   break;
  FUNC_0(1000);
 }

 if (VAR_60 == 100) {
  FUNC_7(VAR_57->dev, "timeout waiting for DMA engine\n");
  goto fail;
 }


 VAR_61 = VAR_3 |
  VAR_7 |
  VAR_6 |
  VAR_5 |
  VAR_4;

 FUNC_4(VAR_57, VAR_57->pdma_rst_idx, VAR_61);


 for (VAR_59 = 0; VAR_59 < VAR_52; VAR_59++)
  FUNC_10(VAR_57, &VAR_57->tx_ring[VAR_59]);

 for (VAR_59 = 0; VAR_59 < VAR_52; VAR_59++) {

  FUNC_4(VAR_57, VAR_57->tx_base_ptr[VAR_59],
   VAR_57->tx_ring[VAR_59].desc_phys_addr);
  FUNC_4(VAR_57, VAR_57->tx_max_cnt[VAR_59],
   VAR_53);
  FUNC_4(VAR_57, VAR_57->tx_ctx_idx[VAR_59], 0);
 }


 for (VAR_59 = 0; VAR_59 < VAR_57->rx_ring_count; VAR_59++)
  FUNC_9(VAR_57, &VAR_57->rx_ring[VAR_59]);


 for (VAR_59 = 0; VAR_59 < VAR_57->rx_ring_count; VAR_59++) {
  FUNC_4(VAR_57, VAR_57->rx_base_ptr[VAR_59],
   VAR_57->rx_ring[VAR_59].desc_phys_addr);
  FUNC_4(VAR_57, VAR_57->rx_max_cnt[VAR_59],
   VAR_51);
  FUNC_4(VAR_57, VAR_57->rx_calc_idx[VAR_59],
   VAR_51 - 1);
 }


 VAR_61 = VAR_12 | VAR_2 | VAR_9 | VAR_11;
 if (VAR_57->rt_chipid == VAR_47 ||
     VAR_57->rt_chipid == VAR_48)
  VAR_61 |= (1<<31);
 FUNC_4(VAR_57, VAR_57->pdma_glo_cfg, VAR_61);


 FUNC_4(VAR_57, VAR_57->delay_int_cfg, 0);


 FUNC_4(VAR_57, VAR_57->fe_int_status, 0xffffffff);


 if (VAR_57->rt_chipid == VAR_49 ||
     VAR_57->rt_chipid == VAR_47 ||
     VAR_57->rt_chipid == VAR_48)
   VAR_61 = VAR_46 |
    VAR_41 |
    VAR_45 |
    VAR_44 |
    VAR_43 |
    VAR_42 |
    VAR_40 |
    VAR_39;
 else
   VAR_61 = VAR_1 |
  VAR_0 |
  VAR_38 |
  VAR_15 |
  VAR_34 |
  VAR_20 |
  VAR_37 |
  VAR_36 |
  VAR_35 |
  VAR_33 |
  VAR_27 |
  VAR_32 |
  VAR_31 |
  VAR_30 |
  VAR_29 |
  VAR_28;

 VAR_57->intr_enable_mask = VAR_61;

 FUNC_4(VAR_57, VAR_57->fe_int_enable, VAR_61);

 if (FUNC_12(VAR_57) != 0)
  goto fail;





 VAR_58->if_drv_flags &= ~VAR_25;
 VAR_58->if_drv_flags |= VAR_26;

 VAR_57->periodic_round = 0;

 FUNC_5(&VAR_57->periodic_ch, VAR_54 / 10, VAR_55, VAR_57);

 return;

fail:
 FUNC_11(VAR_57);
}
