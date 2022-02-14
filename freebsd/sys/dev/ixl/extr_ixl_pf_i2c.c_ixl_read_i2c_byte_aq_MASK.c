
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {int asq_last_status; } ;
struct i40e_hw {TYPE_1__ aq; } ;
struct ixl_pf {struct i40e_hw hw; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct i40e_hw*,int ,scalar_t__,scalar_t__,scalar_t__*,int *) ;
 int FUNC_1 (struct i40e_hw*,int ) ;
 int FUNC_2 (struct i40e_hw*,scalar_t__) ;
 int FUNC_3 (struct ixl_pf*,int ,char*,int ,int ) ;

s32
FUNC_4(struct ixl_pf *VAR_3, u8 VAR_4,
    u8 VAR_5, u8 *VAR_6)
{
 struct i40e_hw *VAR_7 = &VAR_3->hw;
 s32 VAR_8 = VAR_1;
 u32 VAR_9;

 VAR_8 = FUNC_0(VAR_7,
     VAR_0,
     VAR_5,
     VAR_4,
     &VAR_9, ((void*)0));

 if (VAR_8)
  FUNC_3(VAR_3, VAR_2, "I2C byte read status %s, error %s\n",
      FUNC_2(VAR_7, VAR_8), FUNC_1(VAR_7, VAR_7->aq.asq_last_status));
 else
  *VAR_6 = (u8)VAR_9;

 return VAR_8;
}
