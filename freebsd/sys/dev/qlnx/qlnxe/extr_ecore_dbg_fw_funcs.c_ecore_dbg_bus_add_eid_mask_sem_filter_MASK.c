
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u8 ;
struct TYPE_6__ {struct dbg_bus_storm_data* storms; } ;
struct dbg_tools_data {TYPE_3__ bus; } ;
struct ecore_hwfn {struct dbg_tools_data dbg_info; } ;
struct TYPE_4__ {void* mask; void* val; } ;
struct TYPE_5__ {TYPE_1__ mask; } ;
struct dbg_bus_storm_data {int eid_filter_en; TYPE_2__ eid_filter_params; scalar_t__ eid_range_not_mask; int enabled; } ;
typedef enum dbg_storms { ____Placeholder_dbg_storms } dbg_storms ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ecore_hwfn*,int ,char*,int,void*,void*) ;
 int VAR_3 ;
 int VAR_4 ;

enum dbg_status FUNC_1(struct ecore_hwfn *VAR_5,
               enum dbg_storms VAR_6,
               u8 VAR_7,
               u8 VAR_8)
{
 struct dbg_tools_data *VAR_9 = &VAR_5->dbg_info;
 struct dbg_bus_storm_data *VAR_10;

 VAR_10 = &VAR_9->bus.storms[VAR_6];

 FUNC_0(VAR_5, VAR_3, "dbg_bus_add_eid_mask_sem_filter: storm = %d, eid_val = 0x%x, eid_mask = 0x%x\n", VAR_6, VAR_7, VAR_8);

 if (VAR_6 >= VAR_4)
  return VAR_0;
 if (!VAR_10->enabled)
  return VAR_2;

 VAR_10->eid_filter_en = 1;
 VAR_10->eid_range_not_mask = 0;
 VAR_10->eid_filter_params.mask.val = VAR_7;
 VAR_10->eid_filter_params.mask.mask = VAR_8;

 return VAR_1;
}
