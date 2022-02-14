
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_3__ {scalar_t__ (* write_reg ) (struct e1000_hw*,int ,int) ;scalar_t__ (* read_reg ) (struct e1000_hw*,int ,int*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_6 (struct e1000_hw*,int ,int) ;

__attribute__((used)) static s32 FUNC_7(struct e1000_hw *VAR_3, u16 VAR_4,
        u8 VAR_5, u16 *VAR_6, bool VAR_7)
{
 s32 VAR_8;

 FUNC_0("__e1000_access_xmdio_reg");

 VAR_8 = VAR_3->phy.ops.write_reg(VAR_3, VAR_1, VAR_5);
 if (VAR_8)
  return VAR_8;

 VAR_8 = VAR_3->phy.ops.write_reg(VAR_3, VAR_0, VAR_4);
 if (VAR_8)
  return VAR_8;

 VAR_8 = VAR_3->phy.ops.write_reg(VAR_3, VAR_1, VAR_2 |
        VAR_5);
 if (VAR_8)
  return VAR_8;

 if (VAR_7)
  VAR_8 = VAR_3->phy.ops.read_reg(VAR_3, VAR_0, VAR_6);
 else
  VAR_8 = VAR_3->phy.ops.write_reg(VAR_3, VAR_0, *VAR_6);
 if (VAR_8)
  return VAR_8;


 VAR_8 = VAR_3->phy.ops.write_reg(VAR_3, VAR_1, 0);
 if (VAR_8)
  return VAR_8;

 return VAR_8;
}
