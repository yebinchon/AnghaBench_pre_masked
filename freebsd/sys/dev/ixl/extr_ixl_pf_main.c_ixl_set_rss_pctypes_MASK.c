
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct i40e_hw {TYPE_1__ mac; } ;
struct ixl_pf {struct i40e_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_1 (struct i40e_hw*,int ) ;
 int FUNC_2 (struct i40e_hw*,int ,int) ;
 int FUNC_3 () ;

void
FUNC_4(struct ixl_pf *VAR_17)
{
 struct i40e_hw *VAR_18 = &VAR_17->hw;
 u64 VAR_19 = 0, VAR_20;
 if (VAR_18->mac.type == VAR_7)
  VAR_19 = VAR_8;
 else
  VAR_19 = VAR_9;

 VAR_20 = (u64)FUNC_1(VAR_18, FUNC_0(0)) |
     ((u64)FUNC_1(VAR_18, FUNC_0(1)) << 32);
 VAR_20 |= VAR_19;
 FUNC_2(VAR_18, FUNC_0(0), (u32)VAR_20);
 FUNC_2(VAR_18, FUNC_0(1), (u32)(VAR_20 >> 32));

}
