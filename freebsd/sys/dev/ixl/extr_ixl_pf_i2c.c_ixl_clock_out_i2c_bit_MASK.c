
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i40e_hw {int dummy; } ;
struct ixl_pf {struct i40e_hw hw; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i40e_hw*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ixl_pf*,int ,char*,int) ;
 int FUNC_3 (struct ixl_pf*,int *) ;
 int FUNC_4 (struct ixl_pf*,int *) ;
 scalar_t__ FUNC_5 (struct ixl_pf*,int *,int) ;
 int FUNC_6 (struct i40e_hw*,int ) ;

__attribute__((used)) static s32
FUNC_7(struct ixl_pf *VAR_5, bool VAR_6)
{
 struct i40e_hw *VAR_7 = &VAR_5->hw;
 s32 VAR_8;
 u32 VAR_9 = FUNC_6(VAR_7, FUNC_0(VAR_7));

 VAR_8 = FUNC_5(VAR_5, &VAR_9, VAR_6);
 if (VAR_8 == VAR_1) {
  FUNC_4(VAR_5, &VAR_9);


  FUNC_1(VAR_3);

  FUNC_3(VAR_5, &VAR_9);




  FUNC_1(VAR_4);
 } else {
  VAR_8 = VAR_0;
  FUNC_2(VAR_5, VAR_2, "I2C data was not set to %#x\n", VAR_6);
 }

 return VAR_8;
}
