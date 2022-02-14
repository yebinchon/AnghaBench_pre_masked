
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bus_mode; int bus_width; int chip_select; int clock; int power_mode; int vdd; uintptr_t vccq; int timing; } ;
struct TYPE_4__ {int f_min; int f_max; int host_ocr; int mode; int ocr; int caps; TYPE_1__ ios; } ;
struct aml8726_sdxc_softc {TYPE_2__ host; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct aml8726_sdxc_softc* FUNC_0 (int ) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_1(device_t VAR_4, device_t VAR_5,
    int VAR_6, uintptr_t *VAR_7)
{
 struct aml8726_sdxc_softc *VAR_8 = FUNC_0(VAR_4);

 switch (VAR_6) {
 case 144:
  *(int *)VAR_7 = VAR_8->host.ios.bus_mode;
  break;
 case 143:
  *(int *)VAR_7 = VAR_8->host.ios.bus_width;
  break;
 case 141:
  *(int *)VAR_7 = VAR_8->host.ios.chip_select;
  break;
 case 140:
  *(int *)VAR_7 = VAR_8->host.ios.clock;
  break;
 case 138:
  *(int *)VAR_7 = VAR_8->host.f_min;
  break;
 case 139:
  *(int *)VAR_7 = VAR_8->host.f_max;
  break;
 case 137:
  *(int *)VAR_7 = VAR_8->host.host_ocr;
  break;
 case 134:
  *(int *)VAR_7 = VAR_8->host.mode;
  break;
 case 133:
  *(int *)VAR_7 = VAR_8->host.ocr;
  break;
 case 132:
  *(int *)VAR_7 = VAR_8->host.ios.power_mode;
  break;
 case 131:
  *(int *)VAR_7 = VAR_3;
  break;
 case 128:
  *(int *)VAR_7 = VAR_8->host.ios.vdd;
  break;
 case 129:
  *VAR_7 = VAR_8->host.ios.vccq;
  break;
 case 142:
  *(int *)VAR_7 = VAR_8->host.caps;
  break;
 case 130:
  *(int *)VAR_7 = VAR_8->host.ios.timing;
  break;
 case 135:
  *(int *)VAR_7 = VAR_0 / VAR_2;
  break;
 case 136:
  *(int *)VAR_7 = 1000000;
  break;
 default:
  return (VAR_1);
 }

 return (0);
}
