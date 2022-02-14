
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct ecore_ptt {int dummy; } ;
struct dbg_bus_data {int hw_dwords; scalar_t__ filter_en; scalar_t__ trigger_en; struct dbg_bus_block_data* blocks; scalar_t__ num_enabled_blocks; } ;
struct dbg_tools_data {struct dbg_bus_data bus; } ;
struct ecore_hwfn {struct dbg_tools_data dbg_info; } ;
struct dbg_bus_line {int data; } ;
struct dbg_bus_block_data {int data; } ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;
typedef enum dbg_bus_frame_modes { ____Placeholder_dbg_bus_frame_modes } dbg_bus_frame_modes ;
typedef enum block_id { ____Placeholder_block_id } block_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 size_t VAR_8 ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,int) ;
 struct dbg_bus_line* FUNC_2 (struct ecore_hwfn*,int) ;

__attribute__((used)) static enum dbg_status FUNC_3(struct ecore_hwfn *VAR_9,
             struct ecore_ptt *VAR_10)
{
 struct dbg_tools_data *VAR_11 = &VAR_9->dbg_info;
 struct dbg_bus_data *VAR_12 = &VAR_11->bus;
 enum dbg_bus_frame_modes VAR_13;
 u32 VAR_14;

 if (!VAR_12->hw_dwords && VAR_12->num_enabled_blocks) {
  struct dbg_bus_line *VAR_15;
  u8 VAR_16;




  for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++) {
   struct dbg_bus_block_data *VAR_17 = &VAR_12->blocks[VAR_14];

   if (!FUNC_0(VAR_17->data, VAR_0))
    continue;

   VAR_15 = FUNC_2(VAR_9, (enum block_id)VAR_14);
   VAR_16 = VAR_15 && FUNC_0(VAR_15->data, VAR_4) ? 8 : 4;

   if (VAR_12->hw_dwords > 0 && VAR_12->hw_dwords != VAR_16)
    return VAR_5;




   if (VAR_16 == 8 && (VAR_12->trigger_en || VAR_12->filter_en))
    return VAR_6;

   VAR_12->hw_dwords = VAR_16;
  }
 }

 switch (VAR_12->hw_dwords) {
 case 0: VAR_13 = VAR_1; break;
 case 4: VAR_13 = VAR_2; break;
 case 8: VAR_13 = VAR_3; break;
 default: VAR_13 = VAR_1; break;
 }
 FUNC_1(VAR_9, VAR_10, VAR_13);

 return VAR_7;
}
