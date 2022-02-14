
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_ios {int bus_width; scalar_t__ clock; } ;
struct TYPE_2__ {struct mmc_ios ios; } ;
struct jz4780_mmc_softc {int sc_cmdat; TYPE_1__ sc_host; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 struct jz4780_mmc_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct jz4780_mmc_softc*,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_4, device_t VAR_5)
{
 struct jz4780_mmc_softc *VAR_6;
 struct mmc_ios *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_0(VAR_4);
 VAR_7 = &VAR_6->sc_host.ios;
 if (VAR_7->clock) {

  VAR_8 = FUNC_1(VAR_6, VAR_7->clock);
  if (VAR_8 != 0)
   return (VAR_8);
 }


 switch (VAR_7->bus_width) {
 case 130:
  VAR_6->sc_cmdat &= ~(VAR_3);
  VAR_6->sc_cmdat |= VAR_0;
  break;
 case 129:
  VAR_6->sc_cmdat &= ~(VAR_3);
  VAR_6->sc_cmdat |= VAR_1;
  break;
 case 128:
  VAR_6->sc_cmdat &= ~(VAR_3);
  VAR_6->sc_cmdat |= VAR_2;
  break;
 }
 return (0);
}
