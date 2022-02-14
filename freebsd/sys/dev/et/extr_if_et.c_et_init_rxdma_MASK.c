
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct et_rxstat_ring {scalar_t__ rsr_wrap; scalar_t__ rsr_index; int rsr_paddr; } ;
struct et_rxstatus_data {int rxsd_paddr; } ;
struct et_softc {int sc_rx_intr_npkts; int sc_rx_intr_delay; struct et_rxdesc_ring* sc_rx_ring; struct et_rxstat_ring sc_rxstat_ring; struct et_rxstatus_data sc_rx_status; int ifp; } ;
struct et_rxdesc_ring {int rr_wrap; scalar_t__ rr_index; int rr_paddr; } ;


 int FUNC_0 (struct et_softc*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
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
 int FUNC_3 (struct et_softc*) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int
FUNC_5(struct et_softc *VAR_23)
{
 struct et_rxstatus_data *VAR_24;
 struct et_rxstat_ring *VAR_25;
 struct et_rxdesc_ring *VAR_26;
 int VAR_27;

 VAR_27 = FUNC_3(VAR_23);
 if (VAR_27) {
  FUNC_4(VAR_23->ifp, "can't init RX DMA engine\n");
  return (VAR_27);
 }




 VAR_24 = &VAR_23->sc_rx_status;
 FUNC_0(VAR_23, VAR_21, FUNC_1(VAR_24->rxsd_paddr));
 FUNC_0(VAR_23, VAR_22, FUNC_2(VAR_24->rxsd_paddr));




 VAR_25 = &VAR_23->sc_rxstat_ring;
 FUNC_0(VAR_23, VAR_1, FUNC_1(VAR_25->rsr_paddr));
 FUNC_0(VAR_23, VAR_2, FUNC_2(VAR_25->rsr_paddr));
 FUNC_0(VAR_23, VAR_0, VAR_8 - 1);
 FUNC_0(VAR_23, VAR_4, 0);
 FUNC_0(VAR_23, VAR_3, ((VAR_8 * 15) / 100) - 1);


 VAR_25->rsr_index = 0;
 VAR_25->rsr_wrap = 0;




 VAR_26 = &VAR_23->sc_rx_ring[1];
 FUNC_0(VAR_23, VAR_16, FUNC_1(VAR_26->rr_paddr));
 FUNC_0(VAR_23, VAR_17, FUNC_2(VAR_26->rr_paddr));
 FUNC_0(VAR_23, VAR_15, VAR_7 - 1);
 FUNC_0(VAR_23, VAR_19, VAR_20);
 FUNC_0(VAR_23, VAR_18, ((VAR_7 * 15) / 100) - 1);


 VAR_26->rr_index = 0;
 VAR_26->rr_wrap = 1;




 VAR_26 = &VAR_23->sc_rx_ring[0];
 FUNC_0(VAR_23, VAR_10, FUNC_1(VAR_26->rr_paddr));
 FUNC_0(VAR_23, VAR_11, FUNC_2(VAR_26->rr_paddr));
 FUNC_0(VAR_23, VAR_9, VAR_7 - 1);
 FUNC_0(VAR_23, VAR_13, VAR_14);
 FUNC_0(VAR_23, VAR_12, ((VAR_7 * 15) / 100) - 1);


 VAR_26->rr_index = 0;
 VAR_26->rr_wrap = 1;




 FUNC_0(VAR_23, VAR_6, VAR_23->sc_rx_intr_npkts);
 FUNC_0(VAR_23, VAR_5, VAR_23->sc_rx_intr_delay);

 return (0);
}
