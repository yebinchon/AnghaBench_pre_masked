
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct iwm_tx_ring {scalar_t__ queued; int data_dmat; struct iwm_tx_data* data; } ;
struct iwm_tx_data {int done; struct iwm_node* in; struct mbuf* m; int map; } ;
struct iwm_softc {int qfullmsk; scalar_t__ sc_tx_timer; struct iwm_tx_ring* txq; } ;
struct iwm_cmd_header {int idx; int qid; } ;
struct iwm_rx_packet {struct iwm_cmd_header hdr; } ;
struct iwm_node {int in_ni; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwm_softc*,int ,char*,struct iwm_tx_data*,struct iwm_node*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,struct mbuf*,int) ;
 int FUNC_5 (struct iwm_softc*,struct iwm_rx_packet*,struct iwm_node*) ;
 int FUNC_6 (struct iwm_softc*) ;

__attribute__((used)) static void
FUNC_7(struct iwm_softc *VAR_3, struct iwm_rx_packet *VAR_4)
{
 struct iwm_cmd_header *VAR_5;
 struct iwm_tx_ring *VAR_6;
 struct iwm_tx_data *VAR_7;
 struct iwm_node *VAR_8;
 struct mbuf *VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13;

 VAR_5 = &VAR_4->hdr;
 VAR_10 = VAR_5->idx;
 VAR_11 = VAR_5->qid;

 VAR_6 = &VAR_3->txq[VAR_11];
 VAR_7 = &VAR_6->data[VAR_10];
 VAR_8 = VAR_7->in;
 VAR_9 = VAR_7->m;

 FUNC_1(VAR_7->done == 0, ("txd not done"));
 FUNC_1(VAR_7->in != ((void*)0), ("txd without node"));
 FUNC_1(VAR_7->m != ((void*)0), ("txd without mbuf"));

 VAR_3->sc_tx_timer = 0;

 VAR_13 = FUNC_5(VAR_3, VAR_4, VAR_8);


 FUNC_2(VAR_6->data_dmat, VAR_7->map, VAR_0);
 FUNC_3(VAR_6->data_dmat, VAR_7->map);

 FUNC_0(VAR_3, VAR_1,
     "free txd %p, in %p\n", VAR_7, VAR_7->in);
 VAR_7->done = 1;
 VAR_7->m = ((void*)0);
 VAR_7->in = ((void*)0);

 FUNC_4(&VAR_8->in_ni, VAR_9, VAR_13);

 VAR_12 = 1 << VAR_11;
 if (--VAR_6->queued < VAR_2 && (VAR_3->qfullmsk & VAR_12) != 0) {
  VAR_3->qfullmsk &= ~VAR_12;
  if (VAR_3->qfullmsk == 0)
   FUNC_6(VAR_3);
 }
}
