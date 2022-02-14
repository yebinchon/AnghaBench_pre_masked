
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {scalar_t__ (* write_reg ) (struct e1000_hw*,int ,int) ;scalar_t__ (* read_reg ) (struct e1000_hw*,int ,int*) ;} ;
struct TYPE_4__ {scalar_t__ type; TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int ,int) ;

s32 FUNC_6(struct e1000_hw *VAR_12)
{
 s32 VAR_13 = VAR_5;
 u16 VAR_14;

 FUNC_0("e1000_link_stall_workaround_hv");

 if (VAR_12->phy.type != VAR_11)
  return VAR_5;


 VAR_12->phy.ops.read_reg(VAR_12, VAR_9, &VAR_14);
 if (VAR_14 & VAR_10)
  return VAR_5;


 VAR_13 = VAR_12->phy.ops.read_reg(VAR_12, VAR_0, &VAR_14);
 if (VAR_13)
  return VAR_13;

 VAR_14 &= (VAR_1 | VAR_2 |
   VAR_4);

 if (VAR_14 != (VAR_1 | VAR_2 |
       VAR_3))
  return VAR_5;

 FUNC_1(200);


 VAR_13 = VAR_12->phy.ops.write_reg(VAR_12, VAR_6,
     (VAR_8 |
      VAR_7));
 if (VAR_13)
  return VAR_13;

 return VAR_12->phy.ops.write_reg(VAR_12, VAR_6,
         VAR_8);
}
