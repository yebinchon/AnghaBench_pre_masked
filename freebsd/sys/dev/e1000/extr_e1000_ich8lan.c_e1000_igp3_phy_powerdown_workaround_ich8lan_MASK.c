
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_5__ {int (* read_reg ) (struct e1000_hw*,int ,int*) ;int (* write_reg ) (struct e1000_hw*,int ,int) ;} ;
struct TYPE_6__ {scalar_t__ type; TYPE_2__ ops; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_3__ phy; TYPE_1__ mac; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 int FUNC_2 (struct e1000_hw*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct e1000_hw*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (struct e1000_hw*,int ,int*) ;
 int FUNC_5 (struct e1000_hw*,int ,int) ;
 int FUNC_6 (struct e1000_hw*,int ,int*) ;

void FUNC_7(struct e1000_hw *VAR_10)
{
 u32 VAR_11;
 u16 VAR_12;
 u8 VAR_13 = 0;

 FUNC_0("e1000_igp3_phy_powerdown_workaround_ich8lan");

 if (VAR_10->phy.type != VAR_9)
  return;


 do {

  VAR_11 = FUNC_1(VAR_10, VAR_2);
  VAR_11 |= (VAR_3 |
   VAR_4);
  FUNC_2(VAR_10, VAR_2, VAR_11);




  if (VAR_10->mac.type == VAR_8)
   FUNC_3(VAR_10);


  VAR_10->phy.ops.read_reg(VAR_10, VAR_5, &VAR_12);
  VAR_12 &= ~VAR_6;
  VAR_10->phy.ops.write_reg(VAR_10, VAR_5,
          VAR_12 | VAR_7);


  VAR_10->phy.ops.read_reg(VAR_10, VAR_5, &VAR_12);
  VAR_12 &= VAR_6;
  if ((VAR_12 == VAR_7) || VAR_13)
   break;


  VAR_11 = FUNC_1(VAR_10, VAR_0);
  FUNC_2(VAR_10, VAR_0, VAR_11 | VAR_1);
  VAR_13++;
 } while (VAR_13);
}
