
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct ath_descdma {int dd_descsize; } ;
struct ath_softc {int sc_tx_nmaps; int sc_dmat; int sc_tx_desclen; struct ath_hal* sc_ah; struct ath_descdma sc_txdma; } ;
struct ath_hal {int dummy; } ;
struct ath_desc {int dummy; } ;
struct TYPE_4__ {int bfs_ndelim; int bfs_tx_queue; } ;
struct ath_buf {int bf_nseg; int bf_dmamap; struct ath_desc* bf_lastds; TYPE_2__ bf_state; int bf_descid; scalar_t__ bf_daddr; TYPE_1__* bf_segs; scalar_t__ bf_desc; } ;
typedef int segLenList ;
typedef int bufAddrList ;
struct TYPE_3__ {int ds_len; int ds_addr; } ;
typedef int HAL_DMA_ADDR ;


 int VAR_0 ;
 int FUNC_0 (struct ath_hal*,struct ath_desc*) ;
 int FUNC_1 (struct ath_hal*,struct ath_desc*,int *,int *,int ,int ,int,int,struct ath_desc*) ;
 int FUNC_2 (struct ath_hal*,struct ath_desc*) ;
 int FUNC_3 (struct ath_hal*,struct ath_desc*,int ) ;
 int FUNC_4 (struct ath_hal*,struct ath_desc*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct ath_softc*) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static void
FUNC_8(struct ath_softc *VAR_1, struct ath_desc *VAR_2,
    struct ath_buf *VAR_3, int VAR_4, int VAR_5,
    int VAR_6)
{
 struct ath_hal *VAR_7 = VAR_1->sc_ah;
 char *VAR_8;
 int VAR_9, VAR_10, VAR_11;
 HAL_DMA_ADDR VAR_12[4];
 uint32_t VAR_13[4];
 int VAR_14 = 1;
 int VAR_15 = 1;





 struct ath_descdma *VAR_16 = &VAR_1->sc_txdma;
 VAR_14 = VAR_1->sc_tx_nmaps;





 VAR_8 = (char *) VAR_3->bf_desc;
 VAR_10 = VAR_11 = 0;
 FUNC_7(VAR_12, sizeof(VAR_12));
 FUNC_7(VAR_13, sizeof(VAR_13));
 for (VAR_9 = 0; VAR_9 < VAR_3->bf_nseg; VAR_9++) {
  VAR_12[VAR_10] = VAR_3->bf_segs[VAR_9].ds_addr;
  VAR_13[VAR_10] = VAR_3->bf_segs[VAR_9].ds_len;
  VAR_10++;





  if ((VAR_9 != VAR_3->bf_nseg - 1) && (VAR_10 < VAR_14))
   continue;




  VAR_10 = 0;

  if (VAR_9 == VAR_3->bf_nseg - 1)
   FUNC_4(VAR_7, (struct ath_desc *) VAR_8, 0);
  else
   FUNC_4(VAR_7, (struct ath_desc *) VAR_8,
       VAR_3->bf_daddr + VAR_16->dd_descsize * (VAR_11 + 1));







  FUNC_1(VAR_7, (struct ath_desc *) VAR_8
   , VAR_12
   , VAR_13
   , VAR_3->bf_descid
   , VAR_3->bf_state.bfs_tx_queue
   , VAR_15
   , VAR_9 == VAR_3->bf_nseg - 1
   , (struct ath_desc *) VAR_2
  );
  if (FUNC_5(VAR_1))
   FUNC_0(VAR_1->sc_ah, (struct ath_desc *) VAR_8);





  if (VAR_6) {
   FUNC_2(VAR_1->sc_ah,
       (struct ath_desc *) VAR_8);
  } else if (VAR_4) {
   FUNC_3(VAR_1->sc_ah,
       (struct ath_desc *) VAR_8,
       VAR_3->bf_state.bfs_ndelim);
  }
  VAR_15 = 0;
  VAR_3->bf_lastds = (struct ath_desc *) VAR_8;




  VAR_8 += VAR_1->sc_tx_desclen;
  VAR_11++;




  FUNC_7(VAR_12, sizeof(VAR_12));
  FUNC_7(VAR_13, sizeof(VAR_13));
 }
 FUNC_6(VAR_1->sc_dmat, VAR_3->bf_dmamap, VAR_0);
}
