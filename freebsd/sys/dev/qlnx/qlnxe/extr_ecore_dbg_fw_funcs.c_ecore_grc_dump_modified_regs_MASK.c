
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
typedef scalar_t__ u16 ;
struct storm_defs {size_t block_id; scalar_t__ sem_fast_mem_addr; } ;
struct ecore_ptt {int dummy; } ;
struct dbg_tools_data {scalar_t__* block_in_reset; } ;
struct ecore_hwfn {struct dbg_tools_data dbg_info; } ;
struct TYPE_2__ {int data; } ;
struct dbg_attn_reg {scalar_t__ mask_address; int data; TYPE_1__ mode; } ;
typedef enum block_id { ____Placeholder_block_id } block_id ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 struct dbg_attn_reg* FUNC_2 (int,int ,size_t*) ;
 size_t FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,size_t*,int,scalar_t__,int,int) ;
 size_t FUNC_4 (size_t*,int,size_t,char*,int,int ,int ) ;
 int FUNC_5 (struct ecore_hwfn*,scalar_t__*) ;
 struct storm_defs* VAR_8 ;

__attribute__((used)) static u32 FUNC_6(struct ecore_hwfn *VAR_9,
          struct ecore_ptt *VAR_10,
          u32 *VAR_11,
          bool VAR_12)
{
 struct dbg_tools_data *VAR_13 = &VAR_9->dbg_info;
 u32 VAR_14, VAR_15 = 0, VAR_16 = 0;
 const struct dbg_attn_reg *VAR_17;
 u8 VAR_18, VAR_19, VAR_20;


 VAR_15 += FUNC_4(VAR_11, 0, 0, "eng", -1, VAR_6, VAR_6);


 for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++) {
  if (VAR_13->block_in_reset[VAR_14] && VAR_12)
   continue;

  VAR_17 = FUNC_2((enum block_id)VAR_14, VAR_0, &VAR_20);

  for (VAR_19 = 0; VAR_19 < VAR_20; VAR_19++) {
   const struct dbg_attn_reg *VAR_21 = &VAR_17[VAR_19];
   u16 VAR_22;
   bool VAR_23;


   VAR_23 = FUNC_1(VAR_21->mode.data, VAR_2) > 0;
   VAR_22 = FUNC_1(VAR_21->mode.data, VAR_3);
   if (VAR_23 && !FUNC_5(VAR_9, &VAR_22))
    continue;


   VAR_15 += FUNC_3(VAR_9, VAR_10, VAR_11 + VAR_15, VAR_12, VAR_21->mask_address, 1, 0);
   VAR_15 += FUNC_3(VAR_9, VAR_10, VAR_11 + VAR_15, VAR_12, FUNC_1(VAR_21->data, VAR_1), 1, 0);
   VAR_16 += 2;
  }
 }


 for (VAR_18 = 0; VAR_18 < VAR_5; VAR_18++) {
  struct storm_defs *VAR_24 = &VAR_8[VAR_18];

  if (VAR_13->block_in_reset[VAR_24->block_id] && VAR_12)
   continue;

  VAR_15 += FUNC_3(VAR_9, VAR_10, VAR_11 + VAR_15, VAR_12,
   FUNC_0(VAR_24->sem_fast_mem_addr + VAR_7), 1, 0);
  VAR_16++;
 }


 if (VAR_12)
  FUNC_4(VAR_11, 1, VAR_16, "eng", -1, VAR_6, VAR_6);

 return VAR_15;
}
