
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
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int ,int ) ;
 int FUNC_6 (int) ;

s32 FUNC_7(struct e1000_hw *VAR_9, bool VAR_10)
{
 s32 VAR_11;
 u32 VAR_12 = 0;
 u32 VAR_13 = 0;
 u32 VAR_14 = 0;
 u16 VAR_15 = 0;

 FUNC_0("e1000_configure_k1_ich8lan");

 VAR_11 = FUNC_4(VAR_9, VAR_6,
          &VAR_15);
 if (VAR_11)
  return VAR_11;

 if (VAR_10)
  VAR_15 |= VAR_7;
 else
  VAR_15 &= ~VAR_7;

 VAR_11 = FUNC_5(VAR_9, VAR_6,
           VAR_15);
 if (VAR_11)
  return VAR_11;

 FUNC_6(20);
 VAR_13 = FUNC_1(VAR_9, VAR_1);
 VAR_12 = FUNC_1(VAR_9, VAR_0);

 VAR_14 = VAR_12 & ~(VAR_5 | VAR_4);
 VAR_14 |= VAR_3;
 FUNC_3(VAR_9, VAR_0, VAR_14);

 FUNC_3(VAR_9, VAR_1, VAR_13 | VAR_2);
 FUNC_2(VAR_9);
 FUNC_6(20);
 FUNC_3(VAR_9, VAR_0, VAR_12);
 FUNC_3(VAR_9, VAR_1, VAR_13);
 FUNC_2(VAR_9);
 FUNC_6(20);

 return VAR_8;
}
