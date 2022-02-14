
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_20__ {int virt; } ;
struct TYPE_19__ {TYPE_2__* extent; } ;
struct TYPE_21__ {TYPE_4__ bmbx; TYPE_3__ config; } ;
typedef TYPE_5__ sli4_t ;
struct TYPE_17__ {TYPE_5__ sli; } ;
struct TYPE_22__ {TYPE_1__ hw; } ;
typedef TYPE_6__ ocs_t ;
struct TYPE_23__ {int * virt; } ;
typedef TYPE_7__ ocs_dma_t ;
struct TYPE_18__ {int* base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_6__*,TYPE_7__*,int,int) ;
 int FUNC_1 (TYPE_6__*,TYPE_7__*) ;
 int FUNC_2 (TYPE_6__*,char*) ;
 int FUNC_3 (int *,int *,int) ;
 scalar_t__ FUNC_4 (TYPE_5__*) ;
 scalar_t__ FUNC_5 (TYPE_5__*,int ,int ,TYPE_7__*,int) ;

uint32_t
FUNC_6(ocs_t *VAR_4, uint32_t VAR_5, uint64_t *VAR_6, uint64_t *VAR_7)
{
 sli4_t *VAR_8 = &VAR_4->hw.sli;
 ocs_dma_t VAR_9;
 uint8_t *VAR_10 = ((void*)0);

 int VAR_11 = VAR_8->config.extent[VAR_3].base[0] + VAR_5;


 if (FUNC_0(VAR_4, &VAR_9, 112, 4)) {
  FUNC_2(VAR_4, "Failed to allocate DMA memory\n");
  return 1;
 }

 if (0 == FUNC_5(VAR_8, VAR_8->bmbx.virt, VAR_0,
    &VAR_9, VAR_11)) {
  FUNC_2(VAR_4, "READ_SPARM64 allocation failure\n");
  FUNC_1(VAR_4, &VAR_9);
  return 1;
 }

 if (FUNC_4(VAR_8)) {
  FUNC_2(VAR_4, "READ_SPARM64 command failure\n");
  FUNC_1(VAR_4, &VAR_9);
  return 1;
 }

 VAR_10 = VAR_9.virt;
 FUNC_3(VAR_6, VAR_10 + VAR_2, sizeof(*VAR_6));
 FUNC_3(VAR_7, VAR_10 + VAR_1, sizeof(*VAR_7));
 FUNC_1(VAR_4, &VAR_9);
 return 0;
}
