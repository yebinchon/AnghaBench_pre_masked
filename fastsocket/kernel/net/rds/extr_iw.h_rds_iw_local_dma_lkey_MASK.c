
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct rds_iw_connection {TYPE_3__* i_mr; TYPE_2__* i_cm_id; scalar_t__ i_dma_local_lkey; } ;
struct TYPE_6__ {int lkey; } ;
struct TYPE_5__ {TYPE_1__* device; } ;
struct TYPE_4__ {int local_dma_lkey; } ;



__attribute__((used)) static inline u32 FUNC_0(struct rds_iw_connection *VAR_0)
{
 return VAR_0->i_dma_local_lkey ? VAR_0->i_cm_id->device->local_dma_lkey : VAR_0->i_mr->lkey;
}
