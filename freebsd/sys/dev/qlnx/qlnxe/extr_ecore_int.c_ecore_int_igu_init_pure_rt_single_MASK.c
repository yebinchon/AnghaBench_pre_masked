
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct ecore_ptt {int dummy; } ;
struct ecore_igu_block {int vector_number; int is_pf; int function_id; } ;
struct TYPE_4__ {TYPE_1__* p_igu_info; } ;
struct ecore_hwfn {TYPE_2__ hw_info; } ;
struct TYPE_3__ {struct ecore_igu_block* entry; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ecore_hwfn*,int,char*,size_t) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*,size_t,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,size_t,int,size_t) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__,int ) ;

void FUNC_6(struct ecore_hwfn *VAR_4,
           struct ecore_ptt *VAR_5,
           u16 VAR_6, u16 VAR_7, bool VAR_8)
{
 struct ecore_igu_block *VAR_9;
 int VAR_10, VAR_11;

 VAR_9 = &VAR_4->hw_info.p_igu_info->entry[VAR_6];
 FUNC_1(VAR_4, VAR_1,
     "Cleaning SB [%04x]: func_id= %d is_pf = %d vector_num = 0x%0x\n",
     VAR_6, VAR_9->function_id, VAR_9->is_pf,
     VAR_9->vector_number);


 if (VAR_8)
  FUNC_3(VAR_4, VAR_5, VAR_6, 1, VAR_7);


 FUNC_3(VAR_4, VAR_5, VAR_6, 0, VAR_7);


 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
  u32 VAR_12;

  VAR_12 = FUNC_4(VAR_4, VAR_5,
          VAR_3 +
          ((VAR_6 / 32) * 4));
  if (VAR_12 & (1 << (VAR_6 % 32)))
   FUNC_2(10);
  else
   break;
 }
 if (VAR_11 == VAR_2)
  FUNC_0(VAR_4, 1,
     "Failed SB[0x%08x] still appearing in WRITE_DONE_PENDING\n",
     VAR_6);


 for (VAR_10 = 0; VAR_10 < 12; VAR_10++)
  FUNC_5(VAR_4, VAR_5,
    VAR_0 + (VAR_6 * 12 + VAR_10) * 4, 0);
}
