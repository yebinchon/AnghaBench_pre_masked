
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint16_t ;
struct ath_softc {size_t sc_protrix; int sc_mrrprot; int sc_ah; TYPE_4__* sc_currates; } ;
struct TYPE_9__ {int bfs_txflags; size_t bfs_ctsrate; scalar_t__ bfs_ctsrate0; TYPE_2__* bfs_rc; int bfs_try0; scalar_t__ bfs_ismrr; int bfs_ctsduration; int bfs_pktlen; int bfs_shpream; scalar_t__ bfs_doprot; } ;
struct ath_buf {TYPE_3__ bf_state; } ;
struct TYPE_10__ {TYPE_1__* info; } ;
struct TYPE_8__ {size_t rix; int tries; } ;
struct TYPE_7__ {size_t controlRate; } ;
typedef TYPE_4__ HAL_RATE_TABLE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,size_t,size_t,int ,int ,TYPE_4__ const*,int) ;
 size_t FUNC_1 (struct ath_softc*,scalar_t__) ;
 size_t FUNC_2 (int ,TYPE_4__ const*,size_t,int ) ;
 int FUNC_3 (struct ath_softc*) ;

__attribute__((used)) static void
FUNC_4(struct ath_softc *VAR_3, struct ath_buf *VAR_4)
{
 uint16_t VAR_5 = 0;
 uint8_t VAR_6 = 0;
 uint8_t VAR_7 = VAR_4->bf_state.bfs_rc[0].rix;
 uint8_t VAR_8 = 0;
 const HAL_RATE_TABLE *VAR_9 = VAR_3->sc_currates;




 if ((VAR_4->bf_state.bfs_txflags &
     (VAR_2 | VAR_1)) == 0) {

  VAR_4->bf_state.bfs_ctsrate = 0;
  VAR_4->bf_state.bfs_ctsduration = 0;
  return;
 }





 if (VAR_4->bf_state.bfs_doprot)
  VAR_7 = VAR_3->sc_protrix;
 else
  VAR_7 = VAR_4->bf_state.bfs_rc[0].rix;





 if (VAR_4->bf_state.bfs_ctsrate0 != 0)
  VAR_8 = FUNC_1(VAR_3, VAR_4->bf_state.bfs_ctsrate0);
 else

  VAR_8 = VAR_9->info[VAR_7].controlRate;


 VAR_6 = FUNC_2(VAR_3->sc_ah, VAR_9, VAR_8,
     VAR_4->bf_state.bfs_shpream);


 if (! FUNC_3(VAR_3))
  VAR_5 = FUNC_0(VAR_3->sc_ah, VAR_7, VAR_8,
      VAR_4->bf_state.bfs_shpream, VAR_4->bf_state.bfs_pktlen,
      VAR_9, VAR_4->bf_state.bfs_txflags);


 VAR_4->bf_state.bfs_ctsrate = VAR_6;
 VAR_4->bf_state.bfs_ctsduration = VAR_5;




 if (!VAR_3->sc_mrrprot) {
  VAR_4->bf_state.bfs_ismrr = 0;
  VAR_4->bf_state.bfs_try0 =
      VAR_4->bf_state.bfs_rc[0].tries = VAR_0;
 }
}
