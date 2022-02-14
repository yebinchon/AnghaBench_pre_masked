
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct et_txstatus_data {int txsd_dmap; int txsd_dtag; int txsd_status; } ;
struct et_txdesc_ring {int tr_dmap; int tr_dtag; int tr_desc; } ;
struct et_txbuf_data {scalar_t__ tbd_used; scalar_t__ tbd_start_wrap; scalar_t__ tbd_start_index; } ;
struct et_softc {struct et_txstatus_data sc_tx_status; struct et_txbuf_data sc_tx_data; struct et_txdesc_ring sc_tx_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void
FUNC_2(struct et_softc *VAR_3)
{
 struct et_txdesc_ring *VAR_4;
 struct et_txbuf_data *VAR_5;
 struct et_txstatus_data *VAR_6;

 VAR_4 = &VAR_3->sc_tx_ring;
 FUNC_1(VAR_4->tr_desc, VAR_2);
 FUNC_0(VAR_4->tr_dtag, VAR_4->tr_dmap,
     VAR_1);

 VAR_5 = &VAR_3->sc_tx_data;
 VAR_5->tbd_start_index = 0;
 VAR_5->tbd_start_wrap = 0;
 VAR_5->tbd_used = 0;

 VAR_6 = &VAR_3->sc_tx_status;
 FUNC_1(VAR_6->txsd_status, sizeof(uint32_t));
 FUNC_0(VAR_6->txsd_dtag, VAR_6->txsd_dmap,
     VAR_0 | VAR_1);
}
