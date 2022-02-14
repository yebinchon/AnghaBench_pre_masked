
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwn_tx_ring {int * desc; int data_dmat; struct iwn_tx_data* data; } ;
struct iwn_tx_data {int * m; int map; } ;
struct iwn_softc {int sc_flags; struct iwn_tx_ring* txq; } ;
struct iwn_rx_desc {int qid; size_t idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct iwn_softc *VAR_5, struct iwn_rx_desc *VAR_6)
{
 struct iwn_tx_ring *VAR_7;
 struct iwn_tx_data *VAR_8;
 int VAR_9;

 if (VAR_5->sc_flags & VAR_2)
  VAR_9 = VAR_3;
 else
  VAR_9 = VAR_1;

 if ((VAR_6->qid & VAR_4) != VAR_9)
  return;

 VAR_7 = &VAR_5->txq[VAR_9];
 VAR_8 = &VAR_7->data[VAR_6->idx];


 if (VAR_8->m != ((void*)0)) {
  FUNC_0(VAR_7->data_dmat, VAR_8->map,
      VAR_0);
  FUNC_1(VAR_7->data_dmat, VAR_8->map);
  FUNC_2(VAR_8->m);
  VAR_8->m = ((void*)0);
 }
 FUNC_3(&VAR_7->desc[VAR_6->idx]);
}
