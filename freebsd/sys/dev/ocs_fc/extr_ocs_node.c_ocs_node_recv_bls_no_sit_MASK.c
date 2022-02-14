
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int ocs_node_t ;
struct TYPE_7__ {TYPE_2__* header; } ;
typedef TYPE_3__ ocs_hw_sequence_t ;
typedef int int32_t ;
typedef int fc_header_t ;
struct TYPE_5__ {int * virt; } ;
struct TYPE_6__ {TYPE_1__ dma; } ;


 int FUNC_0 (int *,char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;

int32_t
FUNC_2(ocs_node_t *VAR_0, ocs_hw_sequence_t *VAR_1)
{
 fc_header_t *VAR_2 = VAR_1->header->dma.virt;

 FUNC_0(VAR_0, "Dropping frame hdr = %08x %08x %08x %08x %08x %08x\n",
      FUNC_1(((uint32_t *)VAR_2)[0]),
      FUNC_1(((uint32_t *)VAR_2)[1]),
      FUNC_1(((uint32_t *)VAR_2)[2]),
      FUNC_1(((uint32_t *)VAR_2)[3]),
      FUNC_1(((uint32_t *)VAR_2)[4]),
      FUNC_1(((uint32_t *)VAR_2)[5]));

 return -1;
}
