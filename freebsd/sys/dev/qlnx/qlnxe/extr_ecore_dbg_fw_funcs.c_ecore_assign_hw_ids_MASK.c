
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
struct dbg_bus_data {size_t next_trigger_state; struct dbg_bus_block_data* blocks; TYPE_1__* trigger_states; scalar_t__ trigger_en; scalar_t__ unify_inputs; } ;
struct dbg_tools_data {struct dbg_bus_data bus; } ;
struct ecore_hwfn {struct dbg_tools_data dbg_info; } ;
struct dbg_bus_block_data {size_t hw_id; int data; } ;
struct TYPE_2__ {int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 size_t VAR_3 ;
 int FUNC_1 (size_t*,int ,size_t) ;
 size_t FUNC_2 (int,size_t,int) ;
 size_t VAR_4 ;

__attribute__((used)) static void FUNC_3(struct ecore_hwfn *VAR_5,
       u8 VAR_6[VAR_4])
{
 struct dbg_tools_data *VAR_7 = &VAR_5->dbg_info;
 struct dbg_bus_data *VAR_8 = &VAR_7->bus;
 bool VAR_9 = 1;
 u8 VAR_10, VAR_11;
 u32 VAR_12;

 FUNC_1(VAR_6, 0, VAR_4);

 if (VAR_8->unify_inputs)
  return;

 if (VAR_8->trigger_en) {
  for (VAR_11 = 0; VAR_11 < VAR_8->next_trigger_state && VAR_9; VAR_11++) {
   u8 VAR_13 = 0;

   for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++)
    if (FUNC_0(VAR_8->trigger_states[VAR_11].data, VAR_2) & (1 << VAR_10))
     VAR_13++;

   if (VAR_13 > 1)
    VAR_9 = 0;
  }
 }

 if (VAR_9) {


  for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++)
   VAR_6[VAR_10] = VAR_10;
 }
 else {
  u8 VAR_14, VAR_15 = 0;


  for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
   struct dbg_bus_block_data *VAR_16 = &VAR_8->blocks[VAR_12];

   if (!FUNC_0(VAR_16->data, VAR_0))
    continue;

   VAR_16->hw_id = VAR_15++;
   if (!VAR_16->hw_id)
    continue;

   VAR_14 =
    FUNC_2(FUNC_0(VAR_16->data, VAR_0),
     VAR_4,
     FUNC_0(VAR_16->data, VAR_1));

   for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++)
    if (VAR_14 & (1 << VAR_10))
     VAR_6[VAR_10] = VAR_16->hw_id;
  }
 }
}
