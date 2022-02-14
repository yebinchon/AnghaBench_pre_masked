
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct ad7417_sensor {TYPE_1__ therm; } ;
typedef int phandle_t ;
typedef int int16_t ;
typedef int eeprom ;
typedef int cell_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int*,int) ;
 int VAR_0 ;
 int FUNC_2 (struct ad7417_sensor*) ;
 int * FUNC_3 (int ,char*) ;

__attribute__((used)) static int
FUNC_4(struct ad7417_sensor *VAR_1)
{
 static int VAR_2 = 0;
 static cell_t VAR_3[2][40];
 phandle_t VAR_4;
 int VAR_5, VAR_6, VAR_7;
 int VAR_8;

 if (!VAR_2) {
  VAR_4 = FUNC_0("/u3/i2c/cpuid@a0");
  FUNC_1(VAR_4, "cpuid", VAR_3[0], sizeof(VAR_3[0]));
  VAR_4 = FUNC_0("/u3/i2c/cpuid@a2");
  FUNC_1(VAR_4, "cpuid", VAR_3[1], sizeof(VAR_3[1]));
  VAR_2 = 1;
 }

 VAR_5 = FUNC_2(VAR_1);
 if (VAR_5 < 0)
  return (-1);

 if (FUNC_3(VAR_1->therm.name, "CPU B") != ((void*)0)) {
  VAR_6 = VAR_3[1][0x11] >> 16;
  VAR_7 = (int16_t)(VAR_3[1][0x11] & 0xffff) << 12;
 } else {
  VAR_6 = VAR_3[0][0x11] >> 16;
  VAR_7 = (int16_t)(VAR_3[0][0x11] & 0xffff) << 12;
 }

 VAR_8 = (VAR_5*VAR_6 + VAR_7) >> 2;
 VAR_8 = (10*(VAR_8 >> 16)) + ((10*(VAR_8 & 0xffff)) >> 16);

 return (VAR_8 + VAR_0);
}
