
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;


 char const* VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static const char*
FUNC_0(uint16_t VAR_2, uint16_t VAR_3)
{
 if (VAR_2 == VAR_1) {
  switch (VAR_3) {
  case 129:
  case 128:
   return "Atheros 5312 WiSoC";
  case 136:
   return "Atheros 2313 WiSoC";
  case 135:
  case 134:
   return "Atheros 2315 WiSoC";
  case 133:
  case 132:
   return "Atheros 2317 WiSoC";
  case 131:
   return "Atheros 2413";
  case 130:
   return "Atheros 2417";
  }
 }
 return VAR_0;
}
