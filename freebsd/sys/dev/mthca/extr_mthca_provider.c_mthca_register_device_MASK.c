
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {unsigned long long uverbs_cmd_mask; int num_comp_vectors; int dev; int post_recv; int post_send; int req_notify_cq; int process_mad; int detach_mcast; int attach_mcast; int map_phys_fmr; int dealloc_fmr; int unmap_fmr; int alloc_fmr; int get_dev_fw_str; int get_port_immutable; int dereg_mr; int reg_user_mr; int get_dma_mr; int poll_cq; int destroy_cq; int resize_cq; int create_cq; int destroy_qp; int query_qp; int modify_qp; int create_qp; int post_srq_recv; int destroy_srq; int query_srq; int modify_srq; int create_srq; int destroy_ah; int query_ah; int create_ah; int dealloc_pd; int alloc_pd; int mmap; int dealloc_ucontext; int alloc_ucontext; int query_gid; int query_pkey; int modify_port; int modify_device; int query_port; int query_device; int * dma_device; int phys_port_cnt; int node_type; int uverbs_abi_ver; int owner; int name; } ;
struct TYPE_5__ {int num_ports; } ;
struct mthca_dev {int mthca_flags; TYPE_3__ ib_dev; int cap_mask_mutex; TYPE_2__* pdev; TYPE_1__ limits; } ;
struct TYPE_6__ {int dev; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long long VAR_2 ;
 unsigned long long VAR_3 ;
 unsigned long long VAR_4 ;
 unsigned long long VAR_5 ;
 unsigned long long VAR_6 ;
 unsigned long long VAR_7 ;
 unsigned long long VAR_8 ;
 unsigned long long VAR_9 ;
 unsigned long long VAR_10 ;
 unsigned long long VAR_11 ;
 unsigned long long VAR_12 ;
 unsigned long long VAR_13 ;
 unsigned long long VAR_14 ;
 unsigned long long VAR_15 ;
 unsigned long long VAR_16 ;
 unsigned long long VAR_17 ;
 unsigned long long VAR_18 ;
 unsigned long long VAR_19 ;
 unsigned long long VAR_20 ;
 unsigned long long VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_1 (int *,int ) ;
 int VAR_27 ;
 int FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int * VAR_49 ;
 int VAR_50 ;
 int FUNC_4 (struct mthca_dev*) ;
 scalar_t__ FUNC_5 (struct mthca_dev*) ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int FUNC_6 (struct mthca_dev*) ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int VAR_74 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,char*,int ) ;

