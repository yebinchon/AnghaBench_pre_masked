
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct i40e_hw {int dummy; } ;
struct ixl_pf {struct i40e_hw hw; } ;
typedef int s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct i40e_hw*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ixl_pf*,int ,char*) ;
 int FUNC_3 (struct i40e_hw*) ;
 int FUNC_4 (struct ixl_pf*,scalar_t__*) ;
 int FUNC_5 (struct ixl_pf*,scalar_t__*) ;
 int FUNC_6 (struct ixl_pf*,scalar_t__*) ;
 scalar_t__ FUNC_7 (struct i40e_hw*,int ) ;
 int FUNC_8 (struct i40e_hw*,int ,scalar_t__) ;

__attribute__((used)) static s32
FUNC_9(struct ixl_pf *VAR_6)
{
 struct i40e_hw *VAR_7 = &VAR_6->hw;
 s32 VAR_8 = VAR_2;
 u32 VAR_9 = 0;
 u32 VAR_10 = FUNC_7(VAR_7, FUNC_0(VAR_7));
 u32 VAR_11 = 10;
 bool VAR_12 = 1;

 FUNC_6(VAR_6, &VAR_10);


 FUNC_1(VAR_4);

 VAR_10 = FUNC_7(VAR_7, FUNC_0(VAR_7));
 VAR_10 |= VAR_1;
 FUNC_8(VAR_7, FUNC_0(VAR_7), VAR_10);
 FUNC_3(VAR_7);



 for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++) {
  VAR_10 = FUNC_7(VAR_7, FUNC_0(VAR_7));
  VAR_12 = FUNC_4(VAR_6, &VAR_10);

  FUNC_1(1);
  if (!VAR_12)
   break;
 }

 if (VAR_12) {
  FUNC_2(VAR_6, VAR_3, "I2C ack was not received.\n");
  VAR_8 = VAR_0;
 }

 FUNC_5(VAR_6, &VAR_10);


 FUNC_1(VAR_5);

 return VAR_8;
}
