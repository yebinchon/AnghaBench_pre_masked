
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
struct ecore_ptt {int dummy; } ;
struct dbg_bus_data {scalar_t__ state; TYPE_2__* storms; scalar_t__ num_enabled_storms; TYPE_1__* blocks; scalar_t__ num_enabled_blocks; scalar_t__ filter_post_trigger; scalar_t__ filter_pre_trigger; scalar_t__ trigger_en; scalar_t__ filter_en; int rcv_from_other_engine; } ;
struct dbg_tools_data {struct dbg_bus_data bus; } ;
struct ecore_hwfn {struct dbg_tools_data dbg_info; } ;
typedef enum dbg_storms { ____Placeholder_dbg_storms } dbg_storms ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;
typedef enum dbg_bus_filter_types { ____Placeholder_dbg_bus_filter_types } dbg_bus_filter_types ;
typedef enum block_id { ____Placeholder_block_id } block_id ;
struct TYPE_4__ {scalar_t__ enabled; } ;
struct TYPE_3__ {int data; int line_num; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct ecore_hwfn*,int ,char*) ;
 int VAR_17 ;
 int FUNC_1 (int ,int ) ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,int) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,int) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_6 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_7 (struct ecore_hwfn*,struct ecore_ptt*,int,int ,int ,int ,int ,int ) ;
 int FUNC_8 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_9 (struct ecore_hwfn*,struct ecore_ptt*,int ,int) ;

enum dbg_status FUNC_10(struct ecore_hwfn *VAR_20,
         struct ecore_ptt *VAR_21)
{
 struct dbg_tools_data *VAR_22 = &VAR_20->dbg_info;
 struct dbg_bus_data *VAR_23 = &VAR_22->bus;
 enum dbg_bus_filter_types VAR_24;
 enum dbg_status VAR_25;
 u32 VAR_26;
 u8 VAR_27;

 FUNC_0(VAR_20, VAR_17, "dbg_bus_start\n");

 if (VAR_23->state != VAR_9)
  return VAR_13;


 if (!VAR_23->num_enabled_storms &&
  !VAR_23->num_enabled_blocks &&
  !VAR_23->rcv_from_other_engine)
  return VAR_14;


 if (VAR_23->num_enabled_storms && VAR_23->num_enabled_blocks)
  return VAR_16;


 if ((VAR_25 = FUNC_6(VAR_20, VAR_21)) != VAR_15)
  return VAR_25;


 if (VAR_23->num_enabled_storms)
  if ((VAR_25 = FUNC_8(VAR_20, VAR_21)) != VAR_15)
   return VAR_25;


 if (VAR_23->num_enabled_blocks)
  FUNC_4(VAR_20, VAR_21);


 if (VAR_23->filter_en) {
  if (VAR_23->trigger_en) {
   if (VAR_23->filter_pre_trigger)
    VAR_24 = VAR_23->filter_post_trigger ? VAR_6 : VAR_8;
   else
    VAR_24 = VAR_23->filter_post_trigger ? VAR_7 : VAR_5;
  }
  else {
   VAR_24 = VAR_6;
  }
 }
 else {
  VAR_24 = VAR_5;
 }
 FUNC_9(VAR_20, VAR_21, VAR_11, VAR_24);


 FUNC_9(VAR_20, VAR_21, VAR_12, 0);


 FUNC_2(VAR_20, VAR_21, 1);




 if (VAR_22->bus.num_enabled_blocks) {
  for (VAR_26 = 0; VAR_26 < VAR_18; VAR_26++) {
   if (!FUNC_1(VAR_22->bus.blocks[VAR_26].data, VAR_1) || VAR_26 == VAR_0)
    continue;

   FUNC_7(VAR_20, VAR_21, (enum block_id)VAR_26,
    VAR_22->bus.blocks[VAR_26].line_num,
    FUNC_1(VAR_22->bus.blocks[VAR_26].data, VAR_1),
    FUNC_1(VAR_22->bus.blocks[VAR_26].data, VAR_4),
    FUNC_1(VAR_22->bus.blocks[VAR_26].data, VAR_3),
    FUNC_1(VAR_22->bus.blocks[VAR_26].data, VAR_2));
  }
 }


 FUNC_5(VAR_20, VAR_21);




 if (VAR_22->bus.num_enabled_storms)
  for (VAR_27 = 0; VAR_27 < VAR_19; VAR_27++)
   if (VAR_22->bus.storms[VAR_27].enabled)
    FUNC_3(VAR_20, VAR_21, (enum dbg_storms)VAR_27);

 VAR_22->bus.state = VAR_10;

 return VAR_15;
}
