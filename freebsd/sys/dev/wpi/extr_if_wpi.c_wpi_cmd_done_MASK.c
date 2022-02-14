
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int map; } ;
struct wpi_tx_ring {scalar_t__ queued; TYPE_1__ cmd_dma; int data_dmat; struct wpi_tx_cmd* cmd; struct wpi_tx_data* data; } ;
struct wpi_tx_data {int * m; int map; } ;
struct wpi_tx_cmd {scalar_t__ data; } ;
struct wpi_softc {int sc_update_tx_ring; int sc_update_rx_ring; struct wpi_tx_ring* txq; } ;
struct wpi_rx_desc {size_t qid; size_t idx; scalar_t__ type; int len; int flags; } ;
struct wpi_pmgt_cmd {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wpi_softc*,int ,char*,size_t,size_t,int ,int ,int ) ;
 int FUNC_1 (int,char*) ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_2 (struct wpi_softc*) ;
 int FUNC_3 (struct wpi_softc*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct wpi_tx_cmd*) ;
 int FUNC_10 (scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_11(struct wpi_softc *VAR_11, struct wpi_rx_desc *VAR_12)
{
 struct wpi_tx_ring *VAR_13 = &VAR_11->txq[VAR_2];
 struct wpi_tx_data *VAR_14;
 struct wpi_tx_cmd *VAR_15;

 FUNC_0(VAR_11, VAR_4, "cmd notification qid %x idx %d flags %x "
       "type %s len %d\n", VAR_12->qid, VAR_12->idx,
       VAR_12->flags, FUNC_10(VAR_12->type),
       FUNC_7(VAR_12->len));

 if ((VAR_12->qid & VAR_6) != VAR_2)
  return;

 FUNC_1(VAR_13->queued == 0, ("ring->queued must be 0"));

 VAR_14 = &VAR_13->data[VAR_12->idx];
 VAR_15 = &VAR_13->cmd[VAR_12->idx];


 if (VAR_14->m != ((void*)0)) {
  FUNC_4(VAR_13->data_dmat, VAR_14->map,
      VAR_1);
  FUNC_5(VAR_13->data_dmat, VAR_14->map);
  FUNC_8(VAR_14->m);
  VAR_14->m = ((void*)0);
 }

 FUNC_9(VAR_15);

 if (VAR_12->type == VAR_3) {
  struct wpi_pmgt_cmd *VAR_16 = (struct wpi_pmgt_cmd *)VAR_15->data;

  FUNC_4(VAR_13->data_dmat, VAR_13->cmd_dma.map,
      VAR_0);

  FUNC_2(VAR_11);
  if (FUNC_6(VAR_16->flags) & VAR_5) {
   VAR_11->sc_update_rx_ring = VAR_8;
   VAR_11->sc_update_tx_ring = VAR_10;
  } else {
   VAR_11->sc_update_rx_ring = VAR_7;
   VAR_11->sc_update_tx_ring = VAR_9;
  }
  FUNC_3(VAR_11);
 }
}
