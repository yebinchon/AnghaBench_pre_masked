
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 int VAR_6 ;
 int FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (struct e1000_hw*,int ,int ) ;

s32 FUNC_4(struct e1000_hw *VAR_7)
{
 s32 VAR_8 = VAR_6;
 u32 VAR_9, VAR_10;

 FUNC_0("e1000_set_i2c_bb");

 VAR_9 = FUNC_1(VAR_7, VAR_0);
 VAR_9 |= VAR_1;
 FUNC_3(VAR_7, VAR_0, VAR_9);
 FUNC_2(VAR_7);

 VAR_10 = FUNC_1(VAR_7, VAR_3);
 VAR_10 |= VAR_2;
 VAR_10 |= VAR_5;
 VAR_10 |= VAR_4;
 FUNC_3(VAR_7, VAR_3, VAR_10);
 FUNC_2(VAR_7);

 return VAR_8;
}
