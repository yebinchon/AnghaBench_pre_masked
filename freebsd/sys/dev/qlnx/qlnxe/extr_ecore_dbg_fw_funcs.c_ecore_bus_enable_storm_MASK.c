
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int val; int mask; } ;
struct TYPE_5__ {int min; int max; } ;
union dbg_bus_storm_eid_params {TYPE_3__ mask; TYPE_2__ range; } ;
typedef int u32 ;
struct storm_mode_defs {int id_in_hw; scalar_t__ is_fast_dbg; } ;
struct storm_defs {int sem_fast_mem_addr; int sem_frame_mode_addr; int sem_slow_enable_addr; int sem_slow_mode_addr; int sem_slow_mode1_conf_addr; } ;
struct ecore_ptt {int dummy; } ;
struct TYPE_4__ {struct dbg_bus_storm_data* storms; } ;
struct dbg_tools_data {TYPE_1__ bus; } ;
struct ecore_hwfn {struct dbg_tools_data dbg_info; } ;
struct dbg_bus_storm_data {size_t mode; int cid; scalar_t__ eid_range_not_mask; union dbg_bus_storm_eid_params eid_filter_params; scalar_t__ eid_filter_en; scalar_t__ cid_filter_en; } ;
typedef enum dbg_storms { ____Placeholder_dbg_storms } dbg_storms ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct ecore_hwfn*,struct ecore_ptt*,int,int) ;
 struct storm_defs* VAR_20 ;
 struct storm_mode_defs* VAR_21 ;

__attribute__((used)) static void FUNC_1(struct ecore_hwfn *VAR_22,
           struct ecore_ptt *VAR_23,
           enum dbg_storms VAR_24)
{
 struct dbg_tools_data *VAR_25 = &VAR_22->dbg_info;
 u32 VAR_26, VAR_27 = 0;
 struct dbg_bus_storm_data *VAR_28;
 struct storm_mode_defs *VAR_29;
 struct storm_defs *VAR_30;

 VAR_30 = &VAR_20[VAR_24];
 VAR_28 = &VAR_25->bus.storms[VAR_24];
 VAR_29 = &VAR_21[VAR_28->mode];
 VAR_26 = VAR_30->sem_fast_mem_addr;


 if (VAR_29->is_fast_dbg) {


  FUNC_0(VAR_22, VAR_23, VAR_30->sem_frame_mode_addr, VAR_0);
  FUNC_0(VAR_22, VAR_23, VAR_26 + VAR_9, VAR_29->id_in_hw);
  FUNC_0(VAR_22, VAR_23, VAR_26 + VAR_8, 1);





  FUNC_0(VAR_22, VAR_23, VAR_26 + VAR_5, VAR_2);
  FUNC_0(VAR_22, VAR_23, VAR_26 + VAR_6, VAR_3);
  FUNC_0(VAR_22, VAR_23, VAR_26 + VAR_7, VAR_4);
 }
 else {


  FUNC_0(VAR_22, VAR_23, VAR_30->sem_frame_mode_addr, VAR_1);
  FUNC_0(VAR_22, VAR_23, VAR_30->sem_slow_enable_addr, 1);
  FUNC_0(VAR_22, VAR_23, VAR_30->sem_slow_mode_addr, VAR_29->id_in_hw);
  FUNC_0(VAR_22, VAR_23, VAR_30->sem_slow_mode1_conf_addr, VAR_19);
 }


 if (VAR_28->cid_filter_en) {
  FUNC_0(VAR_22, VAR_23, VAR_26 + VAR_13, VAR_28->cid);
  VAR_27 |= VAR_16;
 }


 if (VAR_28->eid_filter_en) {
  const union dbg_bus_storm_eid_params *VAR_31 = &VAR_28->eid_filter_params;

  if (VAR_28->eid_range_not_mask) {
   FUNC_0(VAR_22, VAR_23, VAR_26 + VAR_12, VAR_31->range.min);
   FUNC_0(VAR_22, VAR_23, VAR_26 + VAR_11, VAR_31->range.max);
   VAR_27 |= VAR_18;
  }
  else {
   FUNC_0(VAR_22, VAR_23, VAR_26 + VAR_14, VAR_31->mask.val);
   FUNC_0(VAR_22, VAR_23, VAR_26 + VAR_10, ~VAR_31->mask.mask);
   VAR_27 |= VAR_17;
  }
 }


 if (VAR_27)
  FUNC_0(VAR_22, VAR_23, VAR_26 + VAR_15, VAR_27);
}
