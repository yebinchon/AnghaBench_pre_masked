
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct wrqe {int wr_len; int * wr; struct sge_wrq* wrq; } ;
struct sge_eq {size_t pidx; size_t dbidx; size_t cidx; int sidx; int equiq; struct fw_eth_tx_pkt_wr* desc; } ;
struct sge_wrq {scalar_t__ nwr_pending; int ndesc_needed; int wr_list; int tx_wrs_copied; int incomplete_wrs; struct sge_eq eq; } ;
struct fw_eth_tx_pkt_wr {int equiq_to_len16; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sge_eq*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (size_t,size_t,int) ;
 int FUNC_2 (int) ;
 struct wrqe* FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int *,struct fw_eth_tx_pkt_wr*,int) ;
 int FUNC_9 (struct wrqe*) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (int) ;
 int VAR_3 ;
 size_t FUNC_12 (struct sge_eq*) ;
 int FUNC_13 (struct adapter*,struct sge_eq*,int) ;

__attribute__((used)) static void
FUNC_14(struct adapter *VAR_4, struct sge_wrq *VAR_5)
{
 struct sge_eq *VAR_6 = &VAR_5->eq;
 u_int VAR_7, VAR_8;
 u_int VAR_9;
 struct wrqe *VAR_10;
 struct fw_eth_tx_pkt_wr *VAR_11;

 FUNC_0(VAR_6);
 FUNC_2(FUNC_5(&VAR_5->incomplete_wrs));
 VAR_10 = FUNC_3(&VAR_5->wr_list);
 FUNC_2(VAR_10 != ((void*)0));
 FUNC_2(VAR_6->pidx == VAR_6->dbidx);
 VAR_8 = 0;

 do {
  VAR_6->cidx = FUNC_12(VAR_6);
  if (VAR_6->pidx == VAR_6->cidx)
   VAR_7 = VAR_6->sidx - 1;
  else
   VAR_7 = FUNC_1(VAR_6->cidx, VAR_6->pidx, VAR_6->sidx) - 1;

  FUNC_2(VAR_10->wrq == VAR_5);
  VAR_9 = FUNC_10(VAR_10->wr_len, VAR_0);
  if (VAR_7 < VAR_9)
   break;

  VAR_11 = (void *)&VAR_6->desc[VAR_6->pidx];
  if (FUNC_6(VAR_6->sidx - VAR_6->pidx > VAR_9)) {

   FUNC_8(&VAR_10->wr[0], VAR_11, VAR_10->wr_len);
   VAR_6->pidx += VAR_9;
  } else {
   int VAR_12 = (VAR_6->sidx - VAR_6->pidx) * VAR_0;

   FUNC_8(&VAR_10->wr[0], VAR_11, VAR_12);
   if (VAR_10->wr_len > VAR_12) {
    FUNC_8(&VAR_10->wr[VAR_12], &VAR_6->desc[0],
        VAR_10->wr_len - VAR_12);
   }
   VAR_6->pidx = VAR_9 - (VAR_6->sidx - VAR_6->pidx);
  }
  VAR_5->tx_wrs_copied++;

  if (VAR_7 < VAR_6->sidx / 4 &&
      FUNC_7(&VAR_6->equiq, 0, 1)) {





   VAR_11->equiq_to_len16 |= FUNC_11(VAR_2 |
       VAR_1);
  }

  VAR_8 += VAR_9;
  if (VAR_8 >= 16) {
   FUNC_13(VAR_4, VAR_6, VAR_8);
   VAR_8 = 0;
  }

  FUNC_4(&VAR_5->wr_list, VAR_3);
  FUNC_9(VAR_10);
  FUNC_2(VAR_5->nwr_pending > 0);
  VAR_5->nwr_pending--;
  FUNC_2(VAR_5->ndesc_needed >= VAR_9);
  VAR_5->ndesc_needed -= VAR_9;
 } while ((VAR_10 = FUNC_3(&VAR_5->wr_list)) != ((void*)0));

 if (VAR_8)
  FUNC_13(VAR_4, VAR_6, VAR_8);
}
