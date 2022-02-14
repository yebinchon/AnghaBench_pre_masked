
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct core_rx_stop_ramrod_data {int complete_event_flg; int queue_id; } ;
struct TYPE_4__ {struct core_rx_stop_ramrod_data core_rx_queue_stop; } ;
struct ecore_spq_entry {TYPE_2__ ramrod; } ;
struct ecore_sp_init_data {int comp_mode; int opaque_fid; int cid; } ;
struct ecore_ll2_info {int queue_id; int cid; } ;
struct TYPE_3__ {int opaque_fid; } ;
struct ecore_hwfn {TYPE_1__ hw_info; } ;
typedef int init_data ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ecore_sp_init_data*,int ,int) ;
 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_spq_entry**,int ,int ,struct ecore_sp_init_data*) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_spq_entry*,void*) ;

__attribute__((used)) static enum _ecore_status_t FUNC_3(struct ecore_hwfn *VAR_6,
             struct ecore_ll2_info *VAR_7)
{
 struct core_rx_stop_ramrod_data *VAR_8 = VAR_4;
 struct ecore_spq_entry *VAR_9 = VAR_4;
 struct ecore_sp_init_data VAR_10;
 enum _ecore_status_t VAR_11 = VAR_1;


 FUNC_0(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.cid = VAR_7->cid;
 VAR_10.opaque_fid = VAR_6->hw_info.opaque_fid;
 VAR_10.comp_mode = VAR_2;

 VAR_11 = FUNC_1(VAR_6, &VAR_9,
       VAR_0,
       VAR_5, &VAR_10);
 if (VAR_11 != VAR_3)
  return VAR_11;

 VAR_8 = &VAR_9->ramrod.core_rx_queue_stop;

 VAR_8->complete_event_flg = 1;
 VAR_8->queue_id = VAR_7->queue_id;

 return FUNC_2(VAR_6, VAR_9, VAR_4);
}
