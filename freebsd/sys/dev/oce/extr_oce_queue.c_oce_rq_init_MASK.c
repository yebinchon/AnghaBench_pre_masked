
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int q_len; int frag_size; int mtu; int is_rss_queue; scalar_t__ eqd; } ;
struct oce_rq {int rx_lock; int ring; TYPE_2__* pckts; int tag; void* parent; scalar_t__ pending; TYPE_1__ cfg; scalar_t__ lro_pkts_queued; } ;
struct oce_nic_rqe {int dummy; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_7__ {int map; } ;
typedef TYPE_3__* POCE_SOFTC ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (int ,int,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,int *) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 struct oce_rq* FUNC_6 (int,int ,int) ;
 int FUNC_7 (TYPE_3__*,int,int) ;
 int VAR_5 ;
 int FUNC_8 (struct oce_rq*) ;

__attribute__((used)) static struct
oce_rq *FUNC_9(POCE_SOFTC VAR_6,
      uint32_t VAR_7,
      uint32_t VAR_8,
      uint32_t VAR_9, uint32_t VAR_10)
{
 struct oce_rq *VAR_11;
 int VAR_12 = 0, VAR_13;

 if (FUNC_1(VAR_8) <= 0)
  return ((void*)0);

 if ((VAR_7 == 0) || (VAR_7 > 1024))
  return ((void*)0);


 VAR_11 = FUNC_6(sizeof(struct oce_rq), VAR_1, VAR_2 | VAR_3);
 if (!VAR_11)
  return ((void*)0);


 VAR_11->cfg.q_len = VAR_7;
 VAR_11->cfg.frag_size = VAR_8;
 VAR_11->cfg.mtu = VAR_9;
 VAR_11->cfg.eqd = 0;
 VAR_11->lro_pkts_queued = 0;
 VAR_11->cfg.is_rss_queue = VAR_10;
        VAR_11->pending = 0;

 VAR_11->parent = (void *)VAR_6;

 VAR_12 = FUNC_2(FUNC_4(VAR_6->dev),
   1, 0,
   VAR_0,
   VAR_0,
   ((void*)0), ((void*)0),
   VAR_5,
   1, VAR_5, 0, ((void*)0), ((void*)0), &VAR_11->tag);
 if (VAR_12)
  goto free_rq;

 for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++) {
  VAR_12 = FUNC_3(VAR_11->tag, 0, &VAR_11->pckts[VAR_13].map);
  if (VAR_12)
   goto free_rq;
 }


 VAR_11->ring = FUNC_7(VAR_6, VAR_7,
     sizeof(struct oce_nic_rqe));
 if (!VAR_11->ring)
  goto free_rq;

 FUNC_0(&VAR_11->rx_lock, "RX_lock");

 return VAR_11;

free_rq:
 FUNC_5(VAR_6->dev, "Create RQ failed\n");
 FUNC_8(VAR_11);
 return ((void*)0);
}
