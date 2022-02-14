
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ixgbe_hw*,int) ;

s32 FUNC_3(struct ixgbe_hw *VAR_10, u32 VAR_11,
   bool VAR_12)
{
 FUNC_1(VAR_12);
 FUNC_0("ixgbe_init_fdir_perfect_82599");
 VAR_11 |= VAR_6 |
      VAR_7 |
      (VAR_8 << VAR_0) |
      (0x6 << VAR_3) |
      (0xA << VAR_5) |
      (4 << VAR_4);

 if (VAR_12)
  VAR_11 |=(VAR_1 <<
     VAR_2);


 FUNC_2(VAR_10, VAR_11);

 return VAR_9;
}
