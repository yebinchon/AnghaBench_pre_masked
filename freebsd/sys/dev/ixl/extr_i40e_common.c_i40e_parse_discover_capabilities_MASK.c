
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct i40e_hw_capabilities {int switch_mode; int management_mode; int mng_protocols_over_mctp; int npar_enable; int os2bmc; int valid_functions; int num_vfs; int vf_base_id; int num_vsis; int enabled_tcmap; int maxtc; int rss_table_size; int rss_table_entry_width; int num_rx_qp; int base_queue; int num_tx_qp; int num_msix_vectors; int num_msix_vectors_vf; int flex10_mode; int flex10_status; int mdio_port_num; int mdio_port_mode; int fd_filters_guaranteed; int fd_filters_best_effort; int wr_csr_prot; int apm_wol_support; int proxy_support; int rx_buf_chain_len; void* fcoe; int acpi_prog_method; void* update_disabled; void* sec_rev_disabled; void* fd; void* ieee_1588; void** sdp; void** led; void* iwarp; void* mgmt_cem; void* flex10_capable; void* flex10_enable; void* rss; void* iscsi; void* dcb; void* evb_802_1_qbh; void* evb_802_1_qbg; void* vmdq; void* sr_iov_1_1; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct i40e_hw {int num_wol_proxy_filters; int wol_proxy_vsi_seid; int num_ports; int partition_id; int pf_id; int num_partitions; TYPE_1__ mac; int func_caps; int dev_caps; } ;
struct i40e_aqc_list_capabilities_element_resp {int major_rev; int phys_id; int logical_id; int number; int id; } ;
typedef int ocp_cfg_word0 ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;
typedef enum i40e_admin_queue_opc { ____Placeholder_i40e_admin_queue_opc } i40e_admin_queue_opc ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* VAR_20 ;
 scalar_t__ FUNC_2 (struct i40e_hw*,int ) ;
 int FUNC_3 (struct i40e_hw*,int,int*,int *) ;
 int FUNC_4 (struct i40e_hw*,int ,int,int,int*,void*,int *) ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_5 (struct i40e_hw*,int ,char*,...) ;
 int FUNC_6 (struct i40e_hw*) ;

__attribute__((used)) static void FUNC_7(struct i40e_hw *VAR_23, void *VAR_24,
         u32 VAR_25,
         enum i40e_admin_queue_opc VAR_26)
{
 struct i40e_aqc_list_capabilities_element_resp *VAR_27;
 u32 VAR_28, VAR_29;
 u32 VAR_30, VAR_31, VAR_32;
 struct i40e_hw_capabilities *VAR_33;
 enum i40e_status_code VAR_34;
 u16 VAR_35, VAR_36;
 u8 VAR_37;
 u32 VAR_38 = 0;

 VAR_27 = (struct i40e_aqc_list_capabilities_element_resp *) VAR_24;

 if (VAR_26 == VAR_21)
  VAR_33 = (struct i40e_hw_capabilities *)&VAR_23->dev_caps;
 else if (VAR_26 == VAR_22)
  VAR_33 = (struct i40e_hw_capabilities *)&VAR_23->func_caps;
 else
  return;

 for (VAR_38 = 0; VAR_38 < VAR_25; VAR_38++, VAR_27++) {
  VAR_35 = FUNC_0(VAR_27->id);
  VAR_30 = FUNC_1(VAR_27->number);
  VAR_31 = FUNC_1(VAR_27->logical_id);
  VAR_32 = FUNC_1(VAR_27->phys_id);
  VAR_37 = VAR_27->major_rev;

  switch (VAR_35) {
  case 135:
   VAR_33->switch_mode = VAR_30;
   FUNC_5(VAR_23, VAR_5,
       "HW Capability: Switch mode = %d\n",
       VAR_33->switch_mode);
   break;
  case 144:
   VAR_33->management_mode = VAR_30;
   if (VAR_37 > 1) {
    VAR_33->mng_protocols_over_mctp = VAR_31;
    FUNC_5(VAR_23, VAR_5,
        "HW Capability: Protocols over MCTP = %d\n",
        VAR_33->mng_protocols_over_mctp);
   } else {
    VAR_33->mng_protocols_over_mctp = 0;
   }
   FUNC_5(VAR_23, VAR_5,
       "HW Capability: Management Mode = %d\n",
       VAR_33->management_mode);
   break;
  case 142:
   VAR_33->npar_enable = VAR_30;
   FUNC_5(VAR_23, VAR_5,
       "HW Capability: NPAR enable = %d\n",
       VAR_33->npar_enable);
   break;
  case 140:
   VAR_33->os2bmc = VAR_30;
   FUNC_5(VAR_23, VAR_5,
       "HW Capability: OS2BMC = %d\n", VAR_33->os2bmc);
   break;
  case 149:
   VAR_33->valid_functions = VAR_30;
   FUNC_5(VAR_23, VAR_5,
       "HW Capability: Valid Functions = %d\n",
       VAR_33->valid_functions);
   break;
  case 136:
   if (VAR_30 == 1)
    VAR_33->sr_iov_1_1 = VAR_20;
   FUNC_5(VAR_23, VAR_5,
       "HW Capability: SR-IOV = %d\n",
       VAR_33->sr_iov_1_1);
   break;
  case 133:
   VAR_33->num_vfs = VAR_30;
   VAR_33->vf_base_id = VAR_31;
   FUNC_5(VAR_23, VAR_5,
       "HW Capability: VF count = %d\n",
       VAR_33->num_vfs);
   FUNC_5(VAR_23, VAR_5,
       "HW Capability: VF base_id = %d\n",
       VAR_33->vf_base_id);
   break;
  case 131:
   if (VAR_30 == 1)
    VAR_33->vmdq = VAR_20;
   FUNC_5(VAR_23, VAR_5,
       "HW Capability: VMDQ = %d\n", VAR_33->vmdq);
   break;
  case 156:
   if (VAR_30 == 1)
    VAR_33->evb_802_1_qbg = VAR_20;
   FUNC_5(VAR_23, VAR_5,
       "HW Capability: 802.1Qbg = %d\n", VAR_30);
   break;
  case 155:
   if (VAR_30 == 1)
    VAR_33->evb_802_1_qbh = VAR_20;
   FUNC_5(VAR_23, VAR_5,
       "HW Capability: 802.1Qbh = %d\n", VAR_30);
   break;
  case 130:
   VAR_33->num_vsis = VAR_30;
   FUNC_5(VAR_23, VAR_5,
       "HW Capability: VSI count = %d\n",
       VAR_33->num_vsis);
   break;
  case 153:
   if (VAR_30 == 1) {
    VAR_33->dcb = VAR_20;
    VAR_33->enabled_tcmap = VAR_31;
    VAR_33->maxtc = VAR_32;
   }
   FUNC_5(VAR_23, VAR_5,
       "HW Capability: DCB = %d\n", VAR_33->dcb);
   FUNC_5(VAR_23, VAR_5,
       "HW Capability: TC Mapping = %d\n",
       VAR_31);
   FUNC_5(VAR_23, VAR_5,
       "HW Capability: TC Max = %d\n", VAR_33->maxtc);
   break;
  case 152:
   if (VAR_30 == 1)
    VAR_33->fcoe = VAR_20;
   FUNC_5(VAR_23, VAR_5,
       "HW Capability: FCOE = %d\n", VAR_33->fcoe);
   break;
  case 148:
   if (VAR_30 == 1)
    VAR_33->iscsi = VAR_20;
   FUNC_5(VAR_23, VAR_5,
       "HW Capability: iSCSI = %d\n", VAR_33->iscsi);
   break;
  case 139:
   VAR_33->rss = VAR_20;
   VAR_33->rss_table_size = VAR_30;
   VAR_33->rss_table_entry_width = VAR_31;
   FUNC_5(VAR_23, VAR_5,
       "HW Capability: RSS = %d\n", VAR_33->rss);
   FUNC_5(VAR_23, VAR_5,
       "HW Capability: RSS table size = %d\n",
       VAR_33->rss_table_size);
   FUNC_5(VAR_23, VAR_5,
       "HW Capability: RSS table width = %d\n",
       VAR_33->rss_table_entry_width);
   break;
  case 138:
   VAR_33->num_rx_qp = VAR_30;
   VAR_33->base_queue = VAR_32;
   FUNC_5(VAR_23, VAR_5,
       "HW Capability: Rx QP = %d\n", VAR_30);
   FUNC_5(VAR_23, VAR_5,
       "HW Capability: base_queue = %d\n",
       VAR_33->base_queue);
   break;
  case 134:
   VAR_33->num_tx_qp = VAR_30;
   VAR_33->base_queue = VAR_32;
   FUNC_5(VAR_23, VAR_5,
       "HW Capability: Tx QP = %d\n", VAR_30);
   FUNC_5(VAR_23, VAR_5,
       "HW Capability: base_queue = %d\n",
       VAR_33->base_queue);
   break;
  case 143:
   VAR_33->num_msix_vectors = VAR_30;
   FUNC_5(VAR_23, VAR_5,
       "HW Capability: MSIX vector count = %d\n",
       VAR_33->num_msix_vectors);
   break;
  case 132:
   VAR_33->num_msix_vectors_vf = VAR_30;
   FUNC_5(VAR_23, VAR_5,
       "HW Capability: MSIX VF vector count = %d\n",
       VAR_33->num_msix_vectors_vf);
   break;
  case 151:
   if (VAR_37 == 1) {
    if (VAR_30 == 1) {
     VAR_33->flex10_enable = VAR_20;
     VAR_33->flex10_capable = VAR_20;
    }
   } else {

    if (VAR_30 & 1)
     VAR_33->flex10_enable = VAR_20;
    if (VAR_30 & 2)
     VAR_33->flex10_capable = VAR_20;
   }
   VAR_33->flex10_mode = VAR_31;
   VAR_33->flex10_status = VAR_32;
   FUNC_5(VAR_23, VAR_5,
       "HW Capability: Flex10 mode = %d\n",
       VAR_33->flex10_mode);
   FUNC_5(VAR_23, VAR_5,
       "HW Capability: Flex10 status = %d\n",
       VAR_33->flex10_status);
   break;
  case 154:
   if (VAR_30 == 1)
    VAR_33->mgmt_cem = VAR_20;
   FUNC_5(VAR_23, VAR_5,
       "HW Capability: CEM = %d\n", VAR_33->mgmt_cem);
   break;
  case 147:
   if (VAR_30 == 1)
    VAR_33->iwarp = VAR_20;
   FUNC_5(VAR_23, VAR_5,
       "HW Capability: iWARP = %d\n", VAR_33->iwarp);
   break;
  case 146:
   if (VAR_32 < VAR_6)
    VAR_33->led[VAR_32] = VAR_20;
   FUNC_5(VAR_23, VAR_5,
       "HW Capability: LED - PIN %d\n", VAR_32);
   break;
  case 137:
   if (VAR_32 < VAR_6)
    VAR_33->sdp[VAR_32] = VAR_20;
   FUNC_5(VAR_23, VAR_5,
       "HW Capability: SDP - PIN %d\n", VAR_32);
   break;
  case 145:
   if (VAR_30 == 1) {
    VAR_33->mdio_port_num = VAR_32;
    VAR_33->mdio_port_mode = VAR_31;
   }
   FUNC_5(VAR_23, VAR_5,
       "HW Capability: MDIO port number = %d\n",
       VAR_33->mdio_port_num);
   FUNC_5(VAR_23, VAR_5,
       "HW Capability: MDIO port mode = %d\n",
       VAR_33->mdio_port_mode);
   break;
  case 157:
   if (VAR_30 == 1)
    VAR_33->ieee_1588 = VAR_20;
   FUNC_5(VAR_23, VAR_5,
       "HW Capability: IEEE 1588 = %d\n",
       VAR_33->ieee_1588);
   break;
  case 150:
   VAR_33->fd = VAR_20;
   VAR_33->fd_filters_guaranteed = VAR_30;
   VAR_33->fd_filters_best_effort = VAR_31;
   FUNC_5(VAR_23, VAR_5,
       "HW Capability: Flow Director = 1\n");
   FUNC_5(VAR_23, VAR_5,
       "HW Capability: Guaranteed FD filters = %d\n",
       VAR_33->fd_filters_guaranteed);
   break;
  case 128:
   VAR_33->wr_csr_prot = (u64)VAR_30;
   VAR_33->wr_csr_prot |= (u64)VAR_31 << 32;
   FUNC_5(VAR_23, VAR_5,
       "HW Capability: wr_csr_prot = 0x%llX\n\n",
       (VAR_33->wr_csr_prot & 0xffff));
   break;
  case 141:
   if (VAR_30 & VAR_9)
    VAR_33->sec_rev_disabled = VAR_20;
   if (VAR_30 & VAR_10)
    VAR_33->update_disabled = VAR_20;
   break;
  case 129:
   VAR_23->num_wol_proxy_filters = (u16)VAR_30;
   VAR_23->wol_proxy_vsi_seid = (u16)VAR_31;
   VAR_33->apm_wol_support = VAR_32 & VAR_19;
   if (VAR_32 & VAR_3)
    VAR_33->acpi_prog_method = VAR_1;
   else
    VAR_33->acpi_prog_method = VAR_2;
   VAR_33->proxy_support = (VAR_32 & VAR_11) ? 1 : 0;
   FUNC_5(VAR_23, VAR_5,
       "HW Capability: WOL proxy filters = %d\n",
       VAR_23->num_wol_proxy_filters);
   break;
  default:
   break;
  }
 }

 if (VAR_33->fcoe)
  FUNC_5(VAR_23, VAR_4, "device is FCoE capable\n");


 VAR_33->fcoe = VAR_0;


 VAR_23->num_ports = 0;
 for (VAR_38 = 0; VAR_38 < 4; VAR_38++) {
  u32 VAR_39 = VAR_12 + (4 * VAR_38);
  u64 VAR_40 = 0;




  FUNC_3(VAR_23, VAR_39, &VAR_40, ((void*)0));
  if (!(VAR_40 & VAR_13))
   VAR_23->num_ports++;
 }
 if (VAR_23->mac.type == VAR_7) {
  if (FUNC_2(VAR_23, VAR_14) == VAR_18) {
   VAR_34 = FUNC_4(VAR_23, VAR_15,
        2 * VAR_16,
        sizeof(VAR_36),
        &VAR_36, VAR_20, ((void*)0));
   if (VAR_34 == VAR_18 &&
       (VAR_36 & VAR_17))
    VAR_23->num_ports = 4;
   FUNC_6(VAR_23);
  }
 }

 VAR_28 = VAR_33->valid_functions;
 VAR_29 = 0;
 while (VAR_28) {
  if (VAR_28 & 1)
   VAR_29++;
  VAR_28 >>= 1;
 }




 if (VAR_23->num_ports != 0) {
  VAR_23->partition_id = (VAR_23->pf_id / VAR_23->num_ports) + 1;
  VAR_23->num_partitions = VAR_29 / VAR_23->num_ports;
 }




 VAR_33->rx_buf_chain_len = VAR_8;
}
