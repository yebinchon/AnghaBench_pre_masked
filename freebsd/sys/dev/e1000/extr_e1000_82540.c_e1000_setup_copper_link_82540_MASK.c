
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_5__ {scalar_t__ (* write_reg ) (struct e1000_hw*,int ,int) ;scalar_t__ (* read_reg ) (struct e1000_hw*,int ,int*) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_3__ phy; TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 int FUNC_2 (struct e1000_hw*,int ,int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_3 (struct e1000_hw*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*) ;
 scalar_t__ FUNC_6 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_7 (struct e1000_hw*,int ,int) ;

__attribute__((used)) static s32 FUNC_8(struct e1000_hw *VAR_7)
{
 u32 VAR_8;
 s32 VAR_9;
 u16 VAR_10;

 FUNC_0("e1000_setup_copper_link_82540");

 VAR_8 = FUNC_1(VAR_7, VAR_0);
 VAR_8 |= VAR_3;
 VAR_8 &= ~(VAR_2 | VAR_1);
 FUNC_2(VAR_7, VAR_0, VAR_8);

 VAR_9 = FUNC_4(VAR_7);
 if (VAR_9)
  goto out;

 if (VAR_7->mac.type == VAR_5 ||
     VAR_7->mac.type == VAR_6) {
  VAR_9 = VAR_7->phy.ops.read_reg(VAR_7, VAR_4,
            &VAR_10);
  if (VAR_9)
   goto out;
  VAR_10 |= 0x00000008;
  VAR_9 = VAR_7->phy.ops.write_reg(VAR_7, VAR_4,
      VAR_10);
  if (VAR_9)
   goto out;
 }

 VAR_9 = FUNC_3(VAR_7);
 if (VAR_9)
  goto out;

 VAR_9 = FUNC_5(VAR_7);

out:
 return VAR_9;
}
