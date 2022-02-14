
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct dbg_attn_reg {int dummy; } ;
struct dbg_attn_block_type_data {size_t regs_offset; int num_regs; } ;
typedef enum dbg_attn_type { ____Placeholder_dbg_attn_type } dbg_attn_type ;
typedef enum block_id { ____Placeholder_block_id } block_id ;
struct TYPE_2__ {scalar_t__ ptr; } ;


 size_t VAR_0 ;
 struct dbg_attn_block_type_data* FUNC_0 (int,int) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static const struct dbg_attn_reg* FUNC_1(enum block_id VAR_2,
               enum dbg_attn_type VAR_3,
               u8 *VAR_4)
{
 const struct dbg_attn_block_type_data *VAR_5 = FUNC_0(VAR_2, VAR_3);

 *VAR_4 = VAR_5->num_regs;

 return &((const struct dbg_attn_reg *)VAR_1[VAR_0].ptr)[VAR_5->regs_offset];
}
