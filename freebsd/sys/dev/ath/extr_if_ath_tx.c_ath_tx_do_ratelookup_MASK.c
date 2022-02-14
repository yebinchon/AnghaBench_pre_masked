
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint8_t ;
struct ath_softc {void* sc_lastdatarix; void* sc_txrix; } ;
struct TYPE_4__ {int bfs_try0; void* bfs_txrate0; TYPE_2__* bfs_rc; scalar_t__ bfs_ismrr; int bfs_pktlen; int bfs_shpream; int bfs_doratelookup; } ;
struct ath_buf {TYPE_1__ bf_state; int bf_node; } ;
struct TYPE_5__ {int tries; void* ratecode; void* rix; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (struct ath_softc*,int ,int ,int ,void**,int*,void**) ;
 int FUNC_4 (struct ath_softc*,int ,void*,TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_6(struct ath_softc *VAR_1, struct ath_buf *VAR_2)
{
 uint8_t VAR_3, VAR_4;
 int VAR_5;

 if (! VAR_2->bf_state.bfs_doratelookup)
  return;


 FUNC_5(VAR_2->bf_state.bfs_rc, sizeof(VAR_2->bf_state.bfs_rc));

 FUNC_1(FUNC_0(VAR_2->bf_node));
 FUNC_3(VAR_1, FUNC_0(VAR_2->bf_node), VAR_2->bf_state.bfs_shpream,
     VAR_2->bf_state.bfs_pktlen, &VAR_4, &VAR_5, &VAR_3);


 VAR_2->bf_state.bfs_rc[0].rix = VAR_4;
 VAR_2->bf_state.bfs_rc[0].ratecode = VAR_3;
 VAR_2->bf_state.bfs_rc[0].tries = VAR_5;

 if (VAR_2->bf_state.bfs_ismrr && VAR_5 != VAR_0)
  FUNC_4(VAR_1, FUNC_0(VAR_2->bf_node), VAR_4,
      VAR_2->bf_state.bfs_rc);
 FUNC_2(FUNC_0(VAR_2->bf_node));

 VAR_1->sc_txrix = VAR_4;
 VAR_1->sc_lastdatarix = VAR_4;
 VAR_2->bf_state.bfs_try0 = VAR_5;
 VAR_2->bf_state.bfs_txrate0 = VAR_3;
}
