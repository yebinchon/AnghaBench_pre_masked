
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ecore_ptt {int dummy; } ;
struct dbg_bus_data {int next_trigger_state; int next_constraint_id; scalar_t__ adding_filter; struct dbg_bus_trigger_state_data* trigger_states; scalar_t__ trigger_en; int filter_en; } ;
struct dbg_tools_data {struct dbg_bus_data bus; } ;
struct ecore_hwfn {struct dbg_tools_data dbg_info; } ;
struct dbg_bus_trigger_state_data {int data; } ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;
typedef enum dbg_bus_constraint_ops { ____Placeholder_dbg_bus_constraint_ops } dbg_bus_constraint_ops ;
struct TYPE_2__ {int hw_op_val; scalar_t__ is_cyclic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ecore_hwfn*,int ,char*,int,int,int,int,int,int,int,int) ;
 int VAR_9 ;
 int FUNC_1 (int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_12 ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,int,int,int,int,int,int,int,int,int,int,int) ;
 TYPE_1__* VAR_13 ;

enum dbg_status FUNC_4(struct ecore_hwfn *VAR_14,
            struct ecore_ptt *VAR_15,
            enum dbg_bus_constraint_ops VAR_16,
            u32 VAR_17,
            u32 VAR_18,
            bool VAR_19,
            u8 VAR_20,
            u8 VAR_21,
            u8 VAR_22,
            bool VAR_23)
{
 struct dbg_tools_data *VAR_24 = &VAR_14->dbg_info;
 struct dbg_bus_data *VAR_25 = &VAR_24->bus;
 u16 VAR_26, VAR_27 = 0;

 FUNC_0(VAR_14, VAR_9, "dbg_bus_add_constraint: op = %d, data_val = 0x%x, data_mask = 0x%x, compare_frame = %d, frame_bit = %d, cycle_offset = %d, dword_offset_in_cycle = %d, is_mandatory = %d\n", VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23);

 if (!VAR_25->filter_en && !VAR_24->bus.trigger_en)
  return VAR_4;
 if (VAR_25->trigger_en && !VAR_25->adding_filter && !VAR_25->next_trigger_state)
  return VAR_4;
 if (VAR_25->next_constraint_id >= VAR_10)
  return VAR_8;
 if (VAR_16 >= VAR_11 || VAR_20 > 1 || VAR_22 > 3 || (VAR_25->adding_filter && VAR_21 > 3))
  return VAR_5;
 if (VAR_19 &&
  VAR_16 != VAR_0 &&
  VAR_16 != VAR_1)
  return VAR_5;

 VAR_26 = VAR_21 * VAR_12 + VAR_22;

 if (!VAR_25->adding_filter) {
  u8 VAR_28 = VAR_25->next_trigger_state - 1;
  struct dbg_bus_trigger_state_data *VAR_29;

  VAR_29 = &VAR_25->trigger_states[VAR_28];


  if (!(FUNC_1(VAR_29->data, VAR_2) & (u8)(1 << VAR_22)))
   return VAR_6;


  FUNC_2(VAR_29->data, VAR_3, FUNC_1(VAR_29->data, VAR_3) | (u8)(1 << VAR_22));
 }


 if (VAR_16 == VAR_0 ||
  VAR_16 == VAR_1) {
  VAR_18 = ~VAR_18;
 }
 else {
  u8 VAR_30, VAR_31;


  if (!VAR_18)
   return VAR_5;

  for (VAR_30 = 0; VAR_30 < 32 && !(VAR_18 & 1); VAR_30++, VAR_18 >>= 1);
  for (VAR_31 = 0; VAR_31 < 32 - VAR_30 && (VAR_18 & 1); VAR_31++, VAR_18 >>= 1);
  if (VAR_18)
   return VAR_5;
  VAR_27 = (VAR_30 << 5) | (VAR_31 - 1);
 }


 FUNC_3(VAR_14, VAR_15, VAR_24->bus.adding_filter ? 1 : 0,
  VAR_24->bus.next_constraint_id,
  VAR_13[VAR_16].hw_op_val,
  VAR_17, VAR_18, VAR_20,
  VAR_19 ? 0 : 1, VAR_26, VAR_27,
  VAR_13[VAR_16].is_cyclic ? 1 : 0,
  VAR_23 ? 1 : 0);




 if (!VAR_24->bus.next_constraint_id) {
  u8 VAR_32;

  for (VAR_32 = 1; VAR_32 < VAR_10; VAR_32++)
   FUNC_3(VAR_14, VAR_15, VAR_25->adding_filter ? 1 : 0,
    VAR_32, VAR_0, 0, 0xffffffff,
    0, 1, VAR_26, 0, 0, 1);
 }

 VAR_25->next_constraint_id++;

 return VAR_7;
}
