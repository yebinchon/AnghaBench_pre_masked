
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct et_txstatus_data {int txsd_paddr; } ;
struct et_txdesc_ring {scalar_t__ tr_ready_wrap; scalar_t__ tr_ready_index; int tr_paddr; } ;
struct et_softc {struct et_txstatus_data sc_tx_status; struct et_txdesc_ring sc_tx_ring; int ifp; } ;


 int FUNC_0 (struct et_softc*,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct et_softc*) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int
FUNC_5(struct et_softc *VAR_7)
{
 struct et_txdesc_ring *VAR_8;
 struct et_txstatus_data *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_3(VAR_7);
 if (VAR_10) {
  FUNC_4(VAR_7->ifp, "can't init TX DMA engine\n");
  return (VAR_10);
 }




 VAR_8 = &VAR_7->sc_tx_ring;
 FUNC_0(VAR_7, VAR_3, FUNC_1(VAR_8->tr_paddr));
 FUNC_0(VAR_7, VAR_4, FUNC_2(VAR_8->tr_paddr));
 FUNC_0(VAR_7, VAR_2, VAR_0 - 1);




 VAR_9 = &VAR_7->sc_tx_status;
 FUNC_0(VAR_7, VAR_5, FUNC_1(VAR_9->txsd_paddr));
 FUNC_0(VAR_7, VAR_6, FUNC_2(VAR_9->txsd_paddr));

 FUNC_0(VAR_7, VAR_1, 0);


 VAR_8->tr_ready_index = 0;
 VAR_8->tr_ready_wrap = 0;

 return (0);
}
