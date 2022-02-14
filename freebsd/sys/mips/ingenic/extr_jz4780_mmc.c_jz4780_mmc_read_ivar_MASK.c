
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bus_mode; int bus_width; int chip_select; int clock; int power_mode; int vdd; uintptr_t vccq; int timing; } ;
struct TYPE_4__ {int f_min; int f_max; int host_ocr; int mode; int ocr; int caps; TYPE_1__ ios; } ;
struct jz4780_mmc_softc {TYPE_2__ sc_host; } ;
typedef int device_t ;


 int VAR_0 ;
 struct jz4780_mmc_softc* FUNC_0 (int ) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1(device_t VAR_2, device_t VAR_3, int VAR_4,
    uintptr_t *VAR_5)
{
 struct jz4780_mmc_softc *VAR_6;

 VAR_6 = FUNC_0(VAR_2);
 switch (VAR_4) {
 default:
  return (VAR_0);
 case 144:
  *(int *)VAR_5 = VAR_6->sc_host.ios.bus_mode;
  break;
 case 143:
  *(int *)VAR_5 = VAR_6->sc_host.ios.bus_width;
  break;
 case 141:
  *(int *)VAR_5 = VAR_6->sc_host.ios.chip_select;
  break;
 case 140:
  *(int *)VAR_5 = VAR_6->sc_host.ios.clock;
  break;
 case 138:
  *(int *)VAR_5 = VAR_6->sc_host.f_min;
  break;
 case 139:
  *(int *)VAR_5 = VAR_6->sc_host.f_max;
  break;
 case 137:
  *(int *)VAR_5 = VAR_6->sc_host.host_ocr;
  break;
 case 134:
  *(int *)VAR_5 = VAR_6->sc_host.mode;
  break;
 case 133:
  *(int *)VAR_5 = VAR_6->sc_host.ocr;
  break;
 case 132:
  *(int *)VAR_5 = VAR_6->sc_host.ios.power_mode;
  break;
 case 131:
  *(int *)VAR_5 = VAR_1;
  break;
 case 128:
  *(int *)VAR_5 = VAR_6->sc_host.ios.vdd;
  break;
 case 129:
  *VAR_5 = VAR_6->sc_host.ios.vccq;
  break;
 case 142:
  *(int *)VAR_5 = VAR_6->sc_host.caps;
  break;
 case 130:
  *(int *)VAR_5 = VAR_6->sc_host.ios.timing;
  break;
 case 135:
  *(int *)VAR_5 = 65535;
  break;
 case 136:
  *(int *)VAR_5 = 1000000;
  break;
 }

 return (0);
}
