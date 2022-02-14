
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct bwn_phy {scalar_t__ type; } ;
struct bwn_mac {struct bwn_phy mac_phy; } ;






 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static uint16_t
FUNC_1(struct bwn_mac *VAR_9, uint8_t VAR_10)
{
 struct bwn_phy *VAR_11 = &VAR_9->mac_phy;
 uint16_t VAR_12 = 0;
 uint16_t VAR_13;


 VAR_13 = VAR_1;

 if (FUNC_0(VAR_10) && VAR_11->type != VAR_0) {
  VAR_12 = VAR_13;
 } else {
  VAR_12 = VAR_13;



  switch (VAR_10) {
  case 138:
   VAR_12 |= 0;
   break;
  case 137:
   VAR_12 |= 1;
   break;
  case 136:
   VAR_12 |= 2;
   break;
  case 139:
   VAR_12 |= 3;
   break;
  case 129:
   VAR_12 |= VAR_2;
   VAR_12 |= VAR_5;
   break;
  case 128:
   VAR_12 |= VAR_3;
   VAR_12 |= VAR_5;
   break;
  case 135:
   VAR_12 |= VAR_2;
   VAR_12 |= VAR_8;
   break;
  case 134:
   VAR_12 |= VAR_3;
   VAR_12 |= VAR_8;
   break;
  case 133:
   VAR_12 |= VAR_2;
   VAR_12 |= VAR_6;
   break;
  case 132:
   VAR_12 |= VAR_3;
   VAR_12 |= VAR_6;
   break;
  case 131:
   VAR_12 |= VAR_2;
   VAR_12 |= VAR_7;
   break;
  case 130:
   VAR_12 |= VAR_3;
   VAR_12 |= VAR_7;
   break;
  default:
   break;
  }
  VAR_12 |= VAR_4;
 }

 return VAR_12;
}
