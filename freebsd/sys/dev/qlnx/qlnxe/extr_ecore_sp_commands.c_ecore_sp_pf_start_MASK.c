
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_15__ ;
typedef struct TYPE_21__ TYPE_14__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef size_t u8 ;
typedef int u16 ;
struct TYPE_24__ {void* tci; int tpid; } ;
struct TYPE_28__ {int enable_stag_pri_change; int pri_map_valid; size_t* inner_to_outer_pri_map; TYPE_2__ outer_tag; } ;
struct TYPE_21__ {int * minor_ver_arr; int * major_ver_arr; } ;
struct pf_start_ramrod_data {size_t event_ring_sb_index; size_t event_ring_num_pages; int allow_npar_tx_switching; size_t base_vf_id; size_t num_vfs; TYPE_6__ outer_tag_config; TYPE_14__ hsi_fp_ver; void* personality; int tunnel_config; int consolid_q_pbl_addr; int event_ring_pbl_addr; int mf_mode; void* log_type_mask; scalar_t__ dont_log_ramrods; int path_id; void* event_ring_sb_id; } ;
struct ecore_tunnel_info {int dummy; } ;
struct TYPE_23__ {struct pf_start_ramrod_data pf_start; } ;
struct ecore_spq_entry {TYPE_1__ ramrod; } ;
struct ecore_sp_init_data {int comp_mode; int opaque_fid; int cid; } ;
struct ecore_ptt {int dummy; } ;
struct TYPE_19__ {int ovlan; int personality; int opaque_fid; } ;
struct TYPE_25__ {scalar_t__ pri_type; } ;
struct ecore_hwfn {TYPE_13__* p_dev; TYPE_12__ hw_info; TYPE_11__* p_consq; TYPE_8__* p_eq; TYPE_5__* p_dcbx_info; TYPE_3__ ufp_info; } ;
struct ecore_hw_sriov_info {scalar_t__ total_vfs; scalar_t__ first_vf_in_pf; } ;
typedef int init_data ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_31__ {int p_phys_table; } ;
struct TYPE_29__ {int p_phys_table; } ;
struct TYPE_22__ {TYPE_7__ pbl_sp; } ;
struct TYPE_30__ {size_t eq_sb_index; TYPE_15__ chain; } ;
struct TYPE_26__ {scalar_t__ dcbx_enabled; } ;
struct TYPE_27__ {TYPE_4__ results; } ;
struct TYPE_20__ {int tunnel; struct ecore_hw_sriov_info* p_iov_info; int mf_bits; } ;
struct TYPE_17__ {TYPE_9__ pbl_sp; } ;
struct TYPE_18__ {TYPE_10__ chain; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ecore_hwfn*,int,char*,int) ;
 int FUNC_2 (struct ecore_hwfn*,int ,char*,int,size_t,int ,void*) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct ecore_hwfn*) ;






 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 size_t VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 void* FUNC_4 (int) ;
 int FUNC_5 (struct ecore_sp_init_data*,int ,int) ;
 void* VAR_19 ;
 scalar_t__ FUNC_6 (int ,int *) ;
 void* VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 void* VAR_23 ;
 int VAR_24 ;
 scalar_t__ FUNC_7 (TYPE_15__*) ;
 int FUNC_8 (TYPE_15__*) ;
 int FUNC_9 (struct ecore_hwfn*,int ) ;
 int FUNC_10 (struct ecore_hwfn*) ;
 int FUNC_11 (struct ecore_hwfn*,struct ecore_ptt*,int *) ;
 int FUNC_12 (struct ecore_hwfn*,struct ecore_spq_entry**,int ,int ,struct ecore_sp_init_data*) ;
 int FUNC_13 (struct ecore_hwfn*) ;
 int FUNC_14 (struct ecore_hwfn*,struct ecore_spq_entry*,void*) ;
 int FUNC_15 (struct ecore_hwfn*,struct ecore_tunnel_info*,int *) ;

