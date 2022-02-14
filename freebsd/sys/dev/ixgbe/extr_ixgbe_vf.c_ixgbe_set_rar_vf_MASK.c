
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int addr; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (struct ixgbe_hw*,int ) ;
 int FUNC_2 (struct ixgbe_hw*,int*,int*,int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int*,int ,int) ;

s32 FUNC_5(struct ixgbe_hw *VAR_4, u32 VAR_5, u8 *VAR_6, u32 VAR_7,
       u32 VAR_8)
{
 u32 VAR_9[3];
 u8 *VAR_10 = (u8 *)(&VAR_9[1]);
 s32 VAR_11;
 FUNC_0(VAR_7, VAR_8, VAR_5);

 FUNC_4(VAR_9, 0, 12);
 VAR_9[0] = VAR_1;
 FUNC_3(VAR_10, VAR_6, 6);
 VAR_11 = FUNC_2(VAR_4, VAR_9, VAR_9, 3);

 VAR_9[0] &= ~VAR_2;


 if (!VAR_11 &&
     (VAR_9[0] == (VAR_1 | VAR_3))) {
  FUNC_1(VAR_4, VAR_4->mac.addr);
  return VAR_0;
 }

 return VAR_11;
}
