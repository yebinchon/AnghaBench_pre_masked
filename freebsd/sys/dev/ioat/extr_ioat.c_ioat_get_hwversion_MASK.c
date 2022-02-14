
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioat_softc {int version; } ;
typedef int bus_dmaengine_t ;


 struct ioat_softc* FUNC_0 (int ) ;

int
FUNC_1(bus_dmaengine_t VAR_0)
{
 struct ioat_softc *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 return (VAR_1->version);
}
