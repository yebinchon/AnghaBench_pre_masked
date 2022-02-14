
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_5__ {scalar_t__ (* read_reg ) (struct ixgbe_hw*,int ,int ,int*) ;} ;
struct TYPE_6__ {int speeds_supported; TYPE_2__ ops; } ;
struct TYPE_4__ {int type; } ;
struct ixgbe_hw {TYPE_3__ phy; TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


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



 scalar_t__ FUNC_0 (struct ixgbe_hw*,int ,int ,int*) ;

__attribute__((used)) static s32 FUNC_1(struct ixgbe_hw *VAR_10)
{
 s32 VAR_11;
 u16 VAR_12;

 VAR_11 = VAR_10->phy.ops.read_reg(VAR_10, VAR_8,
          VAR_9,
          &VAR_12);
 if (VAR_11)
  return VAR_11;

 if (VAR_12 & VAR_6)
  VAR_10->phy.speeds_supported |= VAR_1;
 if (VAR_12 & VAR_7)
  VAR_10->phy.speeds_supported |= VAR_2;
 if (VAR_12 & VAR_5)
  VAR_10->phy.speeds_supported |= VAR_0;

 switch (VAR_10->mac.type) {
 case 130:
  VAR_10->phy.speeds_supported |= VAR_3;
  VAR_10->phy.speeds_supported |= VAR_4;
  break;
 case 128:
 case 129:
  VAR_10->phy.speeds_supported &= ~VAR_0;
  break;
 default:
  break;
 }

 return VAR_11;
}
