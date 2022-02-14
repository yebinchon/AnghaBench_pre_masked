
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int (* read_reg ) (struct ixgbe_hw*,int ,int ,int*) ;} ;
struct TYPE_4__ {scalar_t__ type; TYPE_1__ ops; int id; } ;
struct ixgbe_hw {TYPE_2__ phy; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (struct ixgbe_hw*,int) ;
 int FUNC_4 (struct ixgbe_hw*,int ,int ,int*) ;

__attribute__((used)) static bool FUNC_5(struct ixgbe_hw *VAR_9, u16 VAR_10)
{
 u16 VAR_11 = 0;

 if (!FUNC_3(VAR_9, VAR_10)) {
  FUNC_0("Unable to validate PHY address 0x%04X\n",
   VAR_10);
  return VAR_0;
 }

 if (FUNC_1(VAR_9))
  return VAR_0;

 VAR_9->phy.type = FUNC_2(VAR_9->phy.id);

 if (VAR_9->phy.type == VAR_8) {
  VAR_9->phy.ops.read_reg(VAR_9, VAR_3,
         VAR_4, &VAR_11);
  if (VAR_11 &
      (VAR_2 |
       VAR_1))
   VAR_9->phy.type = VAR_6;
  else
   VAR_9->phy.type = VAR_7;
 }

 return VAR_5;
}
