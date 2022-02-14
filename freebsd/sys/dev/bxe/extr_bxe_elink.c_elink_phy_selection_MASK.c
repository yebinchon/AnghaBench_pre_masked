
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct elink_params {int multi_phy_config; } ;




 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;

uint32_t FUNC_0(struct elink_params *VAR_3)
{
 uint32_t VAR_4, VAR_5;
 uint32_t VAR_6 = VAR_0;

 VAR_4 = VAR_3->multi_phy_config &
  VAR_2;

 VAR_5 = VAR_3->multi_phy_config &
   VAR_1;

 if (VAR_4) {
  switch (VAR_5) {
  case 130:
       VAR_6 = 128;
       break;
  case 128:
       VAR_6 = 130;
       break;
  case 129:
       VAR_6 = 131;
       break;
  case 131:
       VAR_6 = 129;
       break;
  }
 } else
  VAR_6 = VAR_5;

 return VAR_6;
}
