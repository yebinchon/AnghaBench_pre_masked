
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct ecore_ptt {int dummy; } ;
struct dbg_bus_data {int next_trigger_state; int adding_filter; TYPE_1__* trigger_states; scalar_t__ next_constraint_id; int trigger_en; struct dbg_bus_block_data* blocks; } ;
struct dbg_tools_data {struct dbg_bus_data bus; } ;
struct ecore_hwfn {struct dbg_tools_data dbg_info; } ;
struct dbg_bus_block_data {int data; } ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;
typedef enum block_id { ____Placeholder_block_id } block_id ;
struct TYPE_2__ {int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct ecore_hwfn*,int ,char*,int,int,int) ;
 int VAR_13 ;
 int FUNC_1 (int ,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__,int) ;

enum dbg_status FUNC_5(struct ecore_hwfn *VAR_18,
            struct ecore_ptt *VAR_19,
            enum block_id VAR_20,
            u8 VAR_21,
            u16 VAR_22)
{
 struct dbg_tools_data *VAR_23 = &VAR_18->dbg_info;
 struct dbg_bus_data *VAR_24 = &VAR_23->bus;
 struct dbg_bus_block_data *VAR_25;
 u8 VAR_26;

 FUNC_0(VAR_18, VAR_13, "dbg_bus_add_trigger_state: block = %d, const_msg_len = %d, count_to_next = %d\n", VAR_20, VAR_21, VAR_22);

 VAR_25 = &VAR_24->blocks[VAR_20];

 if (!VAR_24->trigger_en)
  return VAR_12;
 if (VAR_24->next_trigger_state == VAR_15)
  return VAR_11;
 if (VAR_20 >= VAR_14)
  return VAR_9;
 if (!FUNC_1(VAR_25->data, VAR_1))
  return VAR_8;
 if (!VAR_22)
  return VAR_9;

 VAR_24->next_constraint_id = 0;
 VAR_24->adding_filter = 0;


 FUNC_2(VAR_24->trigger_states[VAR_23->bus.next_trigger_state].data, VAR_3, FUNC_3(FUNC_1(VAR_25->data, VAR_1),
        VAR_17,
        FUNC_1(VAR_25->data, VAR_2)));


 VAR_26 = VAR_24->next_trigger_state * VAR_0;
 FUNC_4(VAR_18, VAR_19, VAR_5 + VAR_26, VAR_21 > 0 ? 1 : 0);
 if (VAR_21 > 0)
  FUNC_4(VAR_18, VAR_19, VAR_4 + VAR_26, VAR_21 - 1);


 VAR_26 = VAR_24->next_trigger_state * VAR_16 * VAR_0;
 FUNC_4(VAR_18, VAR_19, VAR_6 + VAR_26, VAR_22);




 FUNC_4(VAR_18, VAR_19, VAR_7 + VAR_26, VAR_15);
 if (VAR_24->next_trigger_state > 0) {
  VAR_26 = (VAR_24->next_trigger_state - 1) * VAR_16 * VAR_0;
  FUNC_4(VAR_18, VAR_19, VAR_7 + VAR_26, VAR_24->next_trigger_state);
 }

 VAR_24->next_trigger_state++;

 return VAR_10;
}
