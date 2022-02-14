
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef int u32 ;
struct i40e_hw {int dummy; } ;
struct iavf_sc {struct i40e_hw hw; } ;
typedef int if_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iavf_sc*,char*,int) ;
 int FUNC_1 (struct iavf_sc*) ;
 int FUNC_2 (int ) ;
 struct iavf_sc* FUNC_3 (int ) ;
 int FUNC_4 (struct i40e_hw*,int ) ;

__attribute__((used)) static void
FUNC_5(if_ctx_t VAR_4, uint16_t VAR_5)
{
 struct iavf_sc *VAR_6 = FUNC_3(VAR_4);
 struct i40e_hw *VAR_7 = &VAR_6->hw;
 u32 VAR_8;

 if (VAR_5 != 0)
  return;


 VAR_8 = FUNC_4(VAR_7, VAR_0) &
     VAR_1;
 if (VAR_8 != VAR_3
     && VAR_8 != VAR_2) {
  FUNC_0(VAR_6, "reset in progress! (%d)\n", VAR_8);
  return;
 }


 FUNC_2(VAR_4);


 FUNC_1(VAR_6);
}
