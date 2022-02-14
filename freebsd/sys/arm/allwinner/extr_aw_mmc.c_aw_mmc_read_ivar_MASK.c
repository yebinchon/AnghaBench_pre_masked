
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bus_mode; int bus_width; int chip_select; int clock; int power_mode; int vdd; int vccq; int timing; } ;
struct TYPE_5__ {int f_min; int f_max; int host_ocr; int mode; int ocr; int caps; TYPE_1__ ios; } ;
struct aw_mmc_softc {TYPE_3__* aw_mmc_conf; TYPE_2__ aw_host; } ;
typedef int device_t ;
struct TYPE_6__ {int dma_xferlen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct aw_mmc_softc* FUNC_0 (int ) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_1(device_t VAR_4, device_t VAR_5, int VAR_6,
    uintptr_t *VAR_7)
{
 struct aw_mmc_softc *VAR_8;

 VAR_8 = FUNC_0(VAR_4);
 switch (VAR_6) {
 default:
  return (VAR_1);
 case 143:
  *(int *)VAR_7 = VAR_8->aw_host.ios.bus_mode;
  break;
 case 142:
  *(int *)VAR_7 = VAR_8->aw_host.ios.bus_width;
  break;
 case 140:
  *(int *)VAR_7 = VAR_8->aw_host.ios.chip_select;
  break;
 case 139:
  *(int *)VAR_7 = VAR_8->aw_host.ios.clock;
  break;
 case 137:
  *(int *)VAR_7 = VAR_8->aw_host.f_min;
  break;
 case 138:
  *(int *)VAR_7 = VAR_8->aw_host.f_max;
  break;
 case 136:
  *(int *)VAR_7 = VAR_8->aw_host.host_ocr;
  break;
 case 134:
  *(int *)VAR_7 = VAR_8->aw_host.mode;
  break;
 case 133:
  *(int *)VAR_7 = VAR_8->aw_host.ocr;
  break;
 case 132:
  *(int *)VAR_7 = VAR_8->aw_host.ios.power_mode;
  break;
 case 128:
  *(int *)VAR_7 = VAR_8->aw_host.ios.vdd;
  break;
 case 129:
  *(int *)VAR_7 = VAR_8->aw_host.ios.vccq;
  break;
 case 141:
  *(int *)VAR_7 = VAR_8->aw_host.caps;
  break;
 case 130:
  *(int *)VAR_7 = VAR_8->aw_host.ios.timing;
  break;
 case 135:
  *(int *)VAR_7 = (VAR_8->aw_mmc_conf->dma_xferlen *
      VAR_0) / VAR_2;
  break;
 case 131:
  *(int *)VAR_7 = VAR_3;
  break;
 }

 return (0);
}
