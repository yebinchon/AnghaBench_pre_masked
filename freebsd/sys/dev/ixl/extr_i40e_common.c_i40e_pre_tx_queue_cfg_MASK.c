
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int base_queue; } ;
struct i40e_hw {TYPE_1__ func_caps; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct i40e_hw*,int ) ;
 int FUNC_2 (struct i40e_hw*,int ,int) ;

void FUNC_3(struct i40e_hw *VAR_4, u32 VAR_5, bool VAR_6)
{
 u32 VAR_7 = VAR_4->func_caps.base_queue + VAR_5;
 u32 VAR_8 = 0;
 u32 VAR_9;

 if (VAR_7 >= 128) {
  VAR_8 = VAR_7 / 128;
  VAR_7 %= 128;
 }

 VAR_9 = FUNC_1(VAR_4, FUNC_0(VAR_8));
 VAR_9 &= ~VAR_1;
 VAR_9 |= (VAR_7 << VAR_2);

 if (VAR_6)
  VAR_9 |= VAR_0;
 else
  VAR_9 |= VAR_3;

 FUNC_2(VAR_4, FUNC_0(VAR_8), VAR_9);
}
