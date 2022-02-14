
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {uintptr_t spec_vers; uintptr_t dsr_imp; } ;
struct mmc_ivars {uintptr_t sec_count; uintptr_t rca; uintptr_t read_only; uintptr_t high_cap; uintptr_t mode; uintptr_t bus_width; uintptr_t erase_sector; uintptr_t cmd6_time; uintptr_t quirks; char* card_id_string; char* card_sn_string; TYPE_1__ csd; } ;
typedef int device_t ;


 int VAR_0 ;
 uintptr_t VAR_1 ;
 struct mmc_ivars* FUNC_0 (int ) ;
 uintptr_t FUNC_1 (int ) ;
 uintptr_t FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2, device_t VAR_3, int VAR_4, uintptr_t *VAR_5)
{
 struct mmc_ivars *VAR_6 = FUNC_0(VAR_3);

 switch (VAR_4) {
 default:
  return (VAR_0);
 case 129:
  *VAR_5 = VAR_6->csd.spec_vers;
  break;
 case 138:
  *VAR_5 = VAR_6->csd.dsr_imp;
  break;
 case 134:
  *VAR_5 = VAR_6->sec_count;
  break;
 case 132:
  *VAR_5 = VAR_6->rca;
  break;
 case 130:
  *VAR_5 = VAR_1;
  break;
 case 128:
  *VAR_5 = FUNC_1(VAR_2);
  break;
 case 131:
  *VAR_5 = VAR_6->read_only;
  break;
 case 136:
  *VAR_5 = VAR_6->high_cap;
  break;
 case 140:
  *VAR_5 = VAR_6->mode;
  break;
 case 143:
  *VAR_5 = VAR_6->bus_width;
  break;
 case 137:
  *VAR_5 = VAR_6->erase_sector;
  break;
 case 135:
  *VAR_5 = FUNC_2(VAR_2);
  break;
 case 139:
  *VAR_5 = VAR_6->cmd6_time;
  break;
 case 133:
  *VAR_5 = VAR_6->quirks;
  break;
 case 142:
  *(char **)VAR_5 = VAR_6->card_id_string;
  break;
 case 141:
  *(char **)VAR_5 = VAR_6->card_sn_string;
  break;
 }
 return (0);
}
