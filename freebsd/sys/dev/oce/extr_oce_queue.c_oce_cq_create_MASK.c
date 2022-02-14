
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef void* uint32_t ;
struct oce_eq {int dummy; } ;
struct TYPE_6__ {scalar_t__ nodelay; void* item_size; void* q_len; } ;
struct oce_cq {TYPE_1__ cq_cfg; struct oce_eq* eq; TYPE_2__* parent; int ring; } ;
struct TYPE_7__ {int dev; int ncqs; struct oce_cq** cq; } ;
typedef TYPE_2__* POCE_SOFTC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 struct oce_cq* FUNC_1 (int,int ,int) ;
 int FUNC_2 (TYPE_2__*,struct oce_cq*) ;
 int FUNC_3 (TYPE_2__*,void*,void*) ;
 int FUNC_4 (struct oce_cq*,void*,void*) ;

struct oce_cq *
FUNC_5(POCE_SOFTC VAR_3, struct oce_eq *VAR_4,
        uint32_t VAR_5,
        uint32_t VAR_6,
        uint32_t VAR_7,
        uint32_t VAR_8,
        uint32_t VAR_9, uint32_t VAR_10)
{
 struct oce_cq *VAR_11 = ((void*)0);
 int VAR_12 = 0;

 VAR_11 = FUNC_1(sizeof(struct oce_cq), VAR_0, VAR_1 | VAR_2);
 if (!VAR_11)
  return ((void*)0);

 VAR_11->ring = FUNC_3(VAR_3, VAR_5, VAR_6);
 if (!VAR_11->ring)
  goto error;

 VAR_11->parent = VAR_3;
 VAR_11->eq = VAR_4;
 VAR_11->cq_cfg.q_len = VAR_5;
 VAR_11->cq_cfg.item_size = VAR_6;
 VAR_11->cq_cfg.nodelay = (uint8_t) VAR_9;

 VAR_12 = FUNC_4(VAR_11, VAR_10, VAR_8);
 if (VAR_12)
  goto error;

 VAR_3->cq[VAR_3->ncqs++] = VAR_11;

 return VAR_11;

error:
 FUNC_0(VAR_3->dev, "CQ create failed\n");
 FUNC_2(VAR_3, VAR_11);
 return ((void*)0);
}
