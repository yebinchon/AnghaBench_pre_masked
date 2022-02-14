
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct TYPE_10__ {int mutex; } ;
struct TYPE_7__ {int q_len; int nbufs; int nhdl; int eqd; scalar_t__ wq_type; } ;
struct oce_wq {int br; TYPE_6__ tx_lock; TYPE_6__ tx_compl_lock; int ring; TYPE_2__* pckts; int tag; void* parent; TYPE_1__ cfg; } ;
struct TYPE_9__ {int dev; } ;
struct TYPE_8__ {int map; } ;
typedef TYPE_3__* POCE_SOFTC ;


 int VAR_0 ;
 int FUNC_0 (TYPE_6__*,char*) ;
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
 int FUNC_1 (int,int ,int ,int *) ;
 int FUNC_2 (int ,int,int ,int ,int ,int *,int *,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,...) ;
 struct oce_wq* FUNC_6 (int,int ,int) ;
 int FUNC_7 (TYPE_3__*,int,int ) ;
 int FUNC_8 (struct oce_wq*) ;

__attribute__((used)) static struct
oce_wq *FUNC_9(POCE_SOFTC VAR_11, uint32_t VAR_12, uint32_t VAR_13)
{
 struct oce_wq *VAR_14;
 int VAR_15 = 0, VAR_16;


 if (VAR_12 < 256 || VAR_12 > 2048) {
  FUNC_5(VAR_11->dev,
     "Invalid q length. Must be "
     "[256, 2000]: 0x%x\n", VAR_12);
  return ((void*)0);
 }


 VAR_14 = FUNC_6(sizeof(struct oce_wq), VAR_1, VAR_2 | VAR_4);
 if (!VAR_14)
  return ((void*)0);


 VAR_14->cfg.q_len = VAR_12;
 VAR_14->cfg.wq_type = (uint8_t) VAR_13;
 VAR_14->cfg.eqd = VAR_6;
 VAR_14->cfg.nbufs = 2 * VAR_14->cfg.q_len;
 VAR_14->cfg.nhdl = 2 * VAR_14->cfg.q_len;

 VAR_14->parent = (void *)VAR_11;

 VAR_15 = FUNC_2(FUNC_4(VAR_11->dev),
    1, 0,
    VAR_0,
    VAR_0,
    ((void*)0), ((void*)0),
    VAR_8,
    VAR_7,
    VAR_10, 0, ((void*)0), ((void*)0), &VAR_14->tag);

 if (VAR_15)
  goto free_wq;


 for (VAR_16 = 0; VAR_16 < VAR_9; VAR_16++) {
  VAR_15 = FUNC_3(VAR_14->tag, 0, &VAR_14->pckts[VAR_16].map);
  if (VAR_15)
   goto free_wq;
 }

 VAR_14->ring = FUNC_7(VAR_11, VAR_12, VAR_5);
 if (!VAR_14->ring)
  goto free_wq;


 FUNC_0(&VAR_14->tx_lock, "TX_lock");
 FUNC_0(&VAR_14->tx_compl_lock, "WQ_HANDLER_LOCK");
 return VAR_14;


free_wq:
 FUNC_5(VAR_11->dev, "Create WQ failed\n");
 FUNC_8(VAR_14);
 return ((void*)0);
}