enum _ecore_status_t FUNC_16(struct ecore_hwfn *VAR_25,
           struct ecore_ptt *VAR_26,
           struct ecore_tunnel_info *VAR_27,
           bool VAR_28)
{
 struct pf_start_ramrod_data *VAR_29 = VAR_19;
 u16 VAR_30 = FUNC_10(VAR_25);
 u8 VAR_31 = VAR_25->p_eq->eq_sb_index;
 struct ecore_spq_entry *VAR_32 = VAR_19;
 struct ecore_sp_init_data VAR_33;
 enum _ecore_status_t VAR_34 = VAR_8;
 u8 VAR_35;
 u8 VAR_36;


 FUNC_9(VAR_25,
        FUNC_8(&VAR_25->p_eq->chain));


 FUNC_5(&VAR_33, 0, sizeof(VAR_33));
 VAR_33.cid = FUNC_13(VAR_25);
 VAR_33.opaque_fid = VAR_25->hw_info.opaque_fid;
 VAR_33.comp_mode = VAR_9;

 VAR_34 = FUNC_12(VAR_25, &VAR_32,
       VAR_0,
       VAR_24,
       &VAR_33);
 if (VAR_34 != VAR_10)
  return VAR_34;


 VAR_29 = &VAR_32->ramrod.pf_start;
 VAR_29->event_ring_sb_id = FUNC_4(VAR_30);
 VAR_29->event_ring_sb_index = VAR_31;
 VAR_29->path_id = FUNC_3(VAR_25);


 VAR_29->dont_log_ramrods = 0;
 VAR_29->log_type_mask = FUNC_4(0x8f);

 if (FUNC_6(VAR_5, &VAR_25->p_dev->mf_bits))
  VAR_29->mf_mode = VAR_18;
 else
  VAR_29->mf_mode = VAR_17;

 VAR_29->outer_tag_config.outer_tag.tci =
  FUNC_4(VAR_25->hw_info.ovlan);
 if (FUNC_6(VAR_3, &VAR_25->p_dev->mf_bits))
  VAR_29->outer_tag_config.outer_tag.tpid = VAR_15;
 else if (FUNC_6(VAR_2,
   &VAR_25->p_dev->mf_bits)) {
  VAR_29->outer_tag_config.outer_tag.tpid = VAR_14;
  VAR_29->outer_tag_config.enable_stag_pri_change = 1;
 }

 VAR_29->outer_tag_config.pri_map_valid = 1;
 for (VAR_36 = 0; VAR_36 < VAR_1; VAR_36++)
  VAR_29->outer_tag_config.inner_to_outer_pri_map[VAR_36] = VAR_36;




 if (FUNC_6(VAR_6, &VAR_25->p_dev->mf_bits)) {
  if ((VAR_25->ufp_info.pri_type == VAR_11) ||
      (VAR_25->p_dcbx_info->results.dcbx_enabled))
   VAR_29->outer_tag_config.enable_stag_pri_change = 1;
  else
   VAR_29->outer_tag_config.enable_stag_pri_change = 0;
 }


 FUNC_0(VAR_29->event_ring_pbl_addr,
         VAR_25->p_eq->chain.pbl_sp.p_phys_table);
 VAR_35 = (u8)FUNC_7(&VAR_25->p_eq->chain);
 VAR_29->event_ring_num_pages = VAR_35;
 FUNC_0(VAR_29->consolid_q_pbl_addr,
         VAR_25->p_consq->chain.pbl_sp.p_phys_table);

 FUNC_15(VAR_25, VAR_27,
           &VAR_29->tunnel_config);

 if (FUNC_6(VAR_4,
     &VAR_25->p_dev->mf_bits))
  VAR_29->allow_npar_tx_switching = VAR_28;

 switch (VAR_25->hw_info.personality) {
 case 133:
  VAR_29->personality = VAR_20;
  break;
 case 129:
  VAR_29->personality = VAR_21;
  break;
 case 128:
  VAR_29->personality = VAR_22;
  break;
 case 132:
 case 130:
 case 131:
  VAR_29->personality = VAR_23;
  break;
 default:
  FUNC_1(VAR_25, 1, "Unknown personality %d\n",
     VAR_25->hw_info.personality);
  VAR_29->personality = VAR_20;
 }

 if (VAR_25->p_dev->p_iov_info) {
  struct ecore_hw_sriov_info *VAR_37 = VAR_25->p_dev->p_iov_info;

  VAR_29->base_vf_id = (u8)VAR_37->first_vf_in_pf;
  VAR_29->num_vfs = (u8)VAR_37->total_vfs;
 }



 VAR_29->hsi_fp_ver.major_ver_arr[VAR_16] = VAR_12;
 VAR_29->hsi_fp_ver.minor_ver_arr[VAR_16] = VAR_13;

 FUNC_2(VAR_25, VAR_7,
     "Setting event_ring_sb [id %04x index %02x], outer_tag.tpid [%d], outer_tag.tci [%d]\n",
     VAR_30, VAR_31, VAR_29->outer_tag_config.outer_tag.tpid,
     VAR_29->outer_tag_config.outer_tag.tci);

 VAR_34 = FUNC_14(VAR_25, VAR_32, VAR_19);

 if (VAR_27)
  FUNC_11(VAR_25, VAR_26,
         &VAR_25->p_dev->tunnel);

 return VAR_34;
}
