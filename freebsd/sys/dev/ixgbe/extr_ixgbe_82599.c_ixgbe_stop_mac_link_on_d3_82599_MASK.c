
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ixgbe_hw {int wol_enabled; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ixgbe_hw*,int ) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int ) ;
 int FUNC_3 (struct ixgbe_hw*) ;
 int FUNC_4 (struct ixgbe_hw*,int ,int*) ;

void FUNC_5(struct ixgbe_hw *VAR_4)
{
 u32 VAR_5;
 u16 VAR_6 = 0;

 FUNC_0("ixgbe_stop_mac_link_on_d3_82599");
 FUNC_4(VAR_4, VAR_3, &VAR_6);

 if (!FUNC_3(VAR_4) && !VAR_4->wol_enabled &&
     VAR_6 & VAR_2) {
  VAR_5 = FUNC_1(VAR_4, VAR_0);
  VAR_5 |= VAR_1;
  FUNC_2(VAR_4, VAR_0, VAR_5);
 }
}
