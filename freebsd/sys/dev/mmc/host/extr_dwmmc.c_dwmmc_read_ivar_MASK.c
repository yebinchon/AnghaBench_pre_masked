
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bus_mode; int bus_width; int chip_select; int clock; int power_mode; int vdd; int vccq; int timing; } ;
struct TYPE_4__ {int f_min; int f_max; int host_ocr; int mode; int ocr; int caps; TYPE_1__ ios; } ;
struct dwmmc_softc {int desc_count; TYPE_2__ host; } ;
typedef int device_t ;


 int VAR_0 ;
 struct dwmmc_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_1, device_t VAR_2, int VAR_3, uintptr_t *VAR_4)
{
 struct dwmmc_softc *VAR_5;

 VAR_5 = FUNC_0(VAR_1);

 switch (VAR_3) {
 default:
  return (VAR_0);
 case 142:
  *(int *)VAR_4 = VAR_5->host.ios.bus_mode;
  break;
 case 141:
  *(int *)VAR_4 = VAR_5->host.ios.bus_width;
  break;
 case 139:
  *(int *)VAR_4 = VAR_5->host.ios.chip_select;
  break;
 case 138:
  *(int *)VAR_4 = VAR_5->host.ios.clock;
  break;
 case 136:
  *(int *)VAR_4 = VAR_5->host.f_min;
  break;
 case 137:
  *(int *)VAR_4 = VAR_5->host.f_max;
  break;
 case 135:
  *(int *)VAR_4 = VAR_5->host.host_ocr;
  break;
 case 133:
  *(int *)VAR_4 = VAR_5->host.mode;
  break;
 case 132:
  *(int *)VAR_4 = VAR_5->host.ocr;
  break;
 case 131:
  *(int *)VAR_4 = VAR_5->host.ios.power_mode;
  break;
 case 128:
  *(int *)VAR_4 = VAR_5->host.ios.vdd;
  break;
 case 129:
  *(int *)VAR_4 = VAR_5->host.ios.vccq;
  break;
 case 140:
  *(int *)VAR_4 = VAR_5->host.caps;
  break;
 case 134:
  *(int *)VAR_4 = VAR_5->desc_count;
  break;
 case 130:
  *(int *)VAR_4 = VAR_5->host.ios.timing;
  break;
 }
 return (0);
}
