
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 int FUNC_2 (struct e1000_hw*,int ,int) ;
 int FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (struct e1000_hw*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_6 (struct e1000_hw*) ;
 scalar_t__ FUNC_7 (struct e1000_hw*,int ,int) ;

__attribute__((used)) static s32 FUNC_8(struct e1000_hw *VAR_6)
{
 u32 VAR_7;
 s32 VAR_8;
 u16 VAR_9;

 FUNC_0("e1000_setup_copper_link_80003es2lan");

 VAR_7 = FUNC_1(VAR_6, VAR_0);
 VAR_7 |= VAR_3;
 VAR_7 &= ~(VAR_2 | VAR_1);
 FUNC_2(VAR_6, VAR_0, VAR_7);





 VAR_8 = FUNC_7(VAR_6, FUNC_3(0x34, 4),
         0xFFFF);
 if (VAR_8)
  return VAR_8;
 VAR_8 = FUNC_5(VAR_6, FUNC_3(0x34, 9),
        &VAR_9);
 if (VAR_8)
  return VAR_8;
 VAR_9 |= 0x3F;
 VAR_8 = FUNC_7(VAR_6, FUNC_3(0x34, 9),
         VAR_9);
 if (VAR_8)
  return VAR_8;
 VAR_8 =
     FUNC_5(VAR_6,
         VAR_5,
         &VAR_9);
 if (VAR_8)
  return VAR_8;
 VAR_9 |= VAR_4;
 VAR_8 =
     FUNC_7(VAR_6,
          VAR_5,
          VAR_9);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_4(VAR_6);
 if (VAR_8)
  return VAR_8;

 return FUNC_6(VAR_6);
}
