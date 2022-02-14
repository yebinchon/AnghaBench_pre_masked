
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct ixgbe_hw*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (struct ixgbe_hw*,int ,int) ;
 int FUNC_5 (int) ;

s32 FUNC_6(struct ixgbe_hw *VAR_2, u32 VAR_3, u32 VAR_4,
    bool VAR_5, bool VAR_6)
{
 u32 VAR_7;
 u32 VAR_8;
 u32 VAR_9;
 u32 VAR_10;

 FUNC_5(VAR_6);

 FUNC_0("ixgbe_set_vfta_82598");

 if (VAR_3 > 4095)
  return VAR_0;


 VAR_7 = (VAR_3 >> 5) & 0x7F;


 VAR_10 = ((VAR_3 >> 3) & 0x03);
 VAR_8 = (VAR_3 & 0x7) << 2;


 VAR_9 = FUNC_1(VAR_2, FUNC_3(VAR_10, VAR_7));
 VAR_9 &= (~(0x0F << VAR_8));
 VAR_9 |= (VAR_4 << VAR_8);
 FUNC_4(VAR_2, FUNC_3(VAR_10, VAR_7), VAR_9);


 VAR_8 = VAR_3 & 0x1F;

 VAR_9 = FUNC_1(VAR_2, FUNC_2(VAR_7));
 if (VAR_5)

  VAR_9 |= (1 << VAR_8);
 else

  VAR_9 &= ~(1 << VAR_8);
 FUNC_4(VAR_2, FUNC_2(VAR_7), VAR_9);

 return VAR_1;
}
