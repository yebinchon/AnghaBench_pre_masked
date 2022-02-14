
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ecore_ptt {int dummy; } ;
struct dbg_bus_data {int next_trigger_state; int hw_id_mask; TYPE_2__* blocks; TYPE_1__* trigger_states; scalar_t__ trigger_en; } ;
struct dbg_tools_data {scalar_t__ chip_id; struct dbg_bus_data bus; } ;
struct ecore_hwfn {struct dbg_tools_data dbg_info; } ;
struct TYPE_4__ {int data; } ;
struct TYPE_3__ {int data; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int,int ) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct ecore_hwfn*,int*) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_3(struct ecore_hwfn *VAR_12,
          struct ecore_ptt *VAR_13)
{
 struct dbg_tools_data *VAR_14 = &VAR_12->dbg_info;
 struct dbg_bus_data *VAR_15 = &VAR_14->bus;
 u8 VAR_16[VAR_11];
 u8 VAR_17, VAR_18;

 FUNC_1(VAR_12, VAR_16);


 if (VAR_14->bus.trigger_en) {
  for (VAR_18 = 0; VAR_18 < VAR_15->next_trigger_state; VAR_18++) {
   for (VAR_17 = 0; VAR_17 < VAR_11; VAR_17++) {
    u8 VAR_19 = VAR_15->trigger_states[VAR_18].data;

    if (FUNC_0(VAR_19, VAR_5) & (1 << VAR_17)) {
     FUNC_2(VAR_12, VAR_13, VAR_7 + VAR_18 * VAR_2, VAR_16[VAR_17]);
     break;
    }
   }
  }
 }


 VAR_14->bus.hw_id_mask = 0;
 for (VAR_17 = 0; VAR_17 < VAR_11; VAR_17++)
  VAR_15->hw_id_mask |= (VAR_16[VAR_17] << (VAR_17 * VAR_8));
 FUNC_2(VAR_12, VAR_13, VAR_6, VAR_15->hw_id_mask);


 if (VAR_14->chip_id == VAR_3 &&
  (FUNC_0(VAR_15->blocks[VAR_0].data, VAR_4) ||
   FUNC_0(VAR_15->blocks[VAR_1].data, VAR_4))) {
  FUNC_2(VAR_12, VAR_13, VAR_10, 1);
  FUNC_2(VAR_12, VAR_13, VAR_9, 1);
 }
}
