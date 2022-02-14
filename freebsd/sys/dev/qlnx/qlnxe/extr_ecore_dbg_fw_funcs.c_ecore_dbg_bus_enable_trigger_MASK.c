
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct dbg_bus_data {scalar_t__ state; int trigger_en; int filter_pre_trigger; int filter_post_trigger; } ;
struct dbg_tools_data {struct dbg_bus_data bus; } ;
struct ecore_hwfn {struct dbg_tools_data dbg_info; } ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;
typedef enum dbg_bus_pre_trigger_types { ____Placeholder_dbg_bus_pre_trigger_types } dbg_bus_pre_trigger_types ;
typedef enum dbg_bus_post_trigger_types { ____Placeholder_dbg_bus_post_trigger_types } dbg_bus_post_trigger_types ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct ecore_hwfn*,int ,char*,int,scalar_t__,int,int,int,int) ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,int ,int) ;

enum dbg_status FUNC_2(struct ecore_hwfn *VAR_17,
            struct ecore_ptt *VAR_18,
            bool VAR_19,
            u8 VAR_20,
            bool VAR_21,
            u32 VAR_22,
            bool VAR_23,
            bool VAR_24)
{
 struct dbg_tools_data *VAR_25 = &VAR_17->dbg_info;
 enum dbg_bus_post_trigger_types VAR_26;
 enum dbg_bus_pre_trigger_types VAR_27;
 struct dbg_bus_data *VAR_28 = &VAR_25->bus;

 FUNC_0(VAR_17, VAR_15, "dbg_bus_enable_trigger: rec_pre_trigger = %d, pre_chunks = %d, rec_post_trigger = %d, post_cycles = %d, filter_pre_trigger = %d, filter_post_trigger = %d\n", VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24);

 if (VAR_28->state != VAR_5)
  return VAR_11;
 if (VAR_28->trigger_en)
  return VAR_14;
 if (VAR_19 && VAR_20 >= VAR_16)
  return VAR_12;

 VAR_28->trigger_en = 1;
 VAR_28->filter_pre_trigger = VAR_23;
 VAR_28->filter_post_trigger = VAR_24;

 if (VAR_19) {
  VAR_27 = VAR_20 ? VAR_3 : VAR_4;
  FUNC_1(VAR_17, VAR_18, VAR_8, VAR_20);
 }
 else {
  VAR_27 = VAR_2;
 }

 if (VAR_21) {
  VAR_26 = VAR_1;
  FUNC_1(VAR_17, VAR_18, VAR_6, VAR_22 ? VAR_22 : 0xffffffff);
 }
 else {
  VAR_26 = VAR_0;
 }

 FUNC_1(VAR_17, VAR_18, VAR_9, VAR_27);
 FUNC_1(VAR_17, VAR_18, VAR_7, VAR_26);
 FUNC_1(VAR_17, VAR_18, VAR_10, 1);

 return VAR_13;
}
