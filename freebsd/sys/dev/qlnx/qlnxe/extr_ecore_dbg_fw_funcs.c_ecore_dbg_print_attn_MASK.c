
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef void* u32 ;
struct ecore_hwfn {int dummy; } ;
struct dbg_attn_reg_result {int mask_val; int sts_val; int data; } ;
struct dbg_attn_block_result {struct dbg_attn_reg_result* reg_results; int data; } ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;
typedef enum dbg_attn_type { ____Placeholder_dbg_attn_type } dbg_attn_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ecore_hwfn*,int,char*,char const*,void*,int ,int ) ;
 void* FUNC_1 (int ,int ) ;

enum dbg_status FUNC_2(struct ecore_hwfn *VAR_5,
          struct dbg_attn_block_result *VAR_6)
{
 enum dbg_attn_type VAR_7;
 u8 VAR_8, VAR_9;

 VAR_8 = FUNC_1(VAR_6->data, VAR_2);
 VAR_7 = (enum dbg_attn_type)FUNC_1(VAR_6->data, VAR_1);

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  struct dbg_attn_reg_result *VAR_10;
  const char *VAR_11;
  u32 VAR_12;

  VAR_10 = &VAR_6->reg_results[VAR_9];
  VAR_11 = (VAR_7 == VAR_0 ? "interrupt" : "parity");
  VAR_12 = FUNC_1(VAR_10->data, VAR_3);
  FUNC_0(VAR_5, 0, "%s: address 0x%08x, status 0x%08x, mask 0x%08x\n", VAR_11, VAR_12, VAR_10->sts_val, VAR_10->mask_val);
 }

 return VAR_4;
}
