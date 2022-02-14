
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ virt; } ;
struct TYPE_12__ {scalar_t__ pci_func; TYPE_7__ payload; int arg; int (* cb ) (int ,int ,int ) ;} ;
typedef TYPE_1__ uint8_t ;
struct TYPE_13__ {scalar_t__ descriptor_type; int descriptor_length; } ;
typedef TYPE_2__ sli4_resource_descriptor_v1_t ;
struct TYPE_14__ {int desc_count; scalar_t__ desc; } ;
typedef TYPE_3__ sli4_res_common_get_profile_config_t ;
struct TYPE_15__ {scalar_t__ pf_number; int pf_type; } ;
typedef TYPE_4__ sli4_pcie_resource_descriptor_v1_t ;
struct TYPE_16__ {int os; } ;
typedef TYPE_5__ ocs_hw_t ;
typedef int ocs_hw_port_protocol_e ;
typedef TYPE_1__ ocs_hw_get_port_protocol_cb_arg_t ;
typedef TYPE_7__ ocs_dma_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,TYPE_7__*) ;
 int FUNC_1 (int ,TYPE_1__*,int) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int32_t
FUNC_3(ocs_hw_t *VAR_6, int32_t VAR_7,
       uint8_t *VAR_8, void *VAR_9)
{
 ocs_hw_get_port_protocol_cb_arg_t *VAR_10 = VAR_9;
 ocs_dma_t *VAR_11 = &(VAR_10->payload);
 sli4_res_common_get_profile_config_t* VAR_12 = (sli4_res_common_get_profile_config_t*) VAR_11->virt;
 ocs_hw_port_protocol_e VAR_13;
 int VAR_14;
 sli4_resource_descriptor_v1_t *VAR_15;
 sli4_pcie_resource_descriptor_v1_t *VAR_16;
 int VAR_17;

 VAR_13 = VAR_3;

 VAR_14 = VAR_12->desc_count;
 VAR_15 = (sli4_resource_descriptor_v1_t *)VAR_12->desc;
 for (VAR_17=0; VAR_17<VAR_14; VAR_17++) {
  if (VAR_15->descriptor_type == VAR_5) {
   VAR_16 = (sli4_pcie_resource_descriptor_v1_t*) VAR_15;
   if (VAR_16->pf_number == VAR_10->pci_func) {
    switch(VAR_16->pf_type) {
    case 0x02:
     VAR_13 = VAR_2;
     break;
    case 0x04:
     VAR_13 = VAR_1;
     break;
    case 0x10:
     VAR_13 = VAR_0;
     break;
    default:
     VAR_13 = VAR_3;
     break;
    }
   }
  }

  VAR_15 = (sli4_resource_descriptor_v1_t *) ((uint8_t *)VAR_15 + VAR_15->descriptor_length);
 }

 if (VAR_10->cb) {
  VAR_10->cb(VAR_7, VAR_13, VAR_10->arg);

 }

 FUNC_0(VAR_6->os, &VAR_10->payload);
 FUNC_1(VAR_6->os, VAR_10, sizeof(ocs_hw_get_port_protocol_cb_arg_t));
 FUNC_1(VAR_6->os, VAR_8, VAR_4);

 return 0;
}