int FUNC_9(struct mthca_dev *VAR_75)
{
 int VAR_76;
 int VAR_77;

 VAR_76 = FUNC_4(VAR_75);
 if (VAR_76)
  return VAR_76;

 FUNC_8(VAR_75->ib_dev.name, "mthca%d", VAR_0);
 VAR_75->ib_dev.owner = VAR_26;

 VAR_75->ib_dev.uverbs_abi_ver = VAR_24;
 VAR_75->ib_dev.uverbs_cmd_mask =
  (1ull << VAR_13) |
  (1ull << VAR_16) |
  (1ull << VAR_17) |
  (1ull << VAR_1) |
  (1ull << VAR_7) |
  (1ull << VAR_20) |
  (1ull << VAR_8) |
  (1ull << VAR_3) |
  (1ull << VAR_4) |
  (1ull << VAR_21) |
  (1ull << VAR_9) |
  (1ull << VAR_5) |
  (1ull << VAR_18) |
  (1ull << VAR_14) |
  (1ull << VAR_10) |
  (1ull << VAR_2) |
  (1ull << VAR_12);
 VAR_75->ib_dev.node_type = VAR_25;
 VAR_75->ib_dev.phys_port_cnt = VAR_75->limits.num_ports;
 VAR_75->ib_dev.num_comp_vectors = 1;
 VAR_75->ib_dev.dma_device = &VAR_75->pdev->dev;
 VAR_75->ib_dev.query_device = VAR_61;
 VAR_75->ib_dev.query_port = VAR_64;
 VAR_75->ib_dev.modify_device = VAR_52;
 VAR_75->ib_dev.modify_port = VAR_53;
 VAR_75->ib_dev.query_pkey = VAR_63;
 VAR_75->ib_dev.query_gid = VAR_62;
 VAR_75->ib_dev.alloc_ucontext = VAR_33;
 VAR_75->ib_dev.dealloc_ucontext = VAR_44;
 VAR_75->ib_dev.mmap = VAR_51;
 VAR_75->ib_dev.alloc_pd = VAR_32;
 VAR_75->ib_dev.dealloc_pd = VAR_43;
 VAR_75->ib_dev.create_ah = VAR_28;
 VAR_75->ib_dev.query_ah = VAR_30;
 VAR_75->ib_dev.destroy_ah = VAR_29;

 if (VAR_75->mthca_flags & VAR_23) {
  VAR_75->ib_dev.create_srq = VAR_41;
  VAR_75->ib_dev.modify_srq = VAR_55;
  VAR_75->ib_dev.query_srq = VAR_66;
  VAR_75->ib_dev.destroy_srq = VAR_48;
  VAR_75->ib_dev.uverbs_cmd_mask |=
   (1ull << VAR_6) |
   (1ull << VAR_15) |
   (1ull << VAR_19) |
   (1ull << VAR_11);

  if (FUNC_5(VAR_75))
   VAR_75->ib_dev.post_srq_recv = VAR_38;
  else
   VAR_75->ib_dev.post_srq_recv = VAR_73;
 }

 VAR_75->ib_dev.create_qp = VAR_40;
 VAR_75->ib_dev.modify_qp = VAR_54;
 VAR_75->ib_dev.query_qp = VAR_65;
 VAR_75->ib_dev.destroy_qp = VAR_47;
 VAR_75->ib_dev.create_cq = VAR_39;
 VAR_75->ib_dev.resize_cq = VAR_68;
 VAR_75->ib_dev.destroy_cq = VAR_46;
 VAR_75->ib_dev.poll_cq = VAR_58;
 VAR_75->ib_dev.get_dma_mr = VAR_50;
 VAR_75->ib_dev.reg_user_mr = VAR_67;
 VAR_75->ib_dev.dereg_mr = VAR_45;
 VAR_75->ib_dev.get_port_immutable = VAR_59;
 VAR_75->ib_dev.get_dev_fw_str = VAR_27;

 if (VAR_75->mthca_flags & VAR_22) {
  VAR_75->ib_dev.alloc_fmr = VAR_31;
  VAR_75->ib_dev.unmap_fmr = VAR_74;
  VAR_75->ib_dev.dealloc_fmr = VAR_42;
  if (FUNC_5(VAR_75))
   VAR_75->ib_dev.map_phys_fmr = VAR_35;
  else
   VAR_75->ib_dev.map_phys_fmr = VAR_70;
 }

 VAR_75->ib_dev.attach_mcast = VAR_56;
 VAR_75->ib_dev.detach_mcast = VAR_57;
 VAR_75->ib_dev.process_mad = VAR_60;

 if (FUNC_5(VAR_75)) {
  VAR_75->ib_dev.req_notify_cq = VAR_34;
  VAR_75->ib_dev.post_send = VAR_37;
  VAR_75->ib_dev.post_recv = VAR_36;
 } else {
  VAR_75->ib_dev.req_notify_cq = VAR_69;
  VAR_75->ib_dev.post_send = VAR_72;
  VAR_75->ib_dev.post_recv = VAR_71;
 }

 FUNC_7(&VAR_75->cap_mask_mutex);

 VAR_76 = FUNC_2(&VAR_75->ib_dev, ((void*)0));
 if (VAR_76)
  return VAR_76;

 for (VAR_77 = 0; VAR_77 < FUNC_0(VAR_49); ++VAR_77) {
  VAR_76 = FUNC_1(&VAR_75->ib_dev.dev,
      VAR_49[VAR_77]);
  if (VAR_76) {
   FUNC_3(&VAR_75->ib_dev);
   return VAR_76;
  }
 }

 FUNC_6(VAR_75);

 return 0;
}
