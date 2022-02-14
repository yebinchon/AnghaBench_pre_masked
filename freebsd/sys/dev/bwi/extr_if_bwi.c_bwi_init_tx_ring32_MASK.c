
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bwi_txbuf_data {scalar_t__ tbd_used; scalar_t__ tbd_idx; } ;
struct bwi_softc {int sc_txring_dtag; struct bwi_txbuf_data* sc_tx_bdata; struct bwi_ring_data* sc_tx_rdata; } ;
struct bwi_ring_data {scalar_t__ rdata_txrx_ctrl; int rdata_paddr; int rdata_dmap; int rdata_desc; } ;
struct bwi_desc32 {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct bwi_softc*,scalar_t__,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int
FUNC_6(struct bwi_softc *VAR_10, int VAR_11)
{
 struct bwi_ring_data *VAR_12;
 struct bwi_txbuf_data *VAR_13;
 uint32_t VAR_14, VAR_15, VAR_16;

 FUNC_1(VAR_11 < VAR_9, ("ring_idx %d", VAR_11));
 VAR_12 = &VAR_10->sc_tx_rdata[VAR_11];
 VAR_13 = &VAR_10->sc_tx_bdata[VAR_11];

 VAR_13->tbd_idx = 0;
 VAR_13->tbd_used = 0;

 FUNC_5(VAR_12->rdata_desc, sizeof(struct bwi_desc32) * VAR_8);
 FUNC_4(VAR_10->sc_txring_dtag, VAR_12->rdata_dmap,
   VAR_0);

 VAR_16 = FUNC_3(VAR_12->rdata_paddr, VAR_5);
 VAR_15 = FUNC_3(VAR_12->rdata_paddr, VAR_6);

 VAR_14 = FUNC_2(VAR_16, VAR_5) |
       FUNC_2(VAR_7,
         VAR_6);
 FUNC_0(VAR_10, VAR_12->rdata_txrx_ctrl + VAR_2, VAR_14);

 VAR_14 = FUNC_2(VAR_15, VAR_3) |
       VAR_4;
 FUNC_0(VAR_10, VAR_12->rdata_txrx_ctrl + VAR_1, VAR_14);

 return 0;
}
