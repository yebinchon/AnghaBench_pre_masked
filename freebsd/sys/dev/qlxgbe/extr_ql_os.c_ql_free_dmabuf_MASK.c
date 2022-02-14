
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int qla_host_t ;
struct TYPE_3__ {int dma_tag; int dma_map; int dma_b; } ;
typedef TYPE_1__ qla_dma_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

void
FUNC_3(qla_host_t *VAR_0, qla_dma_t *VAR_1)
{
 FUNC_1(VAR_1->dma_tag, VAR_1->dma_map);
        FUNC_2(VAR_1->dma_tag, VAR_1->dma_b, VAR_1->dma_map);
        FUNC_0(VAR_1->dma_tag);
}
