
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sge_params {int max_pkt_size; struct qset_params* qset; } ;
struct qset_params {int coalesce_usecs; int fl_size; int jumbo_size; int jumbo_buf_size; int* txq_size; scalar_t__ cong_thres; int rspq_size; scalar_t__ polling; } ;
struct cpl_rx_data {int dummy; } ;
struct TYPE_5__ {int nports; } ;
struct TYPE_6__ {TYPE_1__ params; int dev; } ;
typedef TYPE_2__ adapter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (int) ;

void
FUNC_4(adapter_t *VAR_19, struct sge_params *VAR_20)
{
 int VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;

 VAR_22 = FUNC_2(VAR_6 / VAR_19->params.nports, VAR_14);
 VAR_22 *= VAR_19->params.nports;

 VAR_23 = FUNC_2(VAR_15/(3*VAR_22), VAR_0);

 while (!FUNC_3(VAR_23))
  VAR_23--;

 VAR_25 = VAR_13 != -1 ? VAR_13 :
     FUNC_1(VAR_19);
 VAR_24 = FUNC_2(VAR_18/(3*VAR_22), VAR_1);
 VAR_26 = VAR_4;

 while (!FUNC_3(VAR_24))
  VAR_24--;

 if (VAR_23 < (VAR_0 / 4) || VAR_24 < (VAR_1 / 2))
  FUNC_0(VAR_19->dev,
      "Insufficient clusters and/or jumbo buffers.\n");

 VAR_20->max_pkt_size = VAR_26 - sizeof(struct cpl_rx_data);

 for (VAR_21 = 0; VAR_21 < VAR_6; ++VAR_21) {
  struct qset_params *VAR_27 = VAR_20->qset + VAR_21;

  if (VAR_19->params.nports > 2) {
   VAR_27->coalesce_usecs = 50;
  } else {



   VAR_27->coalesce_usecs = 5;

  }
  VAR_27->polling = 0;
  VAR_27->rspq_size = VAR_5;
  VAR_27->fl_size = VAR_23;
  VAR_27->jumbo_size = VAR_24;
  VAR_27->jumbo_buf_size = VAR_26;
  VAR_27->txq_size[VAR_8] = VAR_11;
  VAR_27->txq_size[VAR_9] = FUNC_1(VAR_19) ? VAR_12 : 16;
  VAR_27->txq_size[VAR_7] = VAR_10;
  VAR_27->cong_thres = 0;
 }
}
