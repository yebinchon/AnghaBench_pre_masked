
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bwi_txbuf_data {TYPE_1__* tbd_buf; } ;
struct bwi_rxbuf_data {int rbd_tmp_dmap; TYPE_2__* rbd_buf; } ;
struct bwi_softc {int sc_buf_dtag; int sc_dev; struct bwi_txbuf_data* sc_tx_bdata; int sc_parent_dtag; struct bwi_rxbuf_data sc_rx_bdata; } ;
struct TYPE_4__ {int rb_dmap; } ;
struct TYPE_3__ {int tb_dmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,int *) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct bwi_softc*,int,int ) ;
 int FUNC_4 (int ,char*,...) ;

__attribute__((used)) static int
FUNC_5(struct bwi_softc *VAR_6)
{
 struct bwi_rxbuf_data *VAR_7 = &VAR_6->sc_rx_bdata;
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;




 VAR_12 = FUNC_0(VAR_6->sc_parent_dtag,
    1,
    0,
    VAR_1,
    VAR_1,
    ((void*)0), ((void*)0),
    VAR_5,
    1,
    VAR_5,
    VAR_0,
    ((void*)0), ((void*)0),
    &VAR_6->sc_buf_dtag);
 if (VAR_12) {
  FUNC_4(VAR_6->sc_dev, "can't create mbuf DMA tag\n");
  return VAR_12;
 }

 VAR_11 = 0;




 for (VAR_8 = 0; VAR_8 < VAR_4; ++VAR_8) {
  struct bwi_txbuf_data *VAR_13 = &VAR_6->sc_tx_bdata[VAR_8];

  for (VAR_9 = 0; VAR_9 < VAR_3; ++VAR_9) {
   VAR_12 = FUNC_1(VAR_6->sc_buf_dtag, 0,
        &VAR_13->tbd_buf[VAR_9].tb_dmap);
   if (VAR_12) {
    FUNC_4(VAR_6->sc_dev, "can't create "
           "%dth tbd, %dth DMA map\n", VAR_8, VAR_9);

    VAR_11 = VAR_8;
    for (VAR_10 = 0; VAR_10 < VAR_9; ++VAR_10) {
     FUNC_2(VAR_6->sc_buf_dtag,
      VAR_13->tbd_buf[VAR_10].tb_dmap);
    }
    goto fail;
   }
  }
 }
 VAR_11 = VAR_4;




 VAR_12 = FUNC_1(VAR_6->sc_buf_dtag, 0,
      &VAR_7->rbd_tmp_dmap);
 if (VAR_12) {
  FUNC_4(VAR_6->sc_dev,
         "can't create spare RX buf DMA map\n");
  goto fail;
 }

 for (VAR_9 = 0; VAR_9 < VAR_2; ++VAR_9) {
  VAR_12 = FUNC_1(VAR_6->sc_buf_dtag, 0,
       &VAR_7->rbd_buf[VAR_9].rb_dmap);
  if (VAR_12) {
   FUNC_4(VAR_6->sc_dev, "can't create %dth "
          "RX buf DMA map\n", VAR_9);

   for (VAR_10 = 0; VAR_10 < VAR_9; ++VAR_10) {
    FUNC_2(VAR_6->sc_buf_dtag,
     VAR_7->rbd_buf[VAR_9].rb_dmap);
   }
   FUNC_2(VAR_6->sc_buf_dtag,
        VAR_7->rbd_tmp_dmap);
   goto fail;
  }
 }

 return 0;
fail:
 FUNC_3(VAR_6, VAR_11, 0);
 return VAR_12;
}
