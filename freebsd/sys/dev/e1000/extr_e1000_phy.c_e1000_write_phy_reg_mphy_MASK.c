
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
 int VAR_6 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 int VAR_7 ;
 int FUNC_2 (struct e1000_hw*,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct e1000_hw*) ;

s32 FUNC_4(struct e1000_hw *VAR_10, u32 VAR_11, u32 VAR_12,
        bool VAR_13)
{
 u32 VAR_14 = 0;
 bool VAR_15 = VAR_8;
 bool VAR_16;

 FUNC_0("e1000_write_phy_reg_mphy");


 VAR_16 = FUNC_3(VAR_10);
 if (!VAR_16)
  return -VAR_0;


 VAR_14 = FUNC_1(VAR_10, VAR_3);
 if (VAR_14 & VAR_5) {
  VAR_15 = VAR_9;
  VAR_16 = FUNC_3(VAR_10);
  if (!VAR_16)
   return -VAR_0;
  VAR_14 |= VAR_6;
  FUNC_2(VAR_10, VAR_3, VAR_14);
 }


 VAR_16 = FUNC_3(VAR_10);
 if (!VAR_16)
  return -VAR_0;


 if (VAR_13)
  VAR_14 |= VAR_1;
 else
  VAR_14 &= ~VAR_1;
 VAR_14 = (VAR_14 & ~VAR_2) |
  (VAR_11 & VAR_2);
 FUNC_2(VAR_10, VAR_3, VAR_14);


 VAR_16 = FUNC_3(VAR_10);
 if (!VAR_16)
  return -VAR_0;
 FUNC_2(VAR_10, VAR_4, VAR_12);


 if (VAR_15)
  VAR_16 = FUNC_3(VAR_10);
 if (!VAR_16)
  return -VAR_0;
 FUNC_2(VAR_10, VAR_3,
   VAR_5);

 return VAR_7;
}
