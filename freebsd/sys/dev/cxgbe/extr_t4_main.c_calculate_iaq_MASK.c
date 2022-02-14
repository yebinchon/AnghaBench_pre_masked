
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intrs_and_queues {int intr_type; int num_vis; int ntxq; scalar_t__ ntxq_vi; int nrxq; scalar_t__ nrxq_vi; int nofldtxq; int nofldrxq; int nirq; scalar_t__ nnmrxq_vi; scalar_t__ nofldrxq_vi; scalar_t__ nnmtxq_vi; scalar_t__ nofldtxq_vi; } ;
struct TYPE_2__ {int nports; } ;
struct adapter {int dev; TYPE_1__ params; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct intrs_and_queues*,int) ;
 int FUNC_2 (int ,char*,int,int,...) ;
 scalar_t__ FUNC_3 (struct adapter*) ;
 scalar_t__ FUNC_4 (struct adapter*) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (struct intrs_and_queues*,int const) ;

__attribute__((used)) static void
FUNC_7(struct adapter *VAR_12, struct intrs_and_queues *VAR_13, int VAR_14,
    int VAR_15)
{
 int VAR_16;
 const int VAR_17 = VAR_12->params.nports;

 FUNC_0(VAR_17 > 0);
 FUNC_0(VAR_15 > 0);

 FUNC_1(VAR_13, sizeof(*VAR_13));
 VAR_13->intr_type = VAR_14;
 VAR_13->num_vis = VAR_11;
 VAR_13->ntxq = VAR_9;
 VAR_13->ntxq_vi = VAR_10;
 VAR_13->nrxq = VAR_7;
 VAR_13->nrxq_vi = VAR_8;
 FUNC_6(VAR_13, VAR_17);
 if (VAR_13->nirq <= VAR_15 &&
     (VAR_14 != VAR_0 || FUNC_5(VAR_13->nirq))) {




  goto done;
 }





 while (VAR_13->num_vis > 1) {
  VAR_13->num_vis--;
  FUNC_6(VAR_13, VAR_17);
  if (VAR_13->nirq <= VAR_15 &&
      (VAR_14 != VAR_0 || FUNC_5(VAR_13->nirq))) {
   FUNC_2(VAR_12->dev, "virtual interfaces per port "
       "reduced to %d from %d.  nrxq=%u, nofldrxq=%u, "
       "nrxq_vi=%u nofldrxq_vi=%u, nnmrxq_vi=%u.  "
       "itype %d, navail %u, nirq %d.\n",
       VAR_13->num_vis, VAR_11, VAR_13->nrxq, VAR_13->nofldrxq,
       VAR_13->nrxq_vi, VAR_13->nofldrxq_vi, VAR_13->nnmrxq_vi,
       VAR_14, VAR_15, VAR_13->nirq);
   goto done;
  }
 }




 FUNC_0(VAR_13->num_vis == 1);
 VAR_13->ntxq_vi = VAR_13->nrxq_vi = 0;
 VAR_13->nofldtxq_vi = VAR_13->nofldrxq_vi = 0;
 VAR_13->nnmtxq_vi = VAR_13->nnmrxq_vi = 0;
 if (VAR_13->num_vis != VAR_11) {
  FUNC_2(VAR_12->dev, "extra virtual interfaces disabled.  "
      "nrxq=%u, nofldrxq=%u, nrxq_vi=%u nofldrxq_vi=%u, "
      "nnmrxq_vi=%u.  itype %d, navail %u, nirq %d.\n",
      VAR_13->nrxq, VAR_13->nofldrxq, VAR_13->nrxq_vi, VAR_13->nofldrxq_vi,
      VAR_13->nnmrxq_vi, VAR_14, VAR_15, VAR_13->nirq);
 }






 do {
  if (VAR_13->nrxq > 1) {
   do {
    VAR_13->nrxq--;
   } while (!FUNC_5(VAR_13->nrxq));
  }
  if (VAR_13->nofldrxq > 1)
   VAR_13->nofldrxq >>= 1;

  VAR_16 = VAR_13->nirq;
  FUNC_6(VAR_13, VAR_17);
  if (VAR_13->nirq <= VAR_15 &&
      (VAR_14 != VAR_0 || FUNC_5(VAR_13->nirq))) {
   FUNC_2(VAR_12->dev, "running with reduced number of "
       "rx queues because of shortage of interrupts.  "
       "nrxq=%u, nofldrxq=%u.  "
       "itype %d, navail %u, nirq %d.\n", VAR_13->nrxq,
       VAR_13->nofldrxq, VAR_14, VAR_15, VAR_13->nirq);
   goto done;
  }
 } while (VAR_16 != VAR_13->nirq);


 FUNC_2(VAR_12->dev, "running with minimal number of queues.  "
     "itype %d, navail %u.\n", VAR_14, VAR_15);
 VAR_13->nirq = 1;
 FUNC_0(VAR_13->nrxq == 1);
 VAR_13->ntxq = 1;
 if (VAR_13->nofldrxq > 1)
  VAR_13->nofldtxq = 1;
done:
 FUNC_0(VAR_13->num_vis > 0);
 if (VAR_13->num_vis > 1) {
  FUNC_0(VAR_13->nrxq_vi > 0);
  FUNC_0(VAR_13->ntxq_vi > 0);
 }
 FUNC_0(VAR_13->nirq > 0);
 FUNC_0(VAR_13->nrxq > 0);
 FUNC_0(VAR_13->ntxq > 0);
 if (VAR_14 == VAR_0) {
  FUNC_0(FUNC_5(VAR_13->nirq));
 }
}
