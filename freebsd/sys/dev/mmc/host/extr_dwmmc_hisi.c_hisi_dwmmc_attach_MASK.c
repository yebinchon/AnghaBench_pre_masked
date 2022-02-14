
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwmmc_softc {int bus_hz; int use_pio; int desc_count; int hwtype; } ;
typedef int device_t ;


 int VAR_0 ;
 struct dwmmc_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1)
{
 struct dwmmc_softc *VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 VAR_2->hwtype = VAR_0;

 VAR_2->bus_hz = 24000000;





 VAR_2->use_pio = 1;
 VAR_2->desc_count = 1;

 return (FUNC_1(VAR_1));
}
