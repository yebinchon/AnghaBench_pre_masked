
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_19__ {int num_iqueues; int num_oqueues; unsigned int base_queue; unsigned int gmx_port_id; } ;
union octeon_if_cfg {scalar_t__ if_cfg64; TYPE_2__ s; } ;
typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct octeon_if_cfg_info {int dummy; } ;
struct lio_if_props {struct ifnet* ifp; int gmxport; } ;
struct TYPE_18__ {int num_pf_rings; unsigned int pf_srn; } ;
struct octeon_device {int ifcount; unsigned int pf_num; struct lio_if_props props; TYPE_1__ sriov_info; } ;
struct lio_version {void* micro; void* minor; void* major; } ;
struct lio_soft_command {int wait_time; struct lio_soft_command* callback_arg; int callback; scalar_t__ iq_no; scalar_t__ virtdptr; scalar_t__ ctxptr; scalar_t__ virtrptr; } ;
struct TYPE_23__ {int link_status64; } ;
struct TYPE_24__ {TYPE_6__ link; int gmxport; scalar_t__ hw_addr; TYPE_4__* txpciq; TYPE_3__* rxpciq; } ;
struct TYPE_25__ {TYPE_7__ linfo; scalar_t__ oqmask; scalar_t__ iqmask; } ;
struct lio_if_cfg_resp {int status; TYPE_8__ cfg_info; } ;
struct lio_if_cfg_context {scalar_t__ cond; int octeon_id; } ;
struct TYPE_22__ {int link_status64; } ;
struct TYPE_17__ {int num_rxpciq; int num_txpciq; TYPE_12__* rxpciq; TYPE_10__* txpciq; scalar_t__ hw_addr; int gmxport; TYPE_5__ link; } ;
struct lio {int ifidx; int stats_interval; int stats_timer; void* vlan_detach; void* vlan_attach; int link_changes; int rxq; int rx_qsize; int txq; int tx_qsize; TYPE_13__ linfo; struct ifnet* ifp; struct octeon_device* oct_dev; } ;
struct ifnet {int if_hw_tsomaxsegsize; int if_hw_tsomaxsegcount; int if_hw_tsomax; } ;
struct TYPE_26__ {int q_no; } ;
struct TYPE_21__ {int txpciq64; } ;
struct TYPE_20__ {int rxpciq64; } ;
struct TYPE_15__ {int q_no; } ;
struct TYPE_16__ {TYPE_11__ s; int rxpciq64; } ;
struct TYPE_14__ {TYPE_9__ s; int txpciq64; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ,int ,struct lio*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct ifnet*,int*) ;
 void* FUNC_5 (int ) ;
 struct ifnet* FUNC_6 (int ) ;
 int FUNC_7 (struct ifnet*) ;
 int FUNC_8 (struct ifnet*,struct lio*) ;
 int FUNC_9 (struct lio*) ;
 struct lio_soft_command* FUNC_10 (struct octeon_device*,int,int,int) ;
 int FUNC_11 (struct octeon_device*,int) ;
 int FUNC_12 (struct octeon_device*,char*,int,...) ;
 int FUNC_13 (struct octeon_device*,char*,...) ;
 int FUNC_14 (struct octeon_device*,struct lio_soft_command*) ;
 int FUNC_15 (struct octeon_device*) ;
 int FUNC_16 (struct octeon_device*,int ) ;
 int FUNC_17 (struct octeon_device*,int ) ;
 scalar_t__ VAR_35 ;
 int VAR_36 ;
 int FUNC_18 (struct lio*,int ) ;
 int FUNC_19 (struct lio*) ;
 int VAR_37 ;
 int FUNC_20 (struct octeon_device*,struct lio_soft_command*,int ,int ,int ,scalar_t__,int ) ;
 int FUNC_21 (struct octeon_device*,int ,int ,int ,struct octeon_device*) ;
 scalar_t__ VAR_38 ;
 scalar_t__ FUNC_22 (struct lio*) ;
 int FUNC_23 (struct octeon_device*,struct lio_soft_command*) ;
 int FUNC_24 (struct ifnet*,int ,int) ;
 int FUNC_25 (struct ifnet*,int ,int ) ;
 scalar_t__ FUNC_26 (struct octeon_device*,struct lio*,int) ;
 scalar_t__ FUNC_27 (struct octeon_device*,int,int,int) ;
 scalar_t__ FUNC_28 (struct ifnet*) ;
 int FUNC_29 (struct octeon_device*,scalar_t__*) ;
 int FUNC_30 (scalar_t__*,int) ;
 scalar_t__ FUNC_31 (struct octeon_device*,struct ifnet*) ;
 int VAR_39 ;
 int VAR_40 ;
 struct lio* FUNC_32 (int,int ,int) ;
 int VAR_41 ;
 int VAR_42 ;

