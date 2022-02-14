
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int type; } ;
struct e1000_hw {TYPE_1__ mac; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 int VAR_4 ;
__attribute__((used)) static bool FUNC_2(struct e1000_hw *VAR_5)
{
 u32 VAR_6 = 0;
 bool VAR_7 = VAR_4;

 FUNC_0("e1000_sgmii_uses_mdio_82575");

 switch (VAR_5->mac.type) {
 case 134:
 case 133:
  VAR_6 = FUNC_1(VAR_5, VAR_0);
  VAR_7 = !!(VAR_6 & VAR_3);
  break;
 case 132:
 case 129:
 case 128:
 case 131:
 case 130:
  VAR_6 = FUNC_1(VAR_5, VAR_1);
  VAR_7 = !!(VAR_6 & VAR_2);
  break;
 default:
  break;
 }
 return VAR_7;
}
