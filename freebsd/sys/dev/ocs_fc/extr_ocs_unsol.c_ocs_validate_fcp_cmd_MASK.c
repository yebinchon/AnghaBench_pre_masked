
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ocs_t ;
struct TYPE_13__ {TYPE_4__* payload; TYPE_2__* header; } ;
typedef TYPE_5__ ocs_hw_sequence_t ;
typedef int int32_t ;
struct TYPE_14__ {int additional_fcp_cdb_length; } ;
typedef TYPE_6__ fcp_cmnd_iu_t ;
struct TYPE_15__ {int ox_id; } ;
typedef TYPE_7__ fc_header_t ;
struct TYPE_11__ {size_t len; TYPE_6__* virt; } ;
struct TYPE_12__ {TYPE_3__ dma; } ;
struct TYPE_9__ {TYPE_7__* virt; } ;
struct TYPE_10__ {TYPE_1__ dma; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int ,size_t,size_t) ;

__attribute__((used)) static int32_t
FUNC_2(ocs_t *VAR_0, ocs_hw_sequence_t *VAR_1)
{
 size_t VAR_2 = 0;
 fcp_cmnd_iu_t *VAR_3 = VAR_1->payload->dma.virt;
 VAR_2 = sizeof(fcp_cmnd_iu_t) - 16 + VAR_3->additional_fcp_cdb_length;






 if (VAR_1->payload->dma.len < VAR_2) {
  fc_header_t *VAR_4 = VAR_1->header->dma.virt;
  FUNC_1(VAR_0, "dropping ox_id %04x with payload length (%zd) less than expected (%zd)\n",
         FUNC_0(VAR_4->ox_id), VAR_1->payload->dma.len,
         VAR_2);
  return -1;
 }
 return 0;

}
