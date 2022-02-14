
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ media_type; } ;
struct e1000_hw {TYPE_1__ phy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 int FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (struct e1000_hw*,int ,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (struct e1000_hw*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct e1000_hw *VAR_5)
{
 u32 VAR_6;

 FUNC_0("e1000_power_up_serdes_link_82575");

 if ((VAR_5->phy.media_type != VAR_4) &&
     !FUNC_4(VAR_5))
  return;


 VAR_6 = FUNC_1(VAR_5, VAR_2);
 VAR_6 |= VAR_3;
 FUNC_3(VAR_5, VAR_2, VAR_6);


 VAR_6 = FUNC_1(VAR_5, VAR_0);
 VAR_6 &= ~VAR_1;
 FUNC_3(VAR_5, VAR_0, VAR_6);


 FUNC_2(VAR_5);
 FUNC_5(1);
}
