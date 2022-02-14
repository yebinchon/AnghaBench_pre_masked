
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int num_qps; int reserved_qps; int flags; int num_mgms; int num_amgms; scalar_t__ num_mpts; int pkey_table_len; int local_ca_ack_delay; int max_srq_sge; int max_srq_wqes; scalar_t__ reserved_srqs; scalar_t__ num_srqs; int max_qp_init_rdma; scalar_t__ reserved_pds; scalar_t__ num_pds; scalar_t__ reserved_mrws; int max_cqes; scalar_t__ reserved_cqs; scalar_t__ num_cqs; int max_sg; int max_wqes; int page_size_cap; } ;
struct TYPE_3__ {int rdb_shift; } ;
struct mthca_dev {int mthca_flags; TYPE_2__ limits; TYPE_1__ qp_table; int device_cap_flags; int fw_ver; } ;
struct ib_udata {scalar_t__ outlen; scalar_t__ inlen; } ;
struct ib_smp {scalar_t__ data; int attr_id; } ;
struct ib_device_attr {int vendor_id; int hw_ver; unsigned long long max_mr_size; int max_qp; int max_qp_rd_atom; int max_res_rd_atom; int max_mcast_grp; int max_mcast_qp_attach; int max_total_mcast_qp_attach; int max_map_per_fmr; int max_pkeys; int atomic_cap; int local_ca_ack_delay; int max_srq_sge; int max_srq_wr; scalar_t__ max_srq; int max_qp_init_rd_atom; scalar_t__ max_pd; scalar_t__ max_mr; int max_cqe; scalar_t__ max_cq; int max_sge; int max_sge_rd; int max_qp_wr; int page_size_cap; int sys_image_guid; int vendor_part_id; int device_cap_flags; int fw_ver; } ;
struct ib_device {int dummy; } ;
typedef int __be32 ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct ib_smp*) ;
 int FUNC_4 (struct ib_smp*) ;
 struct ib_smp* FUNC_5 (int,int ) ;
 struct ib_smp* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,scalar_t__,int) ;
 int FUNC_8 (struct ib_device_attr*,int ,int) ;
 int FUNC_9 (struct mthca_dev*,int,int,int,int *,int *,struct ib_smp*,struct ib_smp*) ;
 struct mthca_dev* FUNC_10 (struct ib_device*) ;

__attribute__((used)) static int FUNC_11(struct ib_device *VAR_9, struct ib_device_attr *VAR_10,
         struct ib_udata *VAR_11)
{
 struct ib_smp *VAR_12 = ((void*)0);
 struct ib_smp *VAR_13 = ((void*)0);
 int VAR_14 = -VAR_2;
 struct mthca_dev *VAR_15 = FUNC_10(VAR_9);

 if (VAR_11->inlen || VAR_11->outlen)
  return -VAR_1;

 VAR_12 = FUNC_6(sizeof *VAR_12, VAR_3);
 VAR_13 = FUNC_5(sizeof *VAR_13, VAR_3);
 if (!VAR_12 || !VAR_13)
  goto out;

 FUNC_8(VAR_10, 0, sizeof *VAR_10);

 VAR_10->fw_ver = VAR_15->fw_ver;

 FUNC_3(VAR_12);
 VAR_12->attr_id = VAR_6;

 VAR_14 = FUNC_9(VAR_15, 1, 1,
       1, ((void*)0), ((void*)0), VAR_12, VAR_13);
 if (VAR_14)
  goto out;

 VAR_10->device_cap_flags = VAR_15->device_cap_flags;
 VAR_10->vendor_id = FUNC_1((__be32 *) (VAR_13->data + 36)) &
  0xffffff;
 VAR_10->vendor_part_id = FUNC_0((__be16 *) (VAR_13->data + 30));
 VAR_10->hw_ver = FUNC_1((__be32 *) (VAR_13->data + 32));
 FUNC_7(&VAR_10->sys_image_guid, VAR_13->data + 4, 8);

 VAR_10->max_mr_size = ~0ull;
 VAR_10->page_size_cap = VAR_15->limits.page_size_cap;
 VAR_10->max_qp = VAR_15->limits.num_qps - VAR_15->limits.reserved_qps;
 VAR_10->max_qp_wr = VAR_15->limits.max_wqes;
 VAR_10->max_sge = VAR_15->limits.max_sg;
 VAR_10->max_sge_rd = VAR_10->max_sge;
 VAR_10->max_cq = VAR_15->limits.num_cqs - VAR_15->limits.reserved_cqs;
 VAR_10->max_cqe = VAR_15->limits.max_cqes;
 VAR_10->max_mr = VAR_15->limits.num_mpts - VAR_15->limits.reserved_mrws;
 VAR_10->max_pd = VAR_15->limits.num_pds - VAR_15->limits.reserved_pds;
 VAR_10->max_qp_rd_atom = 1 << VAR_15->qp_table.rdb_shift;
 VAR_10->max_qp_init_rd_atom = VAR_15->limits.max_qp_init_rdma;
 VAR_10->max_res_rd_atom = VAR_10->max_qp_rd_atom * VAR_10->max_qp;
 VAR_10->max_srq = VAR_15->limits.num_srqs - VAR_15->limits.reserved_srqs;
 VAR_10->max_srq_wr = VAR_15->limits.max_srq_wqes;
 VAR_10->max_srq_sge = VAR_15->limits.max_srq_sge;
 VAR_10->local_ca_ack_delay = VAR_15->limits.local_ca_ack_delay;
 VAR_10->atomic_cap = VAR_15->limits.flags & VAR_0 ?
     VAR_4 : VAR_5;
 VAR_10->max_pkeys = VAR_15->limits.pkey_table_len;
 VAR_10->max_mcast_grp = VAR_15->limits.num_mgms + VAR_15->limits.num_amgms;
 VAR_10->max_mcast_qp_attach = VAR_8;
 VAR_10->max_total_mcast_qp_attach = VAR_10->max_mcast_qp_attach *
        VAR_10->max_mcast_grp;





 if (VAR_15->mthca_flags & VAR_7)
  VAR_10->max_map_per_fmr = 255;
 else
  VAR_10->max_map_per_fmr =
   (1 << (32 - FUNC_2(VAR_15->limits.num_mpts))) - 1;

 VAR_14 = 0;
 out:
 FUNC_4(VAR_12);
 FUNC_4(VAR_13);
 return VAR_14;
}
