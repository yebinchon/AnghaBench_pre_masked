
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ccr_softc {int iv_aad_buf; int sg_iv_aad; void* sg_dsgl; void* sg_ulptx; void* sg_crp; int lock; scalar_t__ tx_channel_id; TYPE_2__* adapter; scalar_t__ cid; int * rxq; int * txq; int dev; } ;
struct ccr_session {int dummy; } ;
typedef scalar_t__ int32_t ;
typedef int device_t ;
struct TYPE_3__ {int * rxq; int * ctrlq; } ;
struct TYPE_4__ {struct ccr_softc* ccr_softc; TYPE_1__ sge; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_0 (struct ccr_softc*) ;
 scalar_t__ FUNC_1 (int ,int,int ) ;
 int FUNC_2 (scalar_t__,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int *,char*,int *,int ) ;
 void* FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_27)
{
 struct ccr_softc *VAR_28;
 int32_t VAR_29;

 VAR_28 = FUNC_4(VAR_27);
 VAR_28->dev = VAR_27;
 VAR_28->adapter = FUNC_4(FUNC_3(VAR_27));
 VAR_28->txq = &VAR_28->adapter->sge.ctrlq[0];
 VAR_28->rxq = &VAR_28->adapter->sge.rxq[0];
 VAR_29 = FUNC_1(VAR_27, sizeof(struct ccr_session),
     VAR_0);
 if (VAR_29 < 0) {
  FUNC_5(VAR_27, "could not get crypto driver id\n");
  return (VAR_20);
 }
 VAR_28->cid = VAR_29;
 VAR_28->adapter->ccr_softc = VAR_28;


 VAR_28->tx_channel_id = 0;

 FUNC_7(&VAR_28->lock, "ccr", ((void*)0), VAR_23);
 VAR_28->sg_crp = FUNC_8(VAR_26, VAR_25);
 VAR_28->sg_ulptx = FUNC_8(VAR_26, VAR_25);
 VAR_28->sg_dsgl = FUNC_8(VAR_22, VAR_25);
 VAR_28->iv_aad_buf = FUNC_6(VAR_21, VAR_24, VAR_25);
 VAR_28->sg_iv_aad = FUNC_9(VAR_28->iv_aad_buf, VAR_21, VAR_25);
 FUNC_0(VAR_28);

 FUNC_2(VAR_29, VAR_10, 0, 0);
 FUNC_2(VAR_29, VAR_12, 0, 0);
 FUNC_2(VAR_29, VAR_14, 0, 0);
 FUNC_2(VAR_29, VAR_16, 0, 0);
 FUNC_2(VAR_29, VAR_18, 0, 0);
 FUNC_2(VAR_29, VAR_11, 0, 0);
 FUNC_2(VAR_29, VAR_13, 0, 0);
 FUNC_2(VAR_29, VAR_15, 0, 0);
 FUNC_2(VAR_29, VAR_17, 0, 0);
 FUNC_2(VAR_29, VAR_19, 0, 0);
 FUNC_2(VAR_29, VAR_4, 0, 0);
 FUNC_2(VAR_29, VAR_7, 0, 0);
 FUNC_2(VAR_29, VAR_8, 0, 0);
 FUNC_2(VAR_29, VAR_1, 0, 0);
 FUNC_2(VAR_29, VAR_2, 0, 0);
 FUNC_2(VAR_29, VAR_3, 0, 0);
 FUNC_2(VAR_29, VAR_9, 0, 0);
 FUNC_2(VAR_29, VAR_5, 0, 0);
 FUNC_2(VAR_29, VAR_6, 0, 0);
 return (0);
}
