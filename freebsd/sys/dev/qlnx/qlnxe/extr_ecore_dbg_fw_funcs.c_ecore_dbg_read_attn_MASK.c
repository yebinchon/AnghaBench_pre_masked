
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
typedef size_t u16 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
struct dbg_attn_reg_result {size_t sts_val; void* mask_val; int block_attn_offset; int data; } ;
struct TYPE_4__ {int data; } ;
struct dbg_attn_reg {size_t sts_clr_address; size_t mask_address; int block_attn_offset; int data; TYPE_1__ mode; } ;
struct dbg_attn_block_result {size_t block_id; int data; int names_offset; struct dbg_attn_reg_result* reg_results; } ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;
typedef enum dbg_attn_type { ____Placeholder_dbg_attn_type } dbg_attn_type ;
typedef enum block_id { ____Placeholder_block_id } block_id ;
struct TYPE_6__ {int names_offset; } ;
struct TYPE_5__ {int ptr; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 size_t FUNC_0 (size_t) ;
 size_t FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,size_t) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*) ;
 TYPE_3__* FUNC_4 (int,int) ;
 struct dbg_attn_reg* FUNC_5 (int,int,size_t*) ;
 int FUNC_6 (struct ecore_hwfn*,size_t*) ;
 void* FUNC_7 (struct ecore_hwfn*,struct ecore_ptt*,size_t) ;
 TYPE_2__* VAR_13 ;

enum dbg_status FUNC_8(struct ecore_hwfn *VAR_14,
         struct ecore_ptt *VAR_15,
         enum block_id VAR_16,
         enum dbg_attn_type VAR_17,
         bool VAR_18,
         struct dbg_attn_block_result *VAR_19)
{
 enum dbg_status VAR_20 = FUNC_3(VAR_14, VAR_15);
 u8 VAR_21, VAR_22, VAR_23 = 0;
 const struct dbg_attn_reg *VAR_24;

 if (VAR_20 != VAR_12)
  return VAR_20;

 if (!VAR_13[VAR_2].ptr || !VAR_13[VAR_0].ptr || !VAR_13[VAR_1].ptr)
  return VAR_11;

 VAR_24 = FUNC_5(VAR_16, VAR_17, &VAR_22);

 for (VAR_21 = 0; VAR_21 < VAR_22; VAR_21++) {
  const struct dbg_attn_reg *VAR_25 = &VAR_24[VAR_21];
  struct dbg_attn_reg_result *VAR_26;
  u32 VAR_27, VAR_28;
  u16 VAR_29;
  bool VAR_30;


  VAR_30 = FUNC_1(VAR_25->mode.data, VAR_9) > 0;
  VAR_29 = FUNC_1(VAR_25->mode.data, VAR_10);
  if (VAR_30 && !FUNC_6(VAR_14, &VAR_29))
   continue;


  VAR_27 = FUNC_0(VAR_18 ? VAR_25->sts_clr_address : FUNC_1(VAR_25->data, VAR_8));
  VAR_28 = FUNC_7(VAR_14, VAR_15, VAR_27);
  if (!VAR_28)
   continue;


  VAR_26 = &VAR_19->reg_results[VAR_23];
  FUNC_2(VAR_26->data, VAR_7, VAR_27);
  FUNC_2(VAR_26->data, VAR_6, FUNC_1(VAR_25->data, VAR_5));
  VAR_26->block_attn_offset = VAR_25->block_attn_offset;
  VAR_26->sts_val = VAR_28;
  VAR_26->mask_val = FUNC_7(VAR_14, VAR_15, FUNC_0(VAR_25->mask_address));
  VAR_23++;
 }

 VAR_19->block_id = (u8)VAR_16;
 VAR_19->names_offset = FUNC_4(VAR_16, VAR_17)->names_offset;
 FUNC_2(VAR_19->data, VAR_3, VAR_17);
 FUNC_2(VAR_19->data, VAR_4, VAR_23);

 return VAR_12;
}
