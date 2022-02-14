
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2)
{

    if (FUNC_1(VAR_2) == 0x19628086 && FUNC_2(VAR_2) == 0x105a) {
 FUNC_0(VAR_2, "Promise SuperTrak SX6000 ATA RAID controller");
 return VAR_0;
    }


    if (FUNC_1(VAR_2) == 0x19608086 && FUNC_2(VAR_2) == 0x105a) {
 FUNC_0(VAR_2, "Promise SuperTrak 100 ATA RAID controller");
 return VAR_0;
    }

    return VAR_1;
}
