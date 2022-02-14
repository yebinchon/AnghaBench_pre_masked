
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {int (* clear_vmdq ) (struct ixgbe_hw*,scalar_t__,int ) ;} ;
struct TYPE_4__ {scalar_t__ num_rar_entries; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*,int ) ;
 int VAR_4 ;
 int FUNC_5 (struct ixgbe_hw*,int ,scalar_t__) ;
 int FUNC_6 (struct ixgbe_hw*,scalar_t__,int ) ;

s32 FUNC_7(struct ixgbe_hw *VAR_5, u32 VAR_6)
{
 u32 VAR_7;
 u32 VAR_8 = VAR_5->mac.num_rar_entries;

 FUNC_0("ixgbe_clear_rar_generic");


 if (VAR_6 >= VAR_8) {
  FUNC_1(VAR_1,
        "RAR index %d is out of range.\n", VAR_6);
  return VAR_2;
 }






 VAR_7 = FUNC_4(VAR_5, FUNC_2(VAR_6));
 VAR_7 &= ~(0x0000FFFF | VAR_3);

 FUNC_5(VAR_5, FUNC_3(VAR_6), 0);
 FUNC_5(VAR_5, FUNC_2(VAR_6), VAR_7);


 VAR_5->mac.ops.clear_vmdq(VAR_5, VAR_6, VAR_0);

 return VAR_4;
}
