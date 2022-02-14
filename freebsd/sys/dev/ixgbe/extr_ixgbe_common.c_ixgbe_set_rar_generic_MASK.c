
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct TYPE_3__ {int (* set_vmdq ) (struct ixgbe_hw*,scalar_t__,scalar_t__) ;} ;
struct TYPE_4__ {scalar_t__ num_rar_entries; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*,int ) ;
 int VAR_3 ;
 int FUNC_5 (struct ixgbe_hw*,int ,scalar_t__) ;
 int FUNC_6 (struct ixgbe_hw*,scalar_t__,scalar_t__) ;

s32 FUNC_7(struct ixgbe_hw *VAR_4, u32 VAR_5, u8 *VAR_6, u32 VAR_7,
     u32 VAR_8)
{
 u32 VAR_9, VAR_10;
 u32 VAR_11 = VAR_4->mac.num_rar_entries;

 FUNC_0("ixgbe_set_rar_generic");


 if (VAR_5 >= VAR_11) {
  FUNC_1(VAR_0,
        "RAR index %d is out of range.\n", VAR_5);
  return VAR_1;
 }


 VAR_4->mac.ops.set_vmdq(VAR_4, VAR_5, VAR_7);





 VAR_9 = ((u32)VAR_6[0] |
     ((u32)VAR_6[1] << 8) |
     ((u32)VAR_6[2] << 16) |
     ((u32)VAR_6[3] << 24));





 VAR_10 = FUNC_4(VAR_4, FUNC_2(VAR_5));
 VAR_10 &= ~(0x0000FFFF | VAR_2);
 VAR_10 |= ((u32)VAR_6[4] | ((u32)VAR_6[5] << 8));

 if (VAR_8 != 0)
  VAR_10 |= VAR_2;

 FUNC_5(VAR_4, FUNC_3(VAR_5), VAR_9);
 FUNC_5(VAR_4, FUNC_2(VAR_5), VAR_10);

 return VAR_3;
}
