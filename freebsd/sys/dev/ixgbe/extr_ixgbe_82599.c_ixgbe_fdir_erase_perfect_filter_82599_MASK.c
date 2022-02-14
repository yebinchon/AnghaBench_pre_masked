
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bkt_hash; } ;
union ixgbe_atr_input {TYPE_1__ formatted; } ;
typedef int u32 ;
typedef int u16 ;
struct ixgbe_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int*) ;

s32 FUNC_4(struct ixgbe_hw *VAR_7,
       union ixgbe_atr_input *VAR_8,
       u16 VAR_9)
{
 u32 VAR_10;
 u32 VAR_11;
 s32 VAR_12;


 VAR_10 = VAR_8->formatted.bkt_hash;
 VAR_10 |= VAR_9 << VAR_5;
 FUNC_2(VAR_7, VAR_4, VAR_10);


 FUNC_1(VAR_7);


 FUNC_2(VAR_7, VAR_0, VAR_1);

 VAR_12 = FUNC_3(VAR_7, &VAR_11);
 if (VAR_12) {
  FUNC_0("Flow Director command did not complete!\n");
  return VAR_12;
 }


 if (VAR_11 & VAR_3) {
  FUNC_2(VAR_7, VAR_4, VAR_10);
  FUNC_1(VAR_7);
  FUNC_2(VAR_7, VAR_0,
    VAR_2);
 }

 return VAR_6;
}
