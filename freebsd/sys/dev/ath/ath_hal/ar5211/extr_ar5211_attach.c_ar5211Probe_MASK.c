
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;


 char const* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static const char*
FUNC_0(uint16_t VAR_6, uint16_t VAR_7)
{
 if (VAR_6 == VAR_5) {
  if (VAR_7 == VAR_2 || VAR_7 == VAR_4 ||
      VAR_7 == VAR_1)
   return "Atheros 5211";
  if (VAR_7 == VAR_3)
   return "Atheros 5211 (FPGA)";
 }
 return VAR_0;
}
