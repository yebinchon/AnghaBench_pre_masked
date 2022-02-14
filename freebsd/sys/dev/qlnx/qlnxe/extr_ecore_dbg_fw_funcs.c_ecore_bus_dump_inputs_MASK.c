
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct storm_defs {char letter; } ;
struct TYPE_3__ {struct dbg_bus_block_data* blocks; struct dbg_bus_storm_data* storms; } ;
struct dbg_tools_data {TYPE_1__ bus; } ;
struct ecore_hwfn {struct dbg_tools_data dbg_info; } ;
struct dbg_bus_storm_data {size_t mode; int hw_id; int enabled; } ;
struct dbg_bus_block_data {int data; int line_num; } ;
struct block_defs {char* name; } ;
struct TYPE_4__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (int*,int,char*,int ) ;
 int FUNC_2 (int*,int,char*,int) ;
 int FUNC_3 (int*,int,char*,char*) ;
 struct block_defs** VAR_4 ;
 struct storm_defs* VAR_5 ;
 TYPE_2__* VAR_6 ;

__attribute__((used)) static u32 FUNC_4(struct ecore_hwfn *VAR_7,
         u32 *VAR_8,
         bool VAR_9)
{
 struct dbg_tools_data *VAR_10 = &VAR_7->dbg_info;
 char VAR_11[8] = "?storm";
 u32 VAR_12, VAR_13 = 0;
 u8 VAR_14;


 for (VAR_14 = 0; VAR_14 < VAR_3; VAR_14++) {
  struct dbg_bus_storm_data *VAR_15 = &VAR_10->bus.storms[VAR_14];
  struct storm_defs *VAR_16 = &VAR_5[VAR_14];

  if (!VAR_10->bus.storms[VAR_14].enabled)
   continue;


  VAR_11[0] = VAR_16->letter;
  VAR_13 += FUNC_2(VAR_8 + VAR_13, VAR_9, "bus_input", 3);
  VAR_13 += FUNC_3(VAR_8 + VAR_13, VAR_9, "name", VAR_11);
  VAR_13 += FUNC_1(VAR_8 + VAR_13, VAR_9, "id", VAR_15->hw_id);
  VAR_13 += FUNC_3(VAR_8 + VAR_13, VAR_9, "mode", VAR_6[VAR_15->mode].name);
 }


 for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {
  struct dbg_bus_block_data *VAR_17 = &VAR_10->bus.blocks[VAR_12];
  struct block_defs *VAR_18 = VAR_4[VAR_12];

  if (!FUNC_0(VAR_17->data, VAR_0))
   continue;


  VAR_13 += FUNC_2(VAR_8 + VAR_13, VAR_9, "bus_input", 4);
  VAR_13 += FUNC_3(VAR_8 + VAR_13, VAR_9, "name", VAR_18->name);
  VAR_13 += FUNC_1(VAR_8 + VAR_13, VAR_9, "line", VAR_17->line_num);
  VAR_13 += FUNC_1(VAR_8 + VAR_13, VAR_9, "en", FUNC_0(VAR_17->data, VAR_0));
  VAR_13 += FUNC_1(VAR_8 + VAR_13, VAR_9, "shr", FUNC_0(VAR_17->data, VAR_1));
 }

 return VAR_13;
}
