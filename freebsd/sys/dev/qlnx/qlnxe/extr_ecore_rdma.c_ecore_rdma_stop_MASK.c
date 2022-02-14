
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct rdma_close_func_ramrod_data {scalar_t__ cnq_start_offset; int num_cnqs; } ;
struct TYPE_5__ {struct rdma_close_func_ramrod_data rdma_close_func; } ;
struct ecore_spq_entry {TYPE_2__ ramrod; } ;
struct ecore_sp_init_data {int comp_mode; int opaque_fid; } ;
struct ecore_ptt {int dummy; } ;
struct TYPE_4__ {int opaque_fid; } ;
struct ecore_hwfn {int b_rdma_enabled_in_prs; TYPE_3__* p_rdma_info; TYPE_1__ hw_info; int p_dev; scalar_t__ rdma_prs_search_reg; } ;
typedef int init_data ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_6__ {int num_cnqs; int proto; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*,...) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (struct ecore_hwfn*) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (struct ecore_sp_init_data*,int ,int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_6 (struct ecore_hwfn*,int ) ;
 int FUNC_7 (struct ecore_hwfn*) ;
 struct ecore_ptt* FUNC_8 (struct ecore_hwfn*) ;
 int FUNC_9 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_10 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__) ;
 int FUNC_11 (struct ecore_hwfn*) ;
 int FUNC_12 (struct ecore_hwfn*) ;
 int FUNC_13 (struct ecore_hwfn*) ;
 int FUNC_14 (struct ecore_hwfn*) ;
 int FUNC_15 (struct ecore_hwfn*,struct ecore_spq_entry**,int ,int ,struct ecore_sp_init_data*) ;
 int FUNC_16 (struct ecore_hwfn*,struct ecore_spq_entry*,int ) ;
 int FUNC_17 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__,int) ;

enum _ecore_status_t FUNC_18(void *VAR_10)
{
 struct ecore_hwfn *VAR_11 = (struct ecore_hwfn *)VAR_10;
 struct rdma_close_func_ramrod_data *VAR_12;
 struct ecore_sp_init_data VAR_13;
 struct ecore_spq_entry *VAR_14;
 struct ecore_ptt *VAR_15;
 u32 VAR_16;
 enum _ecore_status_t VAR_17 = VAR_4;

 FUNC_1(VAR_11, VAR_0, "RDMA stop\n");

 VAR_17 = FUNC_11(VAR_11);
 if (VAR_17 != VAR_3)
  return VAR_17;

 VAR_15 = FUNC_8(VAR_11);
 if (!VAR_15) {
  FUNC_1(VAR_11, VAR_0, "Failed to acquire PTT\n");
  return VAR_17;
 }






 FUNC_17(VAR_11, VAR_15, VAR_11->rdma_prs_search_reg, 0);
 VAR_11->b_rdma_enabled_in_prs = 0;

 FUNC_17(VAR_11,
   VAR_15,
   VAR_8,
   0);

 VAR_16 = FUNC_10(VAR_11,
        VAR_15,
        VAR_7);

 FUNC_17(VAR_11, VAR_15, VAR_7,
   (VAR_16 & 0xFFFE));






 if (FUNC_2(VAR_11->p_dev) && FUNC_3(VAR_11->p_dev)) {
  FUNC_0(VAR_11->p_dev,
         "On Everest 4 Big Bear Board revision A0 when RoCE driver is loaded L2 performance is sub-optimal (all traffic is routed to engine 0). For optimal L2 results either remove RoCE driver or use board revision B0\n");

  FUNC_17(VAR_11,
    VAR_15,
    VAR_5,
    0x55555555);
  FUNC_17(VAR_11,
    VAR_15,
    VAR_5 + 0x4,
    0x55555555);
 }


 if (FUNC_4(VAR_11)) {
  VAR_17 = FUNC_7(VAR_11);
  if (VAR_17 != VAR_3) {
   FUNC_9(VAR_11, VAR_15);
   return 0;
  }
 } else {
  VAR_17 = FUNC_13(VAR_11);
  if (VAR_17 != VAR_3) {
   FUNC_9(VAR_11, VAR_15);
   return 0;
  }
 }

 FUNC_9(VAR_11, VAR_15);


 FUNC_5(&VAR_13, 0, sizeof(VAR_13));
 VAR_13.opaque_fid = VAR_11->hw_info.opaque_fid;
 VAR_13.comp_mode = VAR_2;


 VAR_17 = FUNC_15(VAR_11, &VAR_14, VAR_9,
       VAR_11->p_rdma_info->proto, &VAR_13);
 if (VAR_17 != VAR_3)
  goto out;

 VAR_12 = &VAR_14->ramrod.rdma_close_func;

 VAR_12->num_cnqs = VAR_11->p_rdma_info->num_cnqs;
 VAR_12->cnq_start_offset = (u8)FUNC_6(VAR_11, VAR_1);

 VAR_17 = FUNC_16(VAR_11, VAR_14, VAR_6);

out:
 FUNC_12(VAR_11);

 FUNC_1(VAR_11, VAR_0, "RDMA stop done, rc = %d\n", VAR_17);
 return VAR_17;
}
