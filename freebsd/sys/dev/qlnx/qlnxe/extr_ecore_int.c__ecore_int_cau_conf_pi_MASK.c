
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {scalar_t__ hw_init_done; int p_dev; } ;
struct cau_pi_entry {int prod; } ;
typedef enum ecore_coalescing_fsm { ____Placeholder_ecore_coalescing_fsm } ecore_coalescing_fsm ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct cau_pi_entry*,int ,int) ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct ecore_hwfn*,scalar_t__,int) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_5(struct ecore_hwfn *VAR_6,
       struct ecore_ptt *VAR_7,
       u16 VAR_8, u32 VAR_9,
       enum ecore_coalescing_fsm VAR_10,
       u8 VAR_11)
{
 struct cau_pi_entry VAR_12;
 u32 VAR_13, VAR_14;

 if (FUNC_0(VAR_6->p_dev))
  return;

 VAR_13 = VAR_8 * VAR_5;
 FUNC_1(&VAR_12, 0, sizeof(struct cau_pi_entry));

 FUNC_2(VAR_12.prod, VAR_1, VAR_11);
 if (VAR_10 == VAR_4)
  FUNC_2(VAR_12.prod, VAR_0, 0);
 else
  FUNC_2(VAR_12.prod, VAR_0, 1);

 VAR_14 = VAR_13 + VAR_9;
 if (VAR_6->hw_init_done) {
  FUNC_4(VAR_6, VAR_7,
    VAR_2 + VAR_14 * sizeof(u32),
    *((u32 *)&(VAR_12)));
 } else {
  FUNC_3(VAR_6,
        VAR_3 + VAR_14,
        *((u32 *)&(VAR_12)));
 }
}
