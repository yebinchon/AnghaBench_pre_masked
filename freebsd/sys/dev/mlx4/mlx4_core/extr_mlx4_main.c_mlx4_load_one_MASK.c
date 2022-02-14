
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct pci_dev {int dev; int revision; } ;
struct TYPE_8__ {int num_ports; int num_comp_vectors; struct mlx4_dev_cap* qp1_proxy; struct mlx4_dev_cap* qp1_tunnel; struct mlx4_dev_cap* qp0_proxy; struct mlx4_dev_cap* qp0_tunnel; struct mlx4_dev_cap* qp0_qkey; } ;
struct mlx4_dev {int flags; struct mlx4_dev_cap* dev_vfs; TYPE_4__* persist; TYPE_3__ caps; scalar_t__ num_slaves; int numa_node; int rev_id; } ;
struct TYPE_7__ {int port1; int port2; } ;
struct TYPE_6__ {int pool_lock; int pool_bm; } ;
struct TYPE_10__ {int context_lock; } ;
struct mlx4_priv {struct mlx4_dev dev; int * port; scalar_t__ removed; TYPE_2__ v2p; TYPE_1__ msix_ctl; int opreq_task; int opreq_count; int bf_mutex; int bf_list; TYPE_5__ cmd; int pgdir_mutex; int pgdir_list; int bond_mutex; int port_mutex; int ctx_lock; int ctx_list; } ;
struct mlx4_dev_cap {int flags2; int min_port; int n_ports; } ;
struct TYPE_9__ {int num_vfs; unsigned int* nvfs; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct mlx4_dev_cap*) ;
 struct mlx4_dev_cap* FUNC_8 (int,int ) ;
 int FUNC_9 (unsigned int*,int*,int) ;
 int FUNC_10 (struct mlx4_dev_cap*,int ,int) ;
 int FUNC_11 (struct mlx4_dev*) ;
 int FUNC_12 (struct mlx4_dev*,struct mlx4_dev_cap*) ;
 int FUNC_13 (struct mlx4_dev*) ;
 scalar_t__ FUNC_14 (struct mlx4_dev*,struct mlx4_dev_cap*,int*) ;
 int FUNC_15 (struct mlx4_dev*) ;
 int FUNC_16 (struct mlx4_dev*) ;
 int FUNC_17 (struct mlx4_dev*) ;
 int FUNC_18 (struct mlx4_dev*) ;
 int FUNC_19 (struct mlx4_dev*) ;
 int FUNC_20 (struct mlx4_dev*) ;
 int FUNC_21 (struct mlx4_dev*) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (struct mlx4_dev*) ;
 int FUNC_24 (struct mlx4_dev*) ;
 int FUNC_25 (struct mlx4_dev*) ;
 int FUNC_26 (struct mlx4_dev*) ;
 int FUNC_27 (struct mlx4_dev*) ;
 int FUNC_28 (struct mlx4_dev*) ;
 int FUNC_29 (struct mlx4_dev*) ;
 int FUNC_30 (struct mlx4_dev*,int ) ;
 int FUNC_31 (struct mlx4_dev*) ;
 int FUNC_32 (struct mlx4_dev*) ;
 int FUNC_33 (struct mlx4_dev*) ;
 int FUNC_34 (struct mlx4_dev*,struct pci_dev*,int,int,int) ;
 int FUNC_35 (struct mlx4_dev*,char*,...) ;
 int FUNC_36 (struct mlx4_dev*) ;
 int FUNC_37 (struct mlx4_dev*) ;
 int FUNC_38 (struct mlx4_dev*,int ) ;
 int FUNC_39 (struct mlx4_dev*) ;
 int FUNC_40 (struct mlx4_dev*) ;
 int FUNC_41 (struct mlx4_dev*) ;
 int FUNC_42 (struct mlx4_dev*,int) ;
 int FUNC_43 (struct mlx4_dev*) ;
 int FUNC_44 (struct mlx4_dev*) ;
 scalar_t__ FUNC_45 (struct mlx4_dev*) ;
 scalar_t__ FUNC_46 (struct mlx4_dev*) ;
 scalar_t__ FUNC_47 (struct mlx4_dev*) ;
 int FUNC_48 (struct mlx4_dev*) ;
 int FUNC_49 (struct mlx4_dev*) ;
 int VAR_18 ;
 int FUNC_50 (struct mlx4_dev*) ;
 int FUNC_51 (struct mlx4_dev*) ;
 int FUNC_52 (struct mlx4_dev*) ;
 int FUNC_53 (struct mlx4_dev*) ;
 int FUNC_54 (struct mlx4_dev*) ;
 int FUNC_55 (struct mlx4_dev*) ;
 int FUNC_56 (struct mlx4_dev*,char*) ;
 int FUNC_57 (int *) ;
 int VAR_19 ;
 int FUNC_58 (struct pci_dev*) ;
 int FUNC_59 (struct pci_dev*) ;
 int FUNC_60 (struct pci_dev*) ;
 int VAR_20 ;
 int FUNC_61 (int *) ;