__attribute__((used)) static int
FUNC_33(struct octeon_device *VAR_43)
{
 union octeon_if_cfg VAR_44;
 struct lio *VAR_45 = ((void*)0);
 struct ifnet *VAR_46 = ((void*)0);
 struct lio_version *VAR_47;
 struct lio_soft_command *VAR_48;
 struct lio_if_cfg_context *VAR_49;
 struct lio_if_cfg_resp *VAR_50;
 struct lio_if_props *VAR_51;
 int VAR_52, VAR_53, VAR_54;
 unsigned int VAR_55;
 unsigned int VAR_56;
 uint32_t VAR_57, VAR_58;
 uint32_t VAR_59, VAR_60;
 uint8_t VAR_61[VAR_2], VAR_62, VAR_63;


 FUNC_21(VAR_43, VAR_28,
     VAR_30,
     VAR_37, VAR_43);

 for (VAR_62 = 0; VAR_62 < VAR_43->ifcount; VAR_62++) {
  VAR_60 = sizeof(struct lio_if_cfg_resp);
  VAR_57 = sizeof(struct lio_if_cfg_context);
  VAR_58 = sizeof(struct lio_version);
  VAR_48 = FUNC_10(VAR_43, VAR_58, VAR_60,
         VAR_57);
  if (VAR_48 == ((void*)0))
   return (VAR_1);

  VAR_50 = (struct lio_if_cfg_resp *)VAR_48->virtrptr;
  VAR_49 = (struct lio_if_cfg_context *)VAR_48->ctxptr;
  VAR_47 = (struct lio_version *)VAR_48->virtdptr;

  *((uint64_t *)VAR_47) = 0;
  VAR_47->major = FUNC_5(VAR_9);
  VAR_47->minor = FUNC_5(VAR_11);
  VAR_47->micro = FUNC_5(VAR_10);

  VAR_52 = VAR_43->sriov_info.num_pf_rings;
  VAR_53 = VAR_43->sriov_info.num_pf_rings;
  VAR_55 = VAR_43->sriov_info.pf_srn;

  VAR_56 = VAR_43->pf_num;
  VAR_59 = VAR_43->pf_num;

  FUNC_12(VAR_43, "requesting config for interface %d, iqs %d, oqs %d\n",
       VAR_59, VAR_52, VAR_53);
  VAR_49->cond = 0;
  VAR_49->octeon_id = FUNC_15(VAR_43);

  VAR_44.if_cfg64 = 0;
  VAR_44.s.num_iqueues = VAR_52;
  VAR_44.s.num_oqueues = VAR_53;
  VAR_44.s.base_queue = VAR_55;
  VAR_44.s.gmx_port_id = VAR_56;

  VAR_48->iq_no = 0;

  FUNC_20(VAR_43, VAR_48, VAR_28,
      VAR_29, 0,
      VAR_44.if_cfg64, 0);

  VAR_48->callback = VAR_36;
  VAR_48->callback_arg = VAR_48;
  VAR_48->wait_time = 3000;

  VAR_54 = FUNC_23(VAR_43, VAR_48);
  if (VAR_54 == VAR_23) {
   FUNC_13(VAR_43, "iq/oq config failed status: %x\n",
        VAR_54);

   goto setup_nic_dev_fail;
  }





  FUNC_29(VAR_43, &VAR_49->cond);

  VAR_54 = VAR_50->status;
  if (VAR_54) {
   FUNC_13(VAR_43, "iq/oq config failed\n");
   goto setup_nic_dev_fail;
  }

  FUNC_30((uint64_t *)(&VAR_50->cfg_info),
     (sizeof(struct octeon_if_cfg_info)) >> 3);

  VAR_52 = FUNC_2(VAR_50->cfg_info.iqmask);
  VAR_53 = FUNC_2(VAR_50->cfg_info.oqmask);

  if (!(VAR_52) || !(VAR_53)) {
   FUNC_13(VAR_43,
        "Got bad iqueues (%016llX) or oqueues (%016llX) from firmware.\n",
        FUNC_1(VAR_50->cfg_info.iqmask),
        FUNC_1(VAR_50->cfg_info.oqmask));
   goto setup_nic_dev_fail;
  }

  FUNC_12(VAR_43,
       "interface %d, iqmask %016llx, oqmask %016llx, numiqueues %d, numoqueues %d\n",
       VAR_62, FUNC_1(VAR_50->cfg_info.iqmask),
       FUNC_1(VAR_50->cfg_info.oqmask),
       VAR_52, VAR_53);

  VAR_46 = FUNC_6(VAR_8);

  if (VAR_46 == ((void*)0)) {
   FUNC_13(VAR_43, "Device allocation failed\n");
   goto setup_nic_dev_fail;
  }

  VAR_45 = FUNC_32(sizeof(struct lio), VAR_31, VAR_32 | VAR_33);

  if (VAR_45 == ((void*)0)) {
   FUNC_13(VAR_43, "Lio allocation failed\n");
   goto setup_nic_dev_fail;
  }

  FUNC_8(VAR_46, VAR_45);

  VAR_46->if_hw_tsomax = VAR_26;
  VAR_46->if_hw_tsomaxsegcount = VAR_27;
  VAR_46->if_hw_tsomaxsegsize = VAR_34;

  VAR_45->ifidx = VAR_59;

  VAR_51 = &VAR_43->props;
  VAR_51->gmxport = VAR_50->cfg_info.linfo.gmxport;
  VAR_51->ifp = VAR_46;

  VAR_45->linfo.num_rxpciq = VAR_53;
  VAR_45->linfo.num_txpciq = VAR_52;
  for (VAR_63 = 0; VAR_63 < VAR_53; VAR_63++) {
   VAR_45->linfo.rxpciq[VAR_63].rxpciq64 =
       VAR_50->cfg_info.linfo.rxpciq[VAR_63].rxpciq64;
  }

  for (VAR_63 = 0; VAR_63 < VAR_52; VAR_63++) {
   VAR_45->linfo.txpciq[VAR_63].txpciq64 =
       VAR_50->cfg_info.linfo.txpciq[VAR_63].txpciq64;
  }

  VAR_45->linfo.hw_addr = VAR_50->cfg_info.linfo.hw_addr;
  VAR_45->linfo.gmxport = VAR_50->cfg_info.linfo.gmxport;
  VAR_45->linfo.link.link_status64 =
      VAR_50->cfg_info.linfo.link.link_status64;





  VAR_45->oct_dev = VAR_43;
  VAR_45->ifp = VAR_46;

  FUNC_12(VAR_43, "if%d gmx: %d hw_addr: 0x%llx\n", VAR_62,
       VAR_45->linfo.gmxport, FUNC_1(VAR_45->linfo.hw_addr));
  FUNC_19(VAR_45);

  FUNC_30(&VAR_45->linfo.hw_addr, 1);
  for (VAR_63 = 0; VAR_63 < 6; VAR_63++)
   VAR_61[VAR_63] = *((uint8_t *)(
       ((uint8_t *)&VAR_45->linfo.hw_addr) + 2 + VAR_63));

  FUNC_4(VAR_46, VAR_61);





  VAR_45->txq = VAR_45->linfo.txpciq[0].s.q_no;
  VAR_45->rxq = VAR_45->linfo.rxpciq[0].s.q_no;
  if (FUNC_27(VAR_43, VAR_62, VAR_45->linfo.num_txpciq,
     VAR_45->linfo.num_rxpciq)) {
   FUNC_13(VAR_43, "I/O queues creation failed\n");
   goto setup_nic_dev_fail;
  }

  FUNC_18(VAR_45, VAR_21);

  VAR_45->tx_qsize = FUNC_17(VAR_43, VAR_45->txq);
  VAR_45->rx_qsize = FUNC_16(VAR_43, VAR_45->rxq);

  if (FUNC_26(VAR_43, VAR_45, VAR_52)) {
   FUNC_13(VAR_43, "Gather list allocation failed\n");
   goto setup_nic_dev_fail;
  }

  if ((VAR_35 == 0) && FUNC_31(VAR_43, VAR_46))
   goto setup_nic_dev_fail;

  if (VAR_35 &&
      (FUNC_7(VAR_46) & VAR_4) &&
      (FUNC_7(VAR_46) & VAR_5) &&
      (FUNC_7(VAR_46) & VAR_6))
   FUNC_24(VAR_46, VAR_13,
     VAR_24 | VAR_25);

  if ((FUNC_7(VAR_46) & VAR_7))
   FUNC_24(VAR_46, VAR_19, 1);
  else
   FUNC_24(VAR_46, VAR_19, 0);

  if (FUNC_28(VAR_46))
   goto setup_nic_dev_fail;

  FUNC_12(VAR_43, "Setup NIC ifidx:%d mac:%02x%02x%02x%02x%02x%02x\n",
       VAR_62, VAR_61[0], VAR_61[1], VAR_61[2], VAR_61[3], VAR_61[4], VAR_61[5]);
  VAR_45->link_changes++;

  FUNC_18(VAR_45, VAR_22);






  FUNC_25(VAR_46, VAR_16,
           VAR_14);
  FUNC_24(VAR_46, VAR_17,
    VAR_18);
   FUNC_24(VAR_46, VAR_15,
     VAR_12);

  FUNC_12(VAR_43, "NIC ifidx:%d Setup successful\n", VAR_62);

  FUNC_14(VAR_43, VAR_48);
  VAR_45->vlan_attach =
      FUNC_0(VAR_41,
       VAR_39, VAR_45,
       VAR_3);
  VAR_45->vlan_detach =
      FUNC_0(VAR_42,
       VAR_40, VAR_45,
       VAR_3);


  FUNC_3(&VAR_45->stats_timer, 0);
  VAR_45->stats_interval = VAR_20;

  FUNC_9(VAR_45);
 }

 return (0);

setup_nic_dev_fail:

 FUNC_14(VAR_43, VAR_48);

 while (VAR_62--) {
  FUNC_13(VAR_43, "NIC ifidx:%d Setup failed\n", VAR_62);
  FUNC_11(VAR_43, VAR_62);
 }

 return (VAR_0);
}
