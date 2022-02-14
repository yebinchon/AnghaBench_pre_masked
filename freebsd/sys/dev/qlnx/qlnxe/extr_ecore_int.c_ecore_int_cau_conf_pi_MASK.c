
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ecore_sb_info {int igu_sb_id; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum ecore_coalescing_fsm { ____Placeholder_ecore_coalescing_fsm } ecore_coalescing_fsm ;


 int FUNC_0 (struct ecore_hwfn*,struct ecore_ptt*,int ,int ,int,int ) ;

void FUNC_1(struct ecore_hwfn *VAR_0,
      struct ecore_ptt *VAR_1,
      struct ecore_sb_info *VAR_2, u32 VAR_3,
      enum ecore_coalescing_fsm VAR_4,
      u8 VAR_5)
{
 FUNC_0(VAR_0, VAR_1, VAR_2->igu_sb_id,
          VAR_3, VAR_4, VAR_5);
}
