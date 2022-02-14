
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct storm_defs {int* dbg_client_id; } ;
struct ecore_ptt {int dummy; } ;
struct dbg_bus_data {scalar_t__ timestamp_input_en; scalar_t__ grc_input_en; struct dbg_bus_block_data* blocks; scalar_t__ num_enabled_blocks; TYPE_1__* storms; scalar_t__ num_enabled_storms; } ;
struct dbg_tools_data {size_t chip_id; struct dbg_bus_data bus; } ;
struct ecore_hwfn {struct dbg_tools_data dbg_info; } ;
struct dbg_bus_block_data {int data; } ;
struct block_defs {int* dbg_client_id; } ;
struct TYPE_2__ {scalar_t__ enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,int) ;
 struct block_defs** VAR_6 ;
 struct storm_defs* VAR_7 ;

__attribute__((used)) static void FUNC_2(struct ecore_hwfn *VAR_8,
          struct ecore_ptt *VAR_9)
{
 struct dbg_tools_data *VAR_10 = &VAR_8->dbg_info;
 struct dbg_bus_data *VAR_11 = &VAR_10->bus;
 u32 VAR_12, VAR_13 = 0;
 u8 VAR_14;


 if (VAR_11->num_enabled_storms)
  for (VAR_14 = 0; VAR_14 < VAR_5; VAR_14++) {
   struct storm_defs *VAR_15 = &VAR_7[VAR_14];

   if (VAR_11->storms[VAR_14].enabled)
    VAR_13 |= (1 << VAR_15->dbg_client_id[VAR_10->chip_id]);
  }


 if (VAR_11->num_enabled_blocks) {
  for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) {
   struct dbg_bus_block_data *VAR_16 = &VAR_11->blocks[VAR_12];
   struct block_defs *VAR_17 = VAR_6[VAR_12];

   if (FUNC_0(VAR_16->data, VAR_1) && VAR_12 != VAR_0)
    VAR_13 |= (1 << VAR_17->dbg_client_id[VAR_10->chip_id]);
  }
 }


 if (VAR_11->grc_input_en)
  VAR_13 |= (1 << VAR_2);


 if (VAR_11->timestamp_input_en)
  VAR_13 |= (1 << VAR_3);

 FUNC_1(VAR_8, VAR_9, VAR_13);
}
