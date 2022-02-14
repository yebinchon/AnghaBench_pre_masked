
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {uintptr_t bus_mode; uintptr_t bus_width; uintptr_t chip_select; uintptr_t clock; uintptr_t power_mode; uintptr_t vdd; uintptr_t vccq; uintptr_t timing; } ;
struct TYPE_4__ {uintptr_t f_min; uintptr_t f_max; uintptr_t host_ocr; uintptr_t mode; uintptr_t ocr; uintptr_t caps; TYPE_1__ ios; } ;
struct sdhci_slot {int opt; int retune_req; int retune_mode; TYPE_2__ host; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct sdhci_slot* FUNC_0 (int ) ;
 uintptr_t VAR_7 ;
 uintptr_t VAR_8 ;
 uintptr_t VAR_9 ;

int
FUNC_1(device_t VAR_10, device_t VAR_11, int VAR_12,
    uintptr_t *VAR_13)
{
 const struct sdhci_slot *VAR_14 = FUNC_0(VAR_11);

 switch (VAR_12) {
 default:
  return (VAR_0);
 case 144:
  *VAR_13 = VAR_14->host.ios.bus_mode;
  break;
 case 143:
  *VAR_13 = VAR_14->host.ios.bus_width;
  break;
 case 141:
  *VAR_13 = VAR_14->host.ios.chip_select;
  break;
 case 140:
  *VAR_13 = VAR_14->host.ios.clock;
  break;
 case 138:
  *VAR_13 = VAR_14->host.f_min;
  break;
 case 139:
  *VAR_13 = VAR_14->host.f_max;
  break;
 case 137:
  *VAR_13 = VAR_14->host.host_ocr;
  break;
 case 134:
  *VAR_13 = VAR_14->host.mode;
  break;
 case 133:
  *VAR_13 = VAR_14->host.ocr;
  break;
 case 132:
  *VAR_13 = VAR_14->host.ios.power_mode;
  break;
 case 128:
  *VAR_13 = VAR_14->host.ios.vdd;
  break;
 case 131:
  if (VAR_14->opt & VAR_6) {
   if (VAR_14->retune_req & VAR_5) {
    *VAR_13 = VAR_9;
    break;
   }
   if (VAR_14->retune_req & VAR_4) {
    *VAR_13 = VAR_8;
    break;
   }
  }
  *VAR_13 = VAR_7;
  break;
 case 129:
  *VAR_13 = VAR_14->host.ios.vccq;
  break;
 case 142:
  *VAR_13 = VAR_14->host.caps;
  break;
 case 130:
  *VAR_13 = VAR_14->host.ios.timing;
  break;
 case 135:




  if (VAR_14->opt & VAR_6 &&
      (VAR_14->retune_mode == VAR_2 ||
      VAR_14->retune_mode == VAR_3)) {
   *VAR_13 = 4 * 1024 * 1024 / VAR_1;
   break;
  }
  *VAR_13 = 65535;
  break;
 case 136:



  *VAR_13 = 1000000;
  break;
 }
 return (0);
}
