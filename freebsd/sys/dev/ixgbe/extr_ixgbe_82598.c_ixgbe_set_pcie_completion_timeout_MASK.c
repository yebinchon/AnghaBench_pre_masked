
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ixgbe_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*,int ) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int ) ;
 int FUNC_3 (struct ixgbe_hw*,int ,int) ;

void FUNC_4(struct ixgbe_hw *VAR_7)
{
 u32 VAR_8 = FUNC_1(VAR_7, VAR_0);
 u16 VAR_9;


 if (VAR_8 & VAR_3)
  goto out;





 if (!(VAR_8 & VAR_1)) {
  VAR_8 |= VAR_2;
  goto out;
 }






 VAR_9 = FUNC_0(VAR_7, VAR_5);
 VAR_9 |= VAR_6;
 FUNC_2(VAR_7, VAR_5, VAR_9);
out:

 VAR_8 &= ~VAR_4;
 FUNC_3(VAR_7, VAR_0, VAR_8);
}
