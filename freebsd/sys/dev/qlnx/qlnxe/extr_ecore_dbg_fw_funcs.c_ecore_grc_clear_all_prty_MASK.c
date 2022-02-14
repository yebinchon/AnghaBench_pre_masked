
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
typedef scalar_t__ u16 ;
struct ecore_ptt {int dummy; } ;
struct dbg_tools_data {scalar_t__* block_in_reset; } ;
struct ecore_hwfn {struct dbg_tools_data dbg_info; } ;
struct TYPE_2__ {int data; } ;
struct dbg_attn_reg {int sts_clr_address; TYPE_1__ mode; } ;
typedef enum block_id { ____Placeholder_block_id } block_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 size_t VAR_3 ;
 struct dbg_attn_reg* FUNC_2 (int,int ,size_t*) ;
 scalar_t__ FUNC_3 (struct ecore_hwfn*,scalar_t__*) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;

__attribute__((used)) static void FUNC_5(struct ecore_hwfn *VAR_4,
          struct ecore_ptt *VAR_5)
{
 struct dbg_tools_data *VAR_6 = &VAR_4->dbg_info;
 const struct dbg_attn_reg *VAR_7;
 u8 VAR_8, VAR_9;
 u32 VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  if (VAR_6->block_in_reset[VAR_10])
   continue;

  VAR_7 = FUNC_2((enum block_id)VAR_10, VAR_0, &VAR_9);

  for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
   const struct dbg_attn_reg *VAR_11 = &VAR_7[VAR_8];
   u16 VAR_12;
   bool VAR_13;


   VAR_13 = FUNC_1(VAR_11->mode.data, VAR_1) > 0;
   VAR_12 = FUNC_1(VAR_11->mode.data, VAR_2);


   if (!VAR_13 || FUNC_3(VAR_4, &VAR_12))
    FUNC_4(VAR_4, VAR_5, FUNC_0(VAR_11->sts_clr_address));
  }
 }
}
