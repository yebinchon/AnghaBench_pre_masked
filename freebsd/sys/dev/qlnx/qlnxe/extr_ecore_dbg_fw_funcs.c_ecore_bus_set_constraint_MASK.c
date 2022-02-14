
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ecore_ptt {int dummy; } ;
struct TYPE_2__ {int next_trigger_state; } ;
struct dbg_tools_data {TYPE_1__ bus; } ;
struct ecore_hwfn {struct dbg_tools_data dbg_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct ecore_hwfn*,struct ecore_ptt*,int,int) ;

__attribute__((used)) static void FUNC_1(struct ecore_hwfn *VAR_21,
          struct ecore_ptt *VAR_22,
          bool VAR_23,
          u8 VAR_24,
          u8 VAR_25,
          u32 VAR_26,
          u32 VAR_27,
          u8 VAR_28,
          u8 VAR_29,
          u16 VAR_30,
          u16 VAR_31,
          u8 VAR_32,
          u8 VAR_33)
{
 struct dbg_tools_data *VAR_34 = &VAR_21->dbg_info;
 u32 VAR_35 = VAR_24 * VAR_0;
 u8 VAR_36;


 if (!VAR_23) {
  VAR_36 = VAR_34->bus.next_trigger_state - 1;
  VAR_35 += VAR_36 * VAR_20 * VAR_19 * VAR_0;
 }

 FUNC_0(VAR_21, VAR_22, (VAR_23 ? VAR_8 : VAR_17) + VAR_35, VAR_25);
 FUNC_0(VAR_21, VAR_22, (VAR_23 ? VAR_2 : VAR_11) + VAR_35, VAR_26);
 FUNC_0(VAR_21, VAR_22, (VAR_23 ? VAR_3 : VAR_12) + VAR_35, VAR_27);
 FUNC_0(VAR_21, VAR_22, (VAR_23 ? VAR_4 : VAR_13) + VAR_35, VAR_28);
 FUNC_0(VAR_21, VAR_22, (VAR_23 ? VAR_5 : VAR_14) + VAR_35, VAR_29);
 FUNC_0(VAR_21, VAR_22, (VAR_23 ? VAR_7 : VAR_16) + VAR_35, VAR_30);
 FUNC_0(VAR_21, VAR_22, (VAR_23 ? VAR_9 : VAR_18) + VAR_35, VAR_31);
 FUNC_0(VAR_21, VAR_22, (VAR_23 ? VAR_1 : VAR_10) + VAR_35, VAR_32);
 FUNC_0(VAR_21, VAR_22, (VAR_23 ? VAR_6 : VAR_15) + VAR_35, VAR_33);
}
