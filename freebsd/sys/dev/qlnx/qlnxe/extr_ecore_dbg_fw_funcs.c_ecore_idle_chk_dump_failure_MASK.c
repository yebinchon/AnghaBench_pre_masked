
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data; } ;
struct dbg_idle_chk_info_reg {int size; int data; TYPE_1__ mode; } ;
struct dbg_idle_chk_cond_reg {int entry_size; scalar_t__ start_entry; int num_entries; } ;
union dbg_idle_chk_reg {struct dbg_idle_chk_info_reg info_reg; struct dbg_idle_chk_cond_reg cond_reg; } ;
typedef size_t u8 ;
typedef int u32 ;
typedef void* u16 ;
struct ecore_ptt {int dummy; } ;
struct dbg_tools_data {int * block_in_reset; } ;
struct ecore_hwfn {struct dbg_tools_data dbg_info; } ;
struct dbg_idle_chk_rule {size_t reg_offset; size_t num_cond_regs; size_t num_info_regs; int severity; } ;
struct dbg_idle_chk_result_reg_hdr {size_t num_dumped_cond_regs; scalar_t__ start_entry; int size; int data; int num_dumped_info_regs; int severity; void* mem_entry_id; void* rule_id; } ;
struct dbg_idle_chk_result_hdr {size_t num_dumped_cond_regs; scalar_t__ start_entry; int size; int data; int num_dumped_info_regs; int severity; void* mem_entry_id; void* rule_id; } ;
struct TYPE_4__ {scalar_t__ ptr; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 void* FUNC_1 (int ,int ) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct dbg_idle_chk_result_reg_hdr*,int ,int) ;
 int FUNC_3 (int ,int ,size_t) ;
 scalar_t__ FUNC_4 (struct ecore_hwfn*,struct ecore_ptt*,int*,int,int,int,int) ;
 int FUNC_5 (struct ecore_hwfn*,void**) ;
 TYPE_2__* VAR_11 ;

__attribute__((used)) static u32 FUNC_6(struct ecore_hwfn *VAR_12,
            struct ecore_ptt *VAR_13,
            u32 *VAR_14,
            bool VAR_15,
            u16 VAR_16,
            const struct dbg_idle_chk_rule *VAR_17,
            u16 VAR_18,
            u32 *VAR_19)
{
 struct dbg_tools_data *VAR_20 = &VAR_12->dbg_info;
 const struct dbg_idle_chk_cond_reg *VAR_21;
 const struct dbg_idle_chk_info_reg *VAR_22;
 u32 VAR_23, VAR_24 = 0, VAR_25 = 0;
 struct dbg_idle_chk_result_hdr *VAR_26;
 const union dbg_idle_chk_reg *VAR_27;
 u8 VAR_28;

 VAR_26 = (struct dbg_idle_chk_result_hdr *)VAR_14;
 VAR_27 = &((const union dbg_idle_chk_reg *)VAR_11[VAR_0].ptr)[VAR_17->reg_offset];
 VAR_21 = &VAR_27[0].cond_reg;
 VAR_22 = &VAR_27[VAR_17->num_cond_regs].info_reg;


 if (VAR_15) {
  FUNC_2(VAR_26, 0, sizeof(*VAR_26));
  VAR_26->rule_id = VAR_16;
  VAR_26->mem_entry_id = VAR_18;
  VAR_26->severity = VAR_17->severity;
  VAR_26->num_dumped_cond_regs = VAR_17->num_cond_regs;
 }

 VAR_25 += VAR_8;


 for (VAR_28 = 0; VAR_28 < VAR_17->num_cond_regs; VAR_28++) {
  const struct dbg_idle_chk_cond_reg *VAR_29 = &VAR_21[VAR_28];
  struct dbg_idle_chk_result_reg_hdr *VAR_30;

  VAR_30 = (struct dbg_idle_chk_result_reg_hdr *)(VAR_14 + VAR_25);


  if (!VAR_15) {
   VAR_25 += VAR_9 + VAR_29->entry_size;
   continue;
  }

  VAR_25 += VAR_9;
  FUNC_2(VAR_30, 0, sizeof(*VAR_30));
  VAR_30->start_entry = VAR_29->start_entry;
  VAR_30->size = VAR_29->entry_size;
  FUNC_3(VAR_30->data, VAR_4, VAR_29->num_entries > 1 || VAR_29->start_entry > 0 ? 1 : 0);
  FUNC_3(VAR_30->data, VAR_5, VAR_28);


  for (VAR_23 = 0; VAR_23 < VAR_30->size; VAR_23++, VAR_24++, VAR_25++)
   VAR_14[VAR_25] = VAR_19[VAR_24];
 }


 for (VAR_28 = 0; VAR_28 < VAR_17->num_info_regs; VAR_28++) {
  const struct dbg_idle_chk_info_reg *VAR_31 = &VAR_22[VAR_28];
  u32 VAR_32;


  if (!VAR_15) {
   VAR_25 += VAR_9 + VAR_31->size;
   continue;
  }

  VAR_32 = FUNC_1(VAR_31->data, VAR_2);
  if (VAR_32 >= VAR_10) {
   FUNC_0(VAR_12, 1, "Invalid block_id\n");
   return 0;
  }

  if (!VAR_20->block_in_reset[VAR_32]) {
   struct dbg_idle_chk_result_reg_hdr *VAR_33;
   bool VAR_34, VAR_35, VAR_36 = 1;
   u16 VAR_37;
   u32 VAR_38;

   VAR_33 = (struct dbg_idle_chk_result_reg_hdr *)(VAR_14 + VAR_25);


   VAR_35 = FUNC_1(VAR_31->mode.data, VAR_6) > 0;
   if (VAR_35) {
    VAR_37 = FUNC_1(VAR_31->mode.data, VAR_7);
    VAR_36 = FUNC_5(VAR_12, &VAR_37);
   }

   if (!VAR_36)
    continue;

   VAR_38 = FUNC_1(VAR_31->data, VAR_1);
   VAR_34 = FUNC_1(VAR_31->data, VAR_3);


   VAR_25 += VAR_9;
   VAR_26->num_dumped_info_regs++;
   FUNC_2(VAR_33, 0, sizeof(*VAR_33));
   VAR_33->size = VAR_31->size;
   FUNC_3(VAR_33->data, VAR_5, VAR_17->num_cond_regs + VAR_28);


   VAR_25 += FUNC_4(VAR_12, VAR_13, VAR_14 + VAR_25, VAR_15, VAR_38, VAR_31->size, VAR_34);
  }
 }

 return VAR_25;
}
