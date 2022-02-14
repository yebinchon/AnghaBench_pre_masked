
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;


 char const* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static const char*
FUNC_0(uint16_t VAR_4, uint16_t VAR_5)
{
 if (VAR_4 == VAR_3 ||
     VAR_4 == VAR_2 ||
     VAR_4 == VAR_1) {
  switch (VAR_5) {
  case 128:
   return "Atheros 5212 (FPGA)";
  case 130:
  case 129:
  case 131:
   return "Atheros 5212";
  case 135:
   return "Atheros 2413";
  case 134:
   return "Atheros 2417";
  case 133:
   return "Atheros 5413";
  case 132:
   return "Atheros 5424/2424";
  }
 }
 return VAR_0;
}
