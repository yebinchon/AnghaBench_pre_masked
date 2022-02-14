
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_30__ {scalar_t__ virt; } ;
struct TYPE_23__ {scalar_t__ pci_func; TYPE_9__ payload; int arg; int (* cb ) (scalar_t__,int ) ;scalar_t__ new_protocol; } ;
typedef TYPE_1__ uint8_t ;
struct TYPE_24__ {scalar_t__ descriptor_type; int descriptor_length; } ;
typedef TYPE_2__ sli4_resource_descriptor_v1_t ;
struct TYPE_25__ {int desc_count; scalar_t__ desc; } ;
typedef TYPE_3__ sli4_res_common_get_profile_config_t ;
struct TYPE_26__ {int desc; } ;
typedef TYPE_4__ sli4_req_common_set_profile_config_t ;
struct TYPE_27__ {scalar_t__ pf_number; scalar_t__ pf_type; } ;
typedef TYPE_5__ sli4_pcie_resource_descriptor_v1_t ;
struct TYPE_28__ {int descriptor_length; int iscsi_tgt; int iscsi_ini; int iscsi_dif; int fcoe_tgt; int fcoe_ini; int fcoe_dif; int descriptor_type; } ;
typedef TYPE_6__ sli4_isap_resouce_descriptor_v1_t ;
struct TYPE_29__ {int os; int sli; } ;
typedef TYPE_7__ ocs_hw_t ;
typedef TYPE_1__ ocs_hw_set_port_protocol_cb_arg_t ;
typedef scalar_t__ ocs_hw_rtn_e ;
typedef int ocs_hw_port_protocol_e ;
typedef TYPE_9__ ocs_dma_t ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;



 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_0 (int ,TYPE_9__*,int,int) ;
 int FUNC_1 (int ,TYPE_9__*) ;
 int FUNC_2 (int ,TYPE_1__*,int) ;
 scalar_t__ FUNC_3 (TYPE_7__*,TYPE_1__*,int ,int ,TYPE_1__*) ;
 int VAR_12 ;
 int FUNC_4 (int ,char*) ;
 TYPE_1__* FUNC_5 (int ,int,int) ;
 int FUNC_6 (TYPE_1__*,TYPE_5__*,int) ;
 int FUNC_7 (int *,TYPE_1__*,int,TYPE_9__*,int ,int,int) ;
 int FUNC_8 (scalar_t__,int ) ;

