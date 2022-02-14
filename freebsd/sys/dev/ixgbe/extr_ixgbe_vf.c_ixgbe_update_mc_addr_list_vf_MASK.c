
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {int (* write_posted ) (struct ixgbe_hw*,int*,int,int ) ;} ;
struct ixgbe_mbx_info {TYPE_1__ ops; } ;
struct ixgbe_hw {struct ixgbe_mbx_info mbx; } ;
typedef int s32 ;
typedef int (* ixgbe_mc_addr_itr ) (struct ixgbe_hw*,int **,int*) ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ixgbe_hw*,int ) ;
 int FUNC_4 (struct ixgbe_hw*,int*,int,int ) ;

s32 FUNC_5(struct ixgbe_hw *VAR_3, u8 *VAR_4,
     u32 VAR_5, ixgbe_mc_addr_itr VAR_6,
     bool VAR_7)
{
 struct ixgbe_mbx_info *VAR_8 = &VAR_3->mbx;
 u32 VAR_9[VAR_0];
 u16 *VAR_10 = (u16 *)&VAR_9[1];
 u32 VAR_11;
 u32 VAR_12, VAR_13;
 u32 VAR_14;

 FUNC_2(VAR_7);

 FUNC_0("ixgbe_update_mc_addr_list_vf");
 FUNC_1("MC Addr Count = %d\n", VAR_5);

 VAR_12 = (VAR_5 > 30) ? 30 : VAR_5;
 VAR_9[0] = VAR_1;
 VAR_9[0] |= VAR_12 << VAR_2;

 for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
  VAR_11 = FUNC_3(VAR_3, VAR_6(VAR_3, &VAR_4, &VAR_14));
  FUNC_1("Hash value = 0x%03X\n", VAR_11);
  VAR_10[VAR_13] = (u16)VAR_11;
 }

 return VAR_8->ops.write_posted(VAR_3, VAR_9, VAR_0, 0);
}
