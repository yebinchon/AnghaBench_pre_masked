
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct ecore_ptt {int dummy; } ;
struct dbg_tools_data {size_t chip_id; } ;
struct ecore_hwfn {struct dbg_tools_data dbg_info; } ;
struct block_defs {size_t reset_reg; int reset_bit_offset; int has_reset_bit; } ;
typedef enum block_id { ____Placeholder_block_id } block_id ;
struct TYPE_2__ {int addr; scalar_t__* exists; } ;


 int FUNC_0 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;
 struct block_defs** VAR_0 ;
 TYPE_1__* VAR_1 ;

bool FUNC_1(struct ecore_hwfn *VAR_2,
        struct ecore_ptt *VAR_3,
        enum block_id VAR_4)
{
 struct dbg_tools_data *VAR_5 = &VAR_2->dbg_info;
 struct block_defs *VAR_6 = VAR_0[VAR_4];
 u32 VAR_7;

 if (!VAR_6->has_reset_bit)
  return 0;

 VAR_7 = VAR_6->reset_reg;

 return VAR_1[VAR_7].exists[VAR_5->chip_id] ?
  !(FUNC_0(VAR_2, VAR_3, VAR_1[VAR_7].addr) & (1 << VAR_6->reset_bit_offset)) : 1;
}
