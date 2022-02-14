
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct storm_defs {size_t block_id; char letter; int sem_fast_mem_addr; } ;
struct fw_asserts_ram_section {int list_element_dword_size; int list_num_elements; int list_dword_offset; int list_next_index_dword_offset; int section_ram_line_offset; } ;
struct fw_info {struct fw_asserts_ram_section fw_asserts_section; } ;
struct ecore_ptt {int dummy; } ;
struct dbg_tools_data {scalar_t__* block_in_reset; } ;
struct ecore_hwfn {struct dbg_tools_data dbg_info; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 size_t VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,int*,int,int) ;
 int FUNC_4 (int*,int,int) ;
 int FUNC_5 (int*,int,char*,int) ;
 int FUNC_6 (int*,int,char*,int) ;
 int FUNC_7 (int*,int,char*,char*) ;
 int FUNC_8 (struct ecore_hwfn*,struct ecore_ptt*,int*,int,int,int,int) ;
 int FUNC_9 (struct ecore_hwfn*,struct ecore_ptt*,int) ;
 int FUNC_10 (struct ecore_hwfn*,struct ecore_ptt*,size_t,struct fw_info*) ;
 struct storm_defs* VAR_2 ;

__attribute__((used)) static u32 FUNC_11(struct ecore_hwfn *VAR_3,
         struct ecore_ptt *VAR_4,
         u32 *VAR_5,
         bool VAR_6)
{
 struct dbg_tools_data *VAR_7 = &VAR_3->dbg_info;
 struct fw_asserts_ram_section *VAR_8;
 char VAR_9[2] = "?";
 struct fw_info VAR_10;
 u32 VAR_11 = 0;
 u8 VAR_12;


 VAR_11 += FUNC_3(VAR_3, VAR_4, VAR_5 + VAR_11, VAR_6, 1);
 VAR_11 += FUNC_7(VAR_5 + VAR_11, VAR_6, "dump-type", "fw-asserts");


 for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
  u32 VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
  struct storm_defs *VAR_18 = &VAR_2[VAR_12];

  if (VAR_7->block_in_reset[VAR_18->block_id])
   continue;


  FUNC_10(VAR_3, VAR_4, VAR_12, &VAR_10);

  VAR_8 = &VAR_10.fw_asserts_section;


  VAR_9[0] = VAR_18->letter;
  VAR_11 += FUNC_6(VAR_5 + VAR_11, VAR_6, "fw_asserts", 2);
  VAR_11 += FUNC_7(VAR_5 + VAR_11, VAR_6, "storm", VAR_9);
  VAR_11 += FUNC_5(VAR_5 + VAR_11, VAR_6, "size", VAR_8->list_element_dword_size);


  if (!VAR_6) {
   VAR_11 += VAR_8->list_element_dword_size;
   continue;
  }

  VAR_13 = VAR_18->sem_fast_mem_addr + VAR_1 +
   FUNC_2(VAR_8->section_ram_line_offset);
  VAR_14 = VAR_13 + FUNC_1(VAR_8->list_next_index_dword_offset);
  VAR_15 = FUNC_9(VAR_3, VAR_4, VAR_14);
  VAR_16 = (VAR_15 > 0 ? VAR_15 : VAR_8->list_num_elements) - 1;
  VAR_17 = FUNC_0(VAR_13) + VAR_8->list_dword_offset +
     VAR_16 * VAR_8->list_element_dword_size;
  VAR_11 += FUNC_8(VAR_3, VAR_4, VAR_5 + VAR_11, VAR_6, VAR_17, VAR_8->list_element_dword_size, 0);
 }


 VAR_11 += FUNC_4(VAR_5, VAR_11, VAR_6);

 return VAR_11;
}
