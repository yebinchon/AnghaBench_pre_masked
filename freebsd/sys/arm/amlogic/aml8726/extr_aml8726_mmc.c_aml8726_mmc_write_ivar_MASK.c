
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {uintptr_t vccq; uintptr_t timing; } ;
struct TYPE_8__ {TYPE_3__ ios; } ;
struct TYPE_5__ {uintptr_t bus_mode; uintptr_t bus_width; uintptr_t chip_select; uintptr_t clock; uintptr_t power_mode; uintptr_t vdd; } ;
struct TYPE_6__ {uintptr_t mode; uintptr_t ocr; TYPE_1__ ios; } ;
struct aml8726_mmc_softc {TYPE_4__ sc_host; TYPE_2__ host; } ;
typedef int device_t ;


 int VAR_0 ;
 struct aml8726_mmc_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_1, device_t VAR_2,
    int VAR_3, uintptr_t VAR_4)
{
 struct aml8726_mmc_softc *VAR_5 = FUNC_0(VAR_1);

 switch (VAR_3) {
 case 142:
  VAR_5->host.ios.bus_mode = VAR_4;
  break;
 case 141:
  VAR_5->host.ios.bus_width = VAR_4;
  break;
 case 139:
  VAR_5->host.ios.chip_select = VAR_4;
  break;
 case 138:
  VAR_5->host.ios.clock = VAR_4;
  break;
 case 133:
  VAR_5->host.mode = VAR_4;
  break;
 case 132:
  VAR_5->host.ocr = VAR_4;
  break;
 case 131:
  VAR_5->host.ios.power_mode = VAR_4;
  break;
 case 128:
  VAR_5->host.ios.vdd = VAR_4;
  break;
 case 129:
  VAR_5->sc_host.ios.vccq = VAR_4;
  break;
 case 130:
  VAR_5->sc_host.ios.timing = VAR_4;
  break;

 case 140:
 case 135:
 case 136:
 case 137:
 case 134:
 default:
  return (VAR_0);
 }

 return (0);
}
