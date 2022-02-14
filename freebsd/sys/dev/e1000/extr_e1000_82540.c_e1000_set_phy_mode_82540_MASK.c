
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_6__ {int (* write_reg ) (struct e1000_hw*,int ,int) ;} ;
struct TYPE_7__ {TYPE_1__ ops; } ;
struct TYPE_10__ {int (* read ) (struct e1000_hw*,int ,int,int*) ;} ;
struct TYPE_9__ {TYPE_5__ ops; } ;
struct TYPE_8__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_2__ phy; TYPE_4__ nvm; TYPE_3__ mac; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct e1000_hw*,int ,int,int*) ;
 int FUNC_2 (struct e1000_hw*,int ,int) ;
 int FUNC_3 (struct e1000_hw*,int ,int) ;

__attribute__((used)) static s32 FUNC_4(struct e1000_hw *VAR_8)
{
 s32 VAR_9 = VAR_1;
 u16 VAR_10;

 FUNC_0("e1000_set_phy_mode_82540");

 if (VAR_8->mac.type != VAR_7)
  goto out;

 VAR_9 = VAR_8->nvm.ops.read(VAR_8, VAR_5, 1, &VAR_10);
 if (VAR_9) {
  VAR_9 = -VAR_0;
  goto out;
 }

 if ((VAR_10 != VAR_6) && (VAR_10 & VAR_4)) {
  VAR_9 = VAR_8->phy.ops.write_reg(VAR_8, VAR_3,
      0x000B);
  if (VAR_9) {
   VAR_9 = -VAR_0;
   goto out;
  }
  VAR_9 = VAR_8->phy.ops.write_reg(VAR_8, VAR_2,
      0x8104);
  if (VAR_9) {
   VAR_9 = -VAR_0;
   goto out;
  }

 }

out:
 return VAR_9;
}
