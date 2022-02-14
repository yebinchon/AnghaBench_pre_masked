
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct dbg_tools_data {size_t chip_id; } ;
struct ecore_hwfn {struct dbg_tools_data dbg_info; } ;
struct big_ram_defs {int* ram_size; int* is_256b_bit_offset; int data_reg_addr; int addr_reg_addr; int instance_name; int is_256b_reg_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_ptt*,int*,int,int ,int ,int) ;
 int FUNC_5 (struct ecore_hwfn*,int*,int,char*,int ,int,int,int,char*,int,int ) ;
 int FUNC_6 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;
 int FUNC_7 (struct ecore_hwfn*,struct ecore_ptt*,int ,int) ;
 struct big_ram_defs* VAR_1 ;

__attribute__((used)) static u32 FUNC_8(struct ecore_hwfn *VAR_2,
          struct ecore_ptt *VAR_3,
          u32 *VAR_4,
          bool VAR_5,
          u8 VAR_6)
{
 struct dbg_tools_data *VAR_7 = &VAR_2->dbg_info;
 u32 VAR_8, VAR_9, VAR_10 = 0, VAR_11, VAR_12;
 char VAR_13[12] = "???_BIG_RAM";
 char VAR_14[8] = "???_RAM";
 struct big_ram_defs *VAR_15;

 VAR_15 = &VAR_1[VAR_6];
 VAR_9 = VAR_15->ram_size[VAR_7->chip_id];

 VAR_11 = FUNC_6(VAR_2, VAR_3, VAR_15->is_256b_reg_addr);
 VAR_8 = VAR_11 & (1 << VAR_15->is_256b_bit_offset[VAR_7->chip_id]) ? 256 : 128;

 FUNC_3(VAR_14, VAR_15->instance_name, FUNC_2(VAR_15->instance_name));
 FUNC_3(VAR_13, VAR_15->instance_name, FUNC_2(VAR_15->instance_name));


 VAR_10 += FUNC_5(VAR_2, VAR_4 + VAR_10, VAR_5, VAR_13, 0, VAR_9, VAR_8 * 8, 0, VAR_14, 0, 0);


 if (!VAR_5)
  return VAR_10 + VAR_9;


 for (VAR_12 = 0; VAR_12 < FUNC_1(VAR_9, VAR_0); VAR_12++) {
  FUNC_7(VAR_2, VAR_3, VAR_15->addr_reg_addr, VAR_12);
  VAR_10 += FUNC_4(VAR_2, VAR_3, VAR_4 + VAR_10, VAR_5, FUNC_0(VAR_15->data_reg_addr), VAR_0, 0);
 }

 return VAR_10;
}
