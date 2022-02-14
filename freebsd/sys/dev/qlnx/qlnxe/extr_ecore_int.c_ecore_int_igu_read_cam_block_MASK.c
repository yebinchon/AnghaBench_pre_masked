
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct ecore_ptt {int dummy; } ;
struct ecore_igu_block {int igu_sb_id; void* vector_number; void* is_pf; void* function_id; } ;
struct TYPE_4__ {TYPE_1__* p_igu_info; } ;
struct ecore_hwfn {TYPE_2__ hw_info; } ;
struct TYPE_3__ {struct ecore_igu_block* entry; } ;


 void* FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct ecore_hwfn *VAR_4,
      struct ecore_ptt *VAR_5,
      u16 VAR_6)
{
 u32 VAR_7 = FUNC_1(VAR_4, VAR_5,
      VAR_3 + sizeof(u32) * VAR_6);
 struct ecore_igu_block *VAR_8;

 VAR_8 = &VAR_4->hw_info.p_igu_info->entry[VAR_6];


 VAR_8->function_id = FUNC_0(VAR_7,
      VAR_0);
 VAR_8->is_pf = FUNC_0(VAR_7, VAR_1);
 VAR_8->vector_number = FUNC_0(VAR_7,
        VAR_2);
 VAR_8->igu_sb_id = VAR_6;
}
