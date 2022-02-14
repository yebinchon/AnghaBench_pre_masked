
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_3)
{
 u_int32_t VAR_4;

 if (FUNC_1(FUNC_0("acpi"), 0) != ((void*)0))
  return (VAR_0);
 switch (FUNC_4(VAR_3)) {
 case 0x71138086:
  FUNC_3(VAR_3, "PIIX Timecounter");
  break;
 default:
  return (VAR_0);
 }

 VAR_4 = FUNC_5(VAR_3, VAR_2, 2);
 if (!(VAR_4 & VAR_1)) {
  FUNC_2(VAR_3, "PIIX I/O space not mapped\n");
  return (VAR_0);
 }
 return (0);
}
