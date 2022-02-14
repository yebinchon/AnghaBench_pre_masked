
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_4)
{
    int VAR_5 = 0;




    if ((FUNC_1(VAR_4) == VAR_1) &&
 (FUNC_3(VAR_4) == VAR_2)) {
 VAR_5 = 1;
    } else {






 switch (FUNC_2(VAR_4)) {
 case 0x04848086:
 case 0x122e8086:
 case 0x70008086:
 case 0x71108086:
 case 0x71988086:
 case 0x24108086:
 case 0x24208086:
 case 0x24408086:
 case 0x00061004:
 case 0x05861106:
 case 0x05961106:
 case 0x06861106:
 case 0x153310b9:
 case 0x154310b9:
 case 0x00081039:
 case 0x00001078:
 case 0x01001078:
 case 0xc7001045:
 case 0x886a1060:
 case 0x02001166:
     if (VAR_3)
  FUNC_4("PCI-ISA bridge with incorrect subclass 0x%x\n",
         FUNC_3(VAR_4));
     VAR_5 = 1;
     break;

 default:
     break;
 }
    }

    if (VAR_5) {
 FUNC_0(VAR_4, "PCI-ISA bridge");
 return(-10000);
    }
    return(VAR_0);
}
