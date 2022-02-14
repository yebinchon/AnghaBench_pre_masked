
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct storm_defs {size_t block_id; } ;
struct dbg_bus_data {scalar_t__ state; int hw_dwords; int num_enabled_storms; struct dbg_bus_storm_data* storms; scalar_t__ unify_inputs; } ;
struct dbg_tools_data {scalar_t__* block_in_reset; struct dbg_bus_data bus; } ;
struct ecore_hwfn {struct dbg_tools_data dbg_info; } ;
struct dbg_bus_storm_data {int enabled; int hw_id; scalar_t__ mode; } ;
typedef enum dbg_storms { ____Placeholder_dbg_storms } dbg_storms ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;
typedef enum dbg_bus_storm_modes { ____Placeholder_dbg_bus_storm_modes } dbg_bus_storm_modes ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ecore_hwfn*,int ,char*,int,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct storm_defs* VAR_10 ;

enum dbg_status FUNC_1(struct ecore_hwfn *VAR_11,
             enum dbg_storms VAR_12,
             enum dbg_bus_storm_modes VAR_13)
{
 struct dbg_tools_data *VAR_14 = &VAR_11->dbg_info;
 struct dbg_bus_data *VAR_15 = &VAR_14->bus;
 struct dbg_bus_storm_data *VAR_16;
 struct storm_defs *VAR_17;

 FUNC_0(VAR_11, VAR_7, "dbg_bus_enable_storm: storm = %d, storm_mode = %d\n", VAR_12, VAR_13);

 if (VAR_15->state != VAR_0)
  return VAR_2;
 if (VAR_15->hw_dwords >= 4)
  return VAR_3;
 if (VAR_12 >= VAR_9)
  return VAR_4;
 if (VAR_13 >= VAR_8)
  return VAR_4;
 if (VAR_15->unify_inputs)
  return VAR_4;
 if (VAR_15->storms[VAR_12].enabled)
  return VAR_6;

 VAR_17 = &VAR_10[VAR_12];
 VAR_16 = &VAR_15->storms[VAR_12];

 if (VAR_14->block_in_reset[VAR_17->block_id])
  return VAR_1;

 VAR_16->enabled = 1;
 VAR_16->mode = (u8)VAR_13;
 VAR_16->hw_id = VAR_15->num_enabled_storms;

 VAR_15->num_enabled_storms++;

 return VAR_5;
}
