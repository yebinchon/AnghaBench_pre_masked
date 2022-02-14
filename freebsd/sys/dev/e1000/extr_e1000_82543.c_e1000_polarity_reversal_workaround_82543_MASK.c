
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_3__ {scalar_t__ (* write_reg ) (struct e1000_hw*,int ,int) ;scalar_t__ (* read_reg ) (struct e1000_hw*,int ,scalar_t__*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,scalar_t__,int,int*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_6 (struct e1000_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_7 (struct e1000_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_8 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_9 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_10 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_11 (struct e1000_hw*,int ,int) ;

__attribute__((used)) static s32 FUNC_12(struct e1000_hw *VAR_6)
{
 s32 VAR_7 = VAR_0;
 u16 VAR_8;
 u16 VAR_9;
 bool VAR_10;

 if (!(VAR_6->phy.ops.write_reg))
  goto out;





 VAR_7 = VAR_6->phy.ops.write_reg(VAR_6, VAR_2, 0x0019);
 if (VAR_7)
  goto out;
 VAR_7 = VAR_6->phy.ops.write_reg(VAR_6, VAR_1, 0xFFFF);
 if (VAR_7)
  goto out;

 VAR_7 = VAR_6->phy.ops.write_reg(VAR_6, VAR_2, 0x0000);
 if (VAR_7)
  goto out;





 for (VAR_9 = VAR_4; VAR_9 > 0; VAR_9--) {





  VAR_7 = VAR_6->phy.ops.read_reg(VAR_6, VAR_5, &VAR_8);
  if (VAR_7)
   goto out;

  VAR_7 = VAR_6->phy.ops.read_reg(VAR_6, VAR_5, &VAR_8);
  if (VAR_7)
   goto out;

  if (!(VAR_8 & ~VAR_3))
   break;
  FUNC_1(100);
 }


 FUNC_1(1000);



 VAR_7 = VAR_6->phy.ops.write_reg(VAR_6, VAR_2, 0x0019);
 if (VAR_7)
  goto out;
 FUNC_1(50);
 VAR_7 = VAR_6->phy.ops.write_reg(VAR_6, VAR_1, 0xFFF0);
 if (VAR_7)
  goto out;
 FUNC_1(50);
 VAR_7 = VAR_6->phy.ops.write_reg(VAR_6, VAR_1, 0xFF00);
 if (VAR_7)
  goto out;
 FUNC_1(50);
 VAR_7 = VAR_6->phy.ops.write_reg(VAR_6, VAR_1, 0x0000);
 if (VAR_7)
  goto out;

 VAR_7 = VAR_6->phy.ops.write_reg(VAR_6, VAR_2, 0x0000);
 if (VAR_7)
  goto out;





 VAR_7 = FUNC_0(VAR_6, VAR_4, 100000, &VAR_10);
 if (VAR_7)
  goto out;

out:
 return VAR_7;
}