__attribute__((used)) static int FUNC_62(struct pci_dev *VAR_21, int VAR_22,
    int VAR_23, int *VAR_24, struct mlx4_priv *VAR_25,
    int VAR_26)
{
 struct mlx4_dev *VAR_27;
 unsigned VAR_28 = 0;
 int VAR_29;
 int VAR_30;
 int VAR_31;
 struct mlx4_dev_cap *VAR_32 = ((void*)0);
 int VAR_33 = 0;

 VAR_27 = &VAR_25->dev;

 FUNC_0(&VAR_25->ctx_list);
 FUNC_61(&VAR_25->ctx_lock);

 FUNC_57(&VAR_25->port_mutex);
 FUNC_57(&VAR_25->bond_mutex);

 FUNC_0(&VAR_25->pgdir_list);
 FUNC_57(&VAR_25->pgdir_mutex);
 FUNC_61(&VAR_25->cmd.context_lock);

 FUNC_0(&VAR_25->bf_list);
 FUNC_57(&VAR_25->bf_mutex);

 VAR_27->rev_id = VAR_21->revision;
 VAR_27->numa_node = FUNC_6(&VAR_21->dev);


 if (VAR_22 & VAR_16) {
  FUNC_56(VAR_27, "Detected virtual function - running in slave mode\n");
  VAR_27->flags |= VAR_13;
 } else {



  VAR_29 = FUNC_39(VAR_27);
  if (VAR_29) {
   if (VAR_29 < 0)
    return VAR_29;
   else {
    FUNC_56(VAR_27, "Multiple PFs not yet supported - Skipping PF\n");
    return -VAR_2;
   }
  }

  FUNC_4(&VAR_25->opreq_count, 0);
  FUNC_1(&VAR_25->opreq_task, VAR_18);






  VAR_29 = FUNC_52(VAR_27);
  if (VAR_29) {
   FUNC_35(VAR_27, "Failed to reset HCA, aborting\n");
   goto err_sriov;
  }

  if (VAR_23) {
   VAR_27->flags = VAR_11;
   VAR_33 = FUNC_60(VAR_21);
   if (VAR_33)
    VAR_27->flags |= VAR_14;
   VAR_27->persist->num_vfs = VAR_23;
  }
 }




 VAR_27->persist->state = VAR_9;

slave_start:
 VAR_29 = FUNC_31(VAR_27);
 if (VAR_29) {
  FUNC_35(VAR_27, "Failed to init command interface, aborting\n");
  goto err_sriov;
 }




 if (FUNC_46(VAR_27)) {
  if (FUNC_45(VAR_27)) {
   VAR_27->num_slaves = VAR_15;

  } else {
   VAR_27->num_slaves = 0;
   VAR_29 = FUNC_49(VAR_27);
   if (VAR_29) {
    FUNC_35(VAR_27, "Failed to init slave mfunc interface, aborting\n");
    goto err_cmd;
   }
  }
 }

 VAR_29 = FUNC_40(VAR_27);
 if (VAR_29) {
  FUNC_35(VAR_27, "Failed to init fw, aborting.\n");
  goto err_mfunc;
 }

 if (FUNC_45(VAR_27)) {

  if (!VAR_32) {
   VAR_32 = FUNC_8(sizeof(*VAR_32), VAR_5);

   if (!VAR_32) {
    VAR_29 = -VAR_3;
    goto err_fw;
   }

   VAR_29 = FUNC_12(VAR_27, VAR_32);
   if (VAR_29) {
    FUNC_35(VAR_27, "QUERY_DEV_CAP command failed, aborting.\n");
    goto err_fw;
   }

   if (FUNC_14(VAR_27, VAR_32, VAR_24))
    goto err_fw;

   if (!(VAR_32->flags2 & VAR_10)) {
    u64 VAR_34 = FUNC_34(VAR_27, VAR_21,
          VAR_23,
          VAR_33,
          VAR_26);

    FUNC_30(VAR_27, VAR_7);
    VAR_27->flags = VAR_34;
    if (!FUNC_2(VAR_27->flags)) {
     FUNC_35(VAR_27, "Invalid SRIOV state\n");
     goto err_sriov;
    }
    VAR_29 = FUNC_52(VAR_27);
    if (VAR_29) {
     FUNC_35(VAR_27, "Failed to reset HCA, aborting.\n");
     goto err_sriov;
    }
    goto slave_start;
   }
  } else {




   FUNC_10(VAR_32, 0, sizeof(*VAR_32));
   VAR_29 = FUNC_12(VAR_27, VAR_32);
   if (VAR_29) {
    FUNC_35(VAR_27, "QUERY_DEV_CAP command failed, aborting.\n");
    goto err_fw;
   }

   if (FUNC_14(VAR_27, VAR_32, VAR_24))
    goto err_fw;
  }
 }

 VAR_29 = FUNC_41(VAR_27);
 if (VAR_29) {
  if (VAR_29 == -VAR_0) {


   FUNC_30(VAR_27, VAR_7);

   if (VAR_27->flags & VAR_14) {
    if (!VAR_33)
     FUNC_59(VAR_21);
    if (FUNC_45(VAR_27) && !VAR_26)
     FUNC_3(&VAR_20);
    VAR_27->flags &= ~VAR_14;
   }
   if (!FUNC_47(VAR_27))
    FUNC_37(VAR_27);
   VAR_27->flags |= VAR_13;
   VAR_27->flags &= ~VAR_11;
   goto slave_start;
  } else
   goto err_fw;
 }

 if (FUNC_45(VAR_27) && (VAR_32->flags2 & VAR_10)) {
  u64 VAR_35 = FUNC_34(VAR_27, VAR_21, VAR_23,
        VAR_33, VAR_26);

  if ((VAR_27->flags ^ VAR_35) & (VAR_11 | VAR_13)) {
   FUNC_30(VAR_27, VAR_8);
   VAR_27->flags = VAR_35;
   VAR_29 = FUNC_31(VAR_27);
   if (VAR_29) {



    FUNC_35(VAR_27, "Failed to init VHCR command interface, aborting\n");
    goto err_close;
   }
  } else {
   VAR_27->flags = VAR_35;
  }

  if (!FUNC_2(VAR_27->flags)) {
   FUNC_35(VAR_27, "Invalid SRIOV state\n");
   goto err_close;
  }
 }





 if (!FUNC_47(VAR_27))
  FUNC_15(VAR_27);



 if (FUNC_45(VAR_27)) {
  if (VAR_27->caps.num_ports < 2 &&
      VAR_19 > 1) {
   VAR_29 = -VAR_2;
   FUNC_35(VAR_27,
     "Error: Trying to configure VFs on port 2, but HCA has only %d physical ports\n",
     VAR_27->caps.num_ports);
   goto err_close;
  }
  FUNC_9(VAR_27->persist->nvfs, VAR_24, sizeof(VAR_27->persist->nvfs));

  for (VAR_31 = 0;
       VAR_31 < sizeof(VAR_27->persist->nvfs)/
       sizeof(VAR_27->persist->nvfs[0]); VAR_31++) {
   unsigned VAR_36;

   for (VAR_36 = 0; VAR_36 < VAR_27->persist->nvfs[VAR_31]; ++VAR_28, ++VAR_36) {
    VAR_27->dev_vfs[VAR_28].min_port = VAR_31 < 2 ? VAR_31 + 1 : 1;
    VAR_27->dev_vfs[VAR_28].n_ports = VAR_31 < 2 ? 1 :
     VAR_27->caps.num_ports;
   }
  }




  VAR_29 = FUNC_49(VAR_27);
  if (VAR_29) {
   FUNC_35(VAR_27, "Failed to init master mfunc interface, aborting.\n");
   goto err_close;
  }
 }

 VAR_29 = FUNC_13(VAR_27);
 if (VAR_29)
  goto err_master_mfunc;

 FUNC_5(VAR_25->msix_ctl.pool_bm, VAR_6);
 FUNC_57(&VAR_25->msix_ctl.pool_lock);

 FUNC_33(VAR_27);
 if ((FUNC_46(VAR_27)) &&
     !(VAR_27->flags & VAR_12)) {
  VAR_29 = -VAR_4;
  FUNC_35(VAR_27, "INTx is not supported in multi-function mode, aborting\n");
  goto err_free_eq;
 }

 if (!FUNC_47(VAR_27)) {
  VAR_29 = FUNC_44(VAR_27);
  if (VAR_29)
   goto err_disable_msix;
 }

 FUNC_43(VAR_27);

 VAR_29 = FUNC_54(VAR_27);
 if (VAR_29 == -VAR_1 && (VAR_27->flags & VAR_12) &&
     !FUNC_46(VAR_27)) {
  VAR_27->flags &= ~VAR_12;
  VAR_27->caps.num_comp_vectors = 1;
  FUNC_58(VAR_21);
  VAR_29 = FUNC_54(VAR_27);
 }

 if (VAR_29)
  goto err_steer;




 if (FUNC_45(VAR_27)) {
  VAR_29 = FUNC_11(VAR_27);
  if (VAR_29) {
   FUNC_35(VAR_27, " Failed to arm comm channel eq: %x\n",
     VAR_29);
   goto err_steer;
  }
 }

 for (VAR_30 = 1; VAR_30 <= VAR_27->caps.num_ports; VAR_30++) {
  VAR_29 = FUNC_42(VAR_27, VAR_30);
  if (VAR_29)
   goto err_port;
 }

 VAR_25->v2p.port1 = 1;
 VAR_25->v2p.port2 = 2;

 VAR_29 = FUNC_50(VAR_27);
 if (VAR_29)
  goto err_port;

 FUNC_51(VAR_27);

 FUNC_53(VAR_27);
 FUNC_55(VAR_27);

 VAR_25->removed = 0;

 if (FUNC_45(VAR_27) && VAR_27->persist->num_vfs && !VAR_26)
  FUNC_3(&VAR_20);

 FUNC_7(VAR_32);
 return 0;

err_port:
 for (--VAR_30; VAR_30 >= 1; --VAR_30)
  FUNC_22(&VAR_25->port[VAR_30]);

 FUNC_16(VAR_27);
 FUNC_23(VAR_27);
 FUNC_24(VAR_27);
 FUNC_17(VAR_27);
 FUNC_32(VAR_27);
 FUNC_18(VAR_27);
 FUNC_19(VAR_27);
 FUNC_20(VAR_27);
 FUNC_26(VAR_27);
 FUNC_21(VAR_27);
 FUNC_25(VAR_27);

err_steer:
 if (!FUNC_47(VAR_27))
  FUNC_27(VAR_27);

err_disable_msix:
 if (VAR_27->flags & VAR_12)
  FUNC_58(VAR_21);

err_free_eq:
 FUNC_36(VAR_27);

err_master_mfunc:
 if (FUNC_45(VAR_27)) {
  FUNC_38(VAR_27, VAR_17);
  FUNC_48(VAR_27);
 }

 if (FUNC_47(VAR_27)) {
  FUNC_7(VAR_27->caps.qp0_qkey);
  FUNC_7(VAR_27->caps.qp0_tunnel);
  FUNC_7(VAR_27->caps.qp0_proxy);
  FUNC_7(VAR_27->caps.qp1_tunnel);
  FUNC_7(VAR_27->caps.qp1_proxy);
 }

err_close:
 FUNC_29(VAR_27);

err_fw:
 FUNC_28(VAR_27);

err_mfunc:
 if (FUNC_47(VAR_27))
  FUNC_48(VAR_27);

err_cmd:
 FUNC_30(VAR_27, VAR_7);

err_sriov:
 if (VAR_27->flags & VAR_14 && !VAR_33) {
  FUNC_59(VAR_21);
  VAR_27->flags &= ~VAR_14;
 }

 if (FUNC_45(VAR_27) && VAR_27->persist->num_vfs && !VAR_26)
  FUNC_3(&VAR_20);

 FUNC_7(VAR_25->dev.dev_vfs);

 if (!FUNC_47(VAR_27))
  FUNC_37(VAR_27);

 FUNC_7(VAR_32);
 return VAR_29;
}
