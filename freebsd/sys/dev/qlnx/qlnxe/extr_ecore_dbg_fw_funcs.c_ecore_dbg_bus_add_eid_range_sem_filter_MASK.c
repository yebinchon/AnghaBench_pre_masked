
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_4__ {struct dbg_bus_storm_data* storms; } ;
struct dbg_tools_data {TYPE_1__ bus; } ;
struct ecore_hwfn {struct dbg_tools_data dbg_info; } ;
struct TYPE_5__ {scalar_t__ max; scalar_t__ min; } ;
struct TYPE_6__ {TYPE_2__ range; } ;
struct dbg_bus_storm_data {int eid_filter_en; int eid_range_not_mask; TYPE_3__ eid_filter_params; int enabled; } ;
typedef enum dbg_storms { ____Placeholder_dbg_storms } dbg_storms ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ecore_hwfn*,int ,char*,int,scalar_t__,scalar_t__) ;
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

 FUNC_0(VAR_5, VAR_3, "dbg_bus_add_eid_range_sem_filter: storm = %d, min_eid = 0x%x, max_eid = 0x%x\n", VAR_6, VAR_7, VAR_8);

 if (VAR_6 >= VAR_4)
  return VAR_0;
 if (VAR_7 > VAR_8)
  return VAR_0;
 if (!VAR_10->enabled)
  return VAR_2;

 VAR_10->eid_filter_en = 1;
 VAR_10->eid_range_not_mask = 1;
 VAR_10->eid_filter_params.range.min = VAR_7;
 VAR_10->eid_filter_params.range.max = VAR_8;

 return VAR_1;
}
