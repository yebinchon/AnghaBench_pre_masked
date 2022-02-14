
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct rx_update_gft_filter_data {int rx_qid_valid; int filter_action; void* vport_id; scalar_t__ flow_id; scalar_t__ flow_id_valid; void* rx_qid; void* pkt_hdr_length; int pkt_hdr_addr; } ;
struct TYPE_4__ {struct rx_update_gft_filter_data rx_update_gft; } ;
struct ecore_spq_entry {TYPE_2__ ramrod; } ;
struct ecore_spq_comp_cb {int dummy; } ;
struct ecore_sp_init_data {int comp_mode; struct ecore_spq_comp_cb* p_comp_data; int opaque_fid; int cid; } ;
struct ecore_ntuple_filter_params {scalar_t__ qid; int length; scalar_t__ addr; scalar_t__ b_is_add; int vport_id; } ;
struct TYPE_3__ {int opaque_fid; } ;
struct ecore_hwfn {TYPE_1__ hw_info; } ;
typedef int init_data ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*,scalar_t__,int ,char*,unsigned long long,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct ecore_sp_init_data*,int ,int) ;
 void* VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct ecore_hwfn*,scalar_t__,int *) ;
 int FUNC_5 (struct ecore_hwfn*,int ,scalar_t__*) ;
 int FUNC_6 (struct ecore_hwfn*,struct ecore_spq_entry**,int ,int ,struct ecore_sp_init_data*) ;
 int FUNC_7 (struct ecore_hwfn*) ;
 int FUNC_8 (struct ecore_hwfn*,struct ecore_spq_entry*,void*) ;

enum _ecore_status_t
FUNC_9(struct ecore_hwfn *VAR_11,
      struct ecore_spq_comp_cb *VAR_12,
      struct ecore_ntuple_filter_params *VAR_13)
{
 struct rx_update_gft_filter_data *VAR_14 = VAR_9;
 struct ecore_spq_entry *VAR_15 = VAR_9;
 struct ecore_sp_init_data VAR_16;
 u16 VAR_17 = 0;
 u8 VAR_18 = 0;
 enum _ecore_status_t VAR_19 = VAR_1;

 VAR_19 = FUNC_5(VAR_11, VAR_13->vport_id, &VAR_18);
 if (VAR_19 != VAR_5)
  return VAR_19;

 if (VAR_13->qid != VAR_2) {
  VAR_19 = FUNC_4(VAR_11, VAR_13->qid, &VAR_17);
  if (VAR_19 != VAR_5)
   return VAR_19;
 }


 FUNC_3(&VAR_16, 0, sizeof(VAR_16));
 VAR_16.cid = FUNC_7(VAR_11);

 VAR_16.opaque_fid = VAR_11->hw_info.opaque_fid;

 if (VAR_12) {
  VAR_16.comp_mode = VAR_3;
  VAR_16.p_comp_data = VAR_12;
 } else {
  VAR_16.comp_mode = VAR_4;
 }

 VAR_19 = FUNC_6(VAR_11, &VAR_15,
       VAR_6,
       VAR_10, &VAR_16);
 if (VAR_19 != VAR_5)
  return VAR_19;

 VAR_14 = &VAR_15->ramrod.rx_update_gft;

 FUNC_0(VAR_14->pkt_hdr_addr, VAR_13->addr);
 VAR_14->pkt_hdr_length = FUNC_2(VAR_13->length);

 if (VAR_13->qid != VAR_2) {
  VAR_14->rx_qid_valid = 1;
  VAR_14->rx_qid = FUNC_2(VAR_17);
 }

 VAR_14->flow_id_valid = 0;
 VAR_14->flow_id = 0;

 VAR_14->vport_id = FUNC_2 ((u16)VAR_18);
 VAR_14->filter_action = VAR_13->b_is_add ? VAR_7
           : VAR_8;

 FUNC_1(VAR_11, VAR_0,
     "V[%0x], Q[%04x] - %s filter from 0x%llx [length %04xb]\n",
     VAR_18, VAR_17,
     VAR_13->b_is_add ? "Adding" : "Removing",
     (unsigned long long)VAR_13->addr, VAR_13->length);

 return FUNC_8(VAR_11, VAR_15, VAR_9);
}
