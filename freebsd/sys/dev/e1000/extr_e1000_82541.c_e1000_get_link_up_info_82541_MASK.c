
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ (* read_reg ) (struct e1000_hw*,int ,scalar_t__*) ;} ;
struct e1000_phy_info {TYPE_1__ ops; int speed_downgraded; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (struct e1000_hw*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int ,scalar_t__*) ;

__attribute__((used)) static s32 FUNC_4(struct e1000_hw *VAR_8, u16 *VAR_9,
     u16 *VAR_10)
{
 struct e1000_phy_info *VAR_11 = &VAR_8->phy;
 s32 VAR_12;
 u16 VAR_13;

 FUNC_0("e1000_get_link_up_info_82541");

 VAR_12 = FUNC_1(VAR_8, VAR_9, VAR_10);
 if (VAR_12)
  goto out;

 if (!VAR_11->speed_downgraded)
  goto out;







 VAR_12 = VAR_11->ops.read_reg(VAR_8, VAR_4, &VAR_13);
 if (VAR_12)
  goto out;

 if (!(VAR_13 & VAR_1)) {
  *VAR_10 = VAR_0;
 } else {
  VAR_12 = VAR_11->ops.read_reg(VAR_8, VAR_5, &VAR_13);
  if (VAR_12)
   goto out;

  if (*VAR_9 == VAR_7) {
   if (!(VAR_13 & VAR_2))
    *VAR_10 = VAR_0;
  } else if (*VAR_9 == VAR_6) {
   if (!(VAR_13 & VAR_3))
    *VAR_10 = VAR_0;
  }
 }

out:
 return VAR_12;
}
