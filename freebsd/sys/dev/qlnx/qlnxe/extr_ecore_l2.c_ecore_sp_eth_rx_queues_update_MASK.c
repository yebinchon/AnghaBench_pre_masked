
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct rx_queue_update_ramrod_data {size_t complete_cqe_flg; size_t complete_event_flg; int rx_queue_id; int vport_id; } ;
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
 int FUNC_5 (struct ecore_hwfn*,struct ecore_queue_cid**,size_t,size_t,size_t) ;

enum _ecore_status_t FUNC_6(struct ecore_hwfn *VAR_5,
         void **VAR_6,
         u8 VAR_7,
         u8 VAR_8,
         u8 VAR_9,
         enum spq_mode VAR_10,
         struct ecore_spq_comp_cb *VAR_11)
{
 struct rx_queue_update_ramrod_data *VAR_12 = VAR_3;
 struct ecore_spq_entry *VAR_13 = VAR_3;
 struct ecore_sp_init_data VAR_14;
 struct ecore_queue_cid *VAR_15;
 enum _ecore_status_t VAR_16 = VAR_0;
 u8 VAR_17;


 if (FUNC_0(VAR_5->p_dev))
  return FUNC_5(VAR_5,
            (struct ecore_queue_cid **)
            VAR_6,
            VAR_7,
            VAR_8,
            VAR_9);


 FUNC_2(&VAR_14, 0, sizeof(VAR_14));
 VAR_14.comp_mode = VAR_10;
 VAR_14.p_comp_data = VAR_11;

 for (VAR_17 = 0; VAR_17 < VAR_7; VAR_17++) {
  VAR_15 = ((struct ecore_queue_cid **)VAR_6)[VAR_17];


  VAR_14.cid = VAR_15->cid;
  VAR_14.opaque_fid = VAR_15->opaque_fid;

  VAR_16 = FUNC_3(VAR_5, &VAR_13,
        VAR_2,
        VAR_4, &VAR_14);
  if (VAR_16 != VAR_1)
   return VAR_16;

  VAR_12 = &VAR_13->ramrod.rx_queue_update;
  VAR_12->vport_id = VAR_15->abs.vport_id;

  VAR_12->rx_queue_id = FUNC_1(VAR_15->abs.queue_id);
  VAR_12->complete_cqe_flg = VAR_8;
  VAR_12->complete_event_flg = VAR_9;

  VAR_16 = FUNC_4(VAR_5, VAR_13, VAR_3);
  if (VAR_16 != VAR_1)
   return VAR_16;
 }

 return VAR_16;
}
