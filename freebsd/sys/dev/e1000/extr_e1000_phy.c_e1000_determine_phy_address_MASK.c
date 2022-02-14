
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int id; scalar_t__ addr; } ;
struct e1000_hw {TYPE_1__ phy; } ;
typedef int s32 ;
typedef enum e1000_phy_type { ____Placeholder_e1000_phy_type } e1000_phy_type ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct e1000_hw*) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int) ;

s32 FUNC_3(struct e1000_hw *VAR_4)
{
 u32 VAR_5 = 0;
 u32 VAR_6;
 enum e1000_phy_type VAR_7 = VAR_3;

 VAR_4->phy.id = VAR_7;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_4->phy.addr = VAR_5;
  VAR_6 = 0;

  do {
   FUNC_0(VAR_4);
   VAR_7 = FUNC_1(VAR_4->phy.id);




   if (VAR_7 != VAR_3)
    return VAR_2;

   FUNC_2(1);
   VAR_6++;
  } while (VAR_6 < 10);
 }

 return -VAR_0;
}
