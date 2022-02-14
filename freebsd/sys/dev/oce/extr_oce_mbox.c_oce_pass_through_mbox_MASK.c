
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct oce_mq_sge {void* length; void* pa_lo; void* pa_hi; } ;
struct TYPE_10__ {struct oce_mq_sge* sgl; } ;
struct TYPE_11__ {TYPE_3__ u1; } ;
struct TYPE_12__ {TYPE_4__ u0; } ;
struct TYPE_8__ {int sge_count; scalar_t__ embedded; } ;
struct TYPE_9__ {TYPE_1__ s; } ;
struct oce_mbx {int payload_length; TYPE_5__ payload; TYPE_2__ u0; } ;
struct TYPE_13__ {int paddr; } ;
typedef int POCE_SOFTC ;
typedef TYPE_6__* POCE_DMA_MEM ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (struct oce_mbx*,int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ,struct oce_mbx*,int *) ;
 int FUNC_4 (struct oce_mbx*) ;
 int FUNC_5 (int) ;

int
FUNC_6(POCE_SOFTC VAR_1, POCE_DMA_MEM VAR_2, uint32_t VAR_3)
{
 struct oce_mbx VAR_4;
 struct oce_mq_sge *VAR_5;
 int VAR_6 = 0;

 FUNC_1(&VAR_4, sizeof(struct oce_mbx));

 VAR_4.u0.s.embedded = 0;
 VAR_4.payload_length = VAR_3;
 VAR_4.u0.s.sge_count = 1;
 VAR_5 = &VAR_4.payload.u0.u1.sgl[0];
 VAR_5->pa_hi = FUNC_2(FUNC_5(VAR_2->paddr));
 VAR_5->pa_lo = FUNC_2((VAR_2->paddr) & 0xFFFFFFFF);
 VAR_5->length = FUNC_2(VAR_3);

 FUNC_0(FUNC_4(&VAR_4), VAR_4.payload_length + VAR_0);

 VAR_6 = FUNC_3(VAR_1, &VAR_4, ((void*)0));
 return VAR_6;
}
