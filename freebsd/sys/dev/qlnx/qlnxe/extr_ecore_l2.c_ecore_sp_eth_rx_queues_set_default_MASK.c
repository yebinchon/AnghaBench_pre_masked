
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rx_queue_update_ramrod_data {int complete_event_flg; int set_default_rss_queue; scalar_t__ complete_cqe_flg; int rx_queue_id; int vport_id; } ;
struct TYPE_3__ {struct rx_queue_update_ramrod_data rx_queue_update; } ;
struct ecore_spq_entry {TYPE_1__ ramrod; } ;
struct ecore_spq_comp_cb {int dummy; } ;
struct ecore_sp_init_data {int comp_mode; int opaque_fid; int cid; struct ecore_spq_comp_cb* p_comp_data; } ;
struct TYPE_4__ {int queue_id; int vport_id; } ;
struct ecore_queue_cid {TYPE_2__ abs; int opaque_fid; int cid; } ;
struct ecore_hwfn {int p_dev; } ;
typedef int init_data ;
typedef enum spq_mode { ____Placeholder_spq_mode } spq_mode ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ecore_sp_init_data*,int ,int) ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_spq_entry**,int ,int ,struct ecore_sp_init_data*) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_spq_entry*,void*) ;

enum _ecore_status_t
FUNC_5(struct ecore_hwfn *VAR_5,
       void *VAR_6,
       enum spq_mode VAR_7,
       struct ecore_spq_comp_cb *VAR_8)
{
 struct rx_queue_update_ramrod_data *VAR_9 = VAR_3;
 struct ecore_spq_entry *VAR_10 = VAR_3;
 struct ecore_sp_init_data VAR_11;
 struct ecore_queue_cid *VAR_12;
 enum _ecore_status_t VAR_13 = VAR_1;

 if (FUNC_0(VAR_5->p_dev))
  return VAR_0;

 FUNC_2(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.comp_mode = VAR_7;
 VAR_11.p_comp_data = VAR_8;

 VAR_12 = (struct ecore_queue_cid *)VAR_6;


 VAR_11.cid = VAR_12->cid;
 VAR_11.opaque_fid = VAR_12->opaque_fid;

 VAR_13 = FUNC_3(VAR_5, &VAR_10,
       VAR_2,
       VAR_4, &VAR_11);
 if (VAR_13 != VAR_1)
  return VAR_13;

 VAR_9 = &VAR_10->ramrod.rx_queue_update;
 VAR_9->vport_id = VAR_12->abs.vport_id;

 VAR_9->rx_queue_id = FUNC_1(VAR_12->abs.queue_id);
 VAR_9->complete_cqe_flg = 0;
 VAR_9->complete_event_flg = 1;
 VAR_9->set_default_rss_queue = 1;

 VAR_13 = FUNC_4(VAR_5, VAR_10, VAR_3);

 return VAR_13;
}