__attribute__((used)) static int32_t
FUNC_9(ocs_hw_t *VAR_13, int32_t VAR_14, uint8_t *VAR_15, void *VAR_16)
{
 ocs_hw_set_port_protocol_cb_arg_t *VAR_17 = VAR_16;
 ocs_dma_t *VAR_18 = &(VAR_17->payload);
 sli4_res_common_get_profile_config_t* VAR_19 = (sli4_res_common_get_profile_config_t*) VAR_18->virt;
 int VAR_20;
 sli4_resource_descriptor_v1_t *VAR_21;
 sli4_pcie_resource_descriptor_v1_t *VAR_22;
 int VAR_23;
 ocs_hw_set_port_protocol_cb_arg_t *VAR_24;
 ocs_hw_port_protocol_e VAR_25;
 uint8_t *VAR_26;
 sli4_isap_resouce_descriptor_v1_t *VAR_27;
 uint8_t *VAR_28;
 int VAR_29;
 ocs_hw_rtn_e VAR_30 = VAR_2;
 int VAR_31 = 0;
 int VAR_32 = 0;

 VAR_25 = (ocs_hw_port_protocol_e)VAR_17->new_protocol;

 VAR_20 = VAR_19->desc_count;


 VAR_29 = 0;
 VAR_21 = (sli4_resource_descriptor_v1_t *)VAR_19->desc;
 for (VAR_23=0; VAR_23<VAR_20; VAR_23++) {
  if (VAR_21->descriptor_type == VAR_11) {
   ++VAR_29;
  }
  VAR_21 = (sli4_resource_descriptor_v1_t *) ((uint8_t *)VAR_21 + VAR_21->descriptor_length);
 }


 VAR_28 = FUNC_5(VAR_13->os, VAR_5, VAR_4 | VAR_3);
 if (VAR_28 == ((void*)0)) {
  FUNC_4(VAR_13->os, "failed to malloc mbox\n");
  return VAR_1;
 }



 VAR_24 = FUNC_5(VAR_13->os, sizeof(ocs_hw_set_port_protocol_cb_arg_t), VAR_3);
 if (VAR_24 == ((void*)0)) {
  FUNC_4(VAR_13->os, "failed to malloc cb_arg\n");
  FUNC_2(VAR_13->os, VAR_28, VAR_5);
  return VAR_1;
 }

 VAR_24->cb = VAR_17->cb;
 VAR_24->arg = VAR_17->arg;



 if (FUNC_0(VAR_13->os, &VAR_24->payload, sizeof(sli4_req_common_set_profile_config_t) +
     (VAR_29 * sizeof(sli4_pcie_resource_descriptor_v1_t)) +
     sizeof(sli4_isap_resouce_descriptor_v1_t), 4)) {
  FUNC_4(VAR_13->os, "Failed to allocate DMA buffer\n");
  FUNC_2(VAR_13->os, VAR_28, VAR_5);
  FUNC_2(VAR_13->os, VAR_24, sizeof(ocs_hw_set_port_protocol_cb_arg_t));
  return VAR_1;
 }

 FUNC_7(&VAR_13->sli, VAR_28, VAR_5,
         &VAR_24->payload,
         0, VAR_29+1, 1);


 VAR_26 = (uint8_t *)&(((sli4_req_common_set_profile_config_t *) VAR_24->payload.virt)->desc);





 VAR_21 = (sli4_resource_descriptor_v1_t *)VAR_19->desc;
 for (VAR_23=0; VAR_23<VAR_20; VAR_23++) {
  if (VAR_21->descriptor_type == VAR_11) {
   VAR_22 = (sli4_pcie_resource_descriptor_v1_t*) VAR_21;
   if (VAR_22->pf_number == VAR_17->pci_func) {


    switch(VAR_25) {
    case 130:
     VAR_22->pf_type = VAR_7;
     break;
    case 129:
     VAR_22->pf_type = VAR_8;
     break;
    case 128:
     VAR_22->pf_type = VAR_9;
     break;
    default:
     VAR_22->pf_type = VAR_6;
     break;
    }

   }

   if (VAR_22->pf_type == VAR_8) {
    ++VAR_31;
   }
   if (VAR_22->pf_type == VAR_9) {
    ++VAR_32;
   }
   FUNC_6(VAR_26, VAR_22, sizeof(sli4_pcie_resource_descriptor_v1_t));
   VAR_26 += sizeof(sli4_pcie_resource_descriptor_v1_t);
  }

  VAR_21 = (sli4_resource_descriptor_v1_t *) ((uint8_t *)VAR_21 + VAR_21->descriptor_length);
 }


 VAR_27 = (sli4_isap_resouce_descriptor_v1_t*)VAR_26;
 VAR_27->descriptor_type = VAR_10;
 VAR_27->descriptor_length = sizeof(sli4_isap_resouce_descriptor_v1_t);
 if (VAR_32 > 0) {
  VAR_27->iscsi_tgt = 1;
  VAR_27->iscsi_ini = 1;
  VAR_27->iscsi_dif = 1;
 }
 if (VAR_31 > 0) {
  VAR_27->fcoe_tgt = 1;
  VAR_27->fcoe_ini = 1;
  VAR_27->fcoe_dif = 1;
 }


 FUNC_1(VAR_13->os, &VAR_17->payload);
 FUNC_2(VAR_13->os, VAR_15, VAR_5);
 FUNC_2(VAR_13->os, VAR_17, sizeof(ocs_hw_set_port_protocol_cb_arg_t));



 VAR_30 = FUNC_3(VAR_13, VAR_28, VAR_0, VAR_12, VAR_24);
 if (VAR_30) {
  FUNC_4(VAR_13->os, "Error posting COMMON_SET_PROFILE_CONFIG\n");

  if (VAR_24->cb) {
   VAR_24->cb( VAR_30, VAR_24->arg);
  }


  FUNC_1(VAR_13->os, &VAR_24->payload);
  FUNC_2(VAR_13->os, VAR_28, VAR_5);
  FUNC_2(VAR_13->os, VAR_24, sizeof(ocs_hw_set_port_protocol_cb_arg_t));
 }


 return VAR_30;
}
