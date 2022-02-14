
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct core_tx_start_ramrod_data {int stats_en; int gsi_offload_flag; void* conn_type; void* qm_pq_id; void* pbl_size; int pbl_base_addr; int stats_id; void* mtu; int sb_index; void* sb_id; } ;
struct TYPE_4__ {struct core_tx_start_ramrod_data core_tx_queue_start; } ;
struct ecore_spq_entry {TYPE_1__ ramrod; } ;
struct ecore_sp_init_data {int comp_mode; int opaque_fid; int cid; } ;
struct ecore_ll2_tx_queue {int db_msg; int doorbell_addr; int txq_chain; int tx_sb_index; } ;
struct TYPE_6__ {int conn_type; int tx_tc; int gsi_enable; scalar_t__ mtu; } ;
struct ecore_ll2_info {int tx_stats_en; TYPE_3__ input; int tx_stats_id; int cid; struct ecore_ll2_tx_queue tx_queue; } ;
struct TYPE_5__ {int personality; int opaque_fid; } ;
struct ecore_hwfn {int p_dev; TYPE_2__ hw_info; } ;
typedef int init_data ;
typedef enum ecore_ll2_conn_type { ____Placeholder_ecore_ll2_conn_type } ecore_ll2_conn_type ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ecore_hwfn*,int,char*,int) ;
 int FUNC_2 (struct ecore_ll2_info*) ;





 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct ecore_sp_init_data*,int ,int) ;
 void* VAR_7 ;

 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;

 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,int *,int ,int ) ;
 scalar_t__ FUNC_8 (struct ecore_hwfn*,int ) ;
 scalar_t__ FUNC_9 (struct ecore_hwfn*) ;
 int FUNC_10 (struct ecore_hwfn*,struct ecore_spq_entry**,int ,int ,struct ecore_sp_init_data*) ;
 int FUNC_11 (struct ecore_hwfn*,struct ecore_spq_entry*,void*) ;

__attribute__((used)) static enum _ecore_status_t FUNC_12(struct ecore_hwfn *VAR_17,
       struct ecore_ll2_info *VAR_18)
{
 enum ecore_ll2_conn_type VAR_19 = VAR_18->input.conn_type;
 struct ecore_ll2_tx_queue *VAR_20 = &VAR_18->tx_queue;
 struct core_tx_start_ramrod_data *VAR_21 = VAR_7;
 struct ecore_spq_entry *VAR_22 = VAR_7;
 struct ecore_sp_init_data VAR_23;
 u16 VAR_24 = 0, VAR_25;
 enum _ecore_status_t VAR_26 = VAR_3;

 if (!FUNC_2(VAR_18))
  return VAR_6;

 if (VAR_18->input.conn_type == 131)
  VAR_18->tx_stats_en = 0;
 else
  VAR_18->tx_stats_en = 1;


 FUNC_4(&VAR_23, 0, sizeof(VAR_23));
 VAR_23.cid = VAR_18->cid;
 VAR_23.opaque_fid = VAR_17->hw_info.opaque_fid;
 VAR_23.comp_mode = VAR_5;

 VAR_26 = FUNC_10(VAR_17, &VAR_22,
       VAR_0,
       VAR_11, &VAR_23);
 if (VAR_26 != VAR_6)
  return VAR_26;

 VAR_21 = &VAR_22->ramrod.core_tx_queue_start;

 VAR_21->sb_id = FUNC_3(FUNC_9(VAR_17));
 VAR_21->sb_index = VAR_20->tx_sb_index;
 VAR_21->mtu = FUNC_3(VAR_18->input.mtu);
 VAR_21->stats_en = VAR_18->tx_stats_en;
 VAR_21->stats_id = VAR_18->tx_stats_id;

 FUNC_0(VAR_21->pbl_base_addr,
         FUNC_6(&VAR_20->txq_chain));
 VAR_25 = (u16)FUNC_5(&VAR_20->txq_chain);
 VAR_21->pbl_size = FUNC_3(VAR_25);


 switch (VAR_18->input.tx_tc) {
 case 128:
  VAR_24 = FUNC_8(VAR_17, VAR_8);
  break;
 case 129:
  VAR_24 = FUNC_8(VAR_17, VAR_10);
  break;
 default:
  VAR_24 = FUNC_8(VAR_17, VAR_9);
 }

 VAR_21->qm_pq_id = FUNC_3(VAR_24);

 switch (VAR_19) {
 case 134:
  VAR_21->conn_type = VAR_13;
  break;
 case 133:
  VAR_21->conn_type = VAR_14;
  break;
 case 130:
  VAR_21->conn_type = VAR_16;
  break;
 case 132:
  VAR_21->conn_type = VAR_15;
  break;
 case 131:
  if (VAR_17->hw_info.personality == VAR_4) {
   VAR_21->conn_type = VAR_14;
  } else {
   VAR_21->conn_type = VAR_15;
  }
  break;
 default:
  VAR_21->conn_type = VAR_12;
  FUNC_1(VAR_17, 0, "Unknown connection type: %d\n",
     VAR_19);
 }

 VAR_21->gsi_offload_flag = VAR_18->input.gsi_enable;

 VAR_26 = FUNC_11(VAR_17, VAR_22, VAR_7);
 if (VAR_26 != VAR_6)
  return VAR_26;

 VAR_26 = FUNC_7(VAR_17->p_dev, VAR_20->doorbell_addr,
       &VAR_20->db_msg, VAR_2,
       VAR_1);
 return VAR_26;
}
