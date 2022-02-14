
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct TYPE_2__ {struct dbg_bus_block_data* blocks; scalar_t__ num_enabled_blocks; } ;
struct dbg_tools_data {TYPE_1__ bus; } ;
struct ecore_hwfn {struct dbg_tools_data dbg_info; } ;
struct dbg_bus_block_data {int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 size_t VAR_2 ;
 int FUNC_1 (int,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static bool FUNC_2(struct ecore_hwfn *VAR_4,
           u8 VAR_5,
           u8 VAR_6)
{
 struct dbg_tools_data *VAR_7 = &VAR_4->dbg_info;
 u8 VAR_8, VAR_9;
 u32 VAR_10;

 VAR_9 = FUNC_1(VAR_5, VAR_3, VAR_6);

 if (VAR_7->bus.num_enabled_blocks) {
  for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
   struct dbg_bus_block_data *VAR_11 = &VAR_7->bus.blocks[VAR_10];

   if (!FUNC_0(VAR_11->data, VAR_0))
    continue;

   VAR_8 =
    FUNC_1(FUNC_0(VAR_11->data, VAR_0),
     VAR_3,
     FUNC_0(VAR_11->data, VAR_1));
   if (VAR_9 & VAR_8)
    return 1;
  }
 }

 return 0;
}
