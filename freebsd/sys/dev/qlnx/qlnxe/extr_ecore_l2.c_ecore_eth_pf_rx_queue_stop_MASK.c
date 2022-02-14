
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rx_queue_stop_ramrod_data {int complete_cqe_flg; int complete_event_flg; int rx_queue_id; int vport_id; } ;
struct TYPE_3__ {struct rx_queue_stop_ramrod_data rx_queue_stop; } ;
struct ecore_spq_entry {TYPE_1__ ramrod; } ;
struct ecore_sp_init_data {int comp_mode; int opaque_fid; int cid; } ;
struct TYPE_4__ {int queue_id; int vport_id; } ;
struct ecore_queue_cid {scalar_t__ vfid; TYPE_2__ abs; int opaque_fid; int cid; } ;
struct ecore_hwfn {int dummy; } ;
typedef int init_data ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ecore_sp_init_data*,int ,int) ;
 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_spq_entry**,int ,int ,struct ecore_sp_init_data*) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_spq_entry*,void*) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_4(struct ecore_hwfn *VAR_6,
      struct ecore_queue_cid *VAR_7,
      bool VAR_8,
      bool VAR_9)
{
 struct rx_queue_stop_ramrod_data *VAR_10 = VAR_4;
 struct ecore_spq_entry *VAR_11 = VAR_4;
 struct ecore_sp_init_data VAR_12;
 enum _ecore_status_t VAR_13;

 FUNC_1(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.cid = VAR_7->cid;
 VAR_12.opaque_fid = VAR_7->opaque_fid;
 VAR_12.comp_mode = VAR_1;

 VAR_13 = FUNC_2(VAR_6, &VAR_11,
       VAR_3,
       VAR_5, &VAR_12);
 if (VAR_13 != VAR_2)
  return VAR_13;

 VAR_10 = &VAR_11->ramrod.rx_queue_stop;
 VAR_10->vport_id = VAR_7->abs.vport_id;
 VAR_10->rx_queue_id = FUNC_0(VAR_7->abs.queue_id);




 VAR_10->complete_cqe_flg = ((VAR_7->vfid == VAR_0) &&
          !VAR_8) ||
         VAR_9;
 VAR_10->complete_event_flg = (VAR_7->vfid != VAR_0) ||
           VAR_8;

 return FUNC_3(VAR_6, VAR_11, VAR_4);
}
