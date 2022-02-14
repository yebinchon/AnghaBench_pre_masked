
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2)
{
 uint16_t VAR_3;

 VAR_3 = FUNC_0(FUNC_2(VAR_2), FUNC_1(0),
     VAR_1);
 switch (VAR_3 >> 4) {
 case 0x121:
  FUNC_3(VAR_2, "Marvell Link Street 88E6123 3-Port Gigabit Switch");
  return (0);
 case 0x161:
  FUNC_3(VAR_2, "Marvell Link Street 88E6161 6-Port Gigabit Switch");
  return (0);
 case 0x165:
  FUNC_3(VAR_2, "Marvell Link Street 88E6161 6-Port Advanced Gigabit Switch");
  return (0);
 default:
  return (VAR_0);
 }
}
