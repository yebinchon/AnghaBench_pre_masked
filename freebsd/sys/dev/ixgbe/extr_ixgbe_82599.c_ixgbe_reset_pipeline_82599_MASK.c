
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
 int FUNC_1 (struct ixgbe_hw*,int ) ;
 int VAR_8 ;
 int FUNC_2 (struct ixgbe_hw*) ;
 int FUNC_3 (struct ixgbe_hw*,int ,int) ;
 int FUNC_4 (int) ;

s32 FUNC_5(struct ixgbe_hw *VAR_9)
{
 s32 VAR_10;
 u32 VAR_11 = 0;
 u32 VAR_12, VAR_13, VAR_14;


 VAR_14 = FUNC_1(VAR_9, VAR_3);
 if (VAR_14 & VAR_4) {
  VAR_14 &= ~VAR_4;
  FUNC_3(VAR_9, VAR_3, VAR_14);
  FUNC_2(VAR_9);
 }

 VAR_13 = FUNC_1(VAR_9, VAR_2);
 VAR_13 |= VAR_5;

 FUNC_3(VAR_9, VAR_2,
   VAR_13 ^ (0x4 << VAR_6));

 for (VAR_12 = 0; VAR_12 < 10; VAR_12++) {
  FUNC_4(4);
  VAR_11 = FUNC_1(VAR_9, VAR_0);
  if (VAR_11 & VAR_1)
   break;
 }

 if (!(VAR_11 & VAR_1)) {
  FUNC_0("auto negotiation not completed\n");
  VAR_10 = VAR_7;
  goto reset_pipeline_out;
 }

 VAR_10 = VAR_8;

reset_pipeline_out:

 FUNC_3(VAR_9, VAR_2, VAR_13);
 FUNC_2(VAR_9);

 return VAR_10;
}
