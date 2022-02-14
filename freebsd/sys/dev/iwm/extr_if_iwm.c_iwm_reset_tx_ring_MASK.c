
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int map; int tag; int size; } ;
struct iwm_tx_ring {int qid; scalar_t__ cur; scalar_t__ queued; TYPE_1__ desc_dma; int desc; int data_dmat; struct iwm_tx_data* data; } ;
struct iwm_tx_data {int * m; int map; } ;
struct iwm_softc {int qfullmsk; scalar_t__ cmd_hold_nic_awake; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct iwm_softc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct iwm_softc *VAR_4, struct iwm_tx_ring *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  struct iwm_tx_data *VAR_7 = &VAR_5->data[VAR_6];

  if (VAR_7->m != ((void*)0)) {
   FUNC_0(VAR_5->data_dmat, VAR_7->map,
       VAR_0);
   FUNC_1(VAR_5->data_dmat, VAR_7->map);
   FUNC_3(VAR_7->m);
   VAR_7->m = ((void*)0);
  }
 }

 FUNC_4(VAR_5->desc, 0, VAR_5->desc_dma.size);
 FUNC_0(VAR_5->desc_dma.tag, VAR_5->desc_dma.map,
     VAR_1);
 VAR_4->qfullmsk &= ~(1 << VAR_5->qid);
 VAR_5->queued = 0;
 VAR_5->cur = 0;

 if (VAR_5->qid == VAR_2 && VAR_4->cmd_hold_nic_awake)
  FUNC_2(VAR_4);
}
