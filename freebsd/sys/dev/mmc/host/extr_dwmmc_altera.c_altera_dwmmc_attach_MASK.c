
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwmmc_softc {int bus_hz; int use_pio; int hwtype; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 struct dwmmc_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,char*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1)
{
 struct dwmmc_softc *VAR_2;
 phandle_t VAR_3;

 VAR_2 = FUNC_1(VAR_1);
 VAR_2->hwtype = VAR_0;

 VAR_3 = FUNC_0("/");

 if (FUNC_3(VAR_3, "altr,socfpga-stratix10")) {
  VAR_2->bus_hz = 24000000;
  VAR_2->use_pio = 1;
 }

 return (FUNC_2(VAR_1));
}
