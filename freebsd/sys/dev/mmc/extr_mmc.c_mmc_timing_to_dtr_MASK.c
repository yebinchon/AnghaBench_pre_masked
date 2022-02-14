
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mmc_ivars {int hs_tran_speed; int tran_speed; } ;
typedef enum mmc_bus_timing { ____Placeholder_mmc_bus_timing } mmc_bus_timing ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
__attribute__((used)) static uint32_t
FUNC_0(struct mmc_ivars *VAR_7, enum mmc_bus_timing VAR_8)
{

 switch (VAR_8) {
 case 133:
  return (VAR_7->tran_speed);
 case 138:
  return (VAR_7->hs_tran_speed);
 case 130:
  return (VAR_4);
 case 129:
  return (VAR_5);
 case 132:
  return (VAR_2);
 case 128:
  return (VAR_6);
 case 131:
  return (VAR_3);
 case 137:
  return (VAR_0);
 case 136:
 case 135:
 case 134:
  return (VAR_1);
 }
 return (0);
}
