
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioat_softc {size_t max_xfer_size; } ;
typedef int bus_dmaengine_t ;


 struct ioat_softc* FUNC_0 (int ) ;

size_t
FUNC_1(bus_dmaengine_t VAR_0)
{
 struct ioat_softc *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 return (VAR_1->max_xfer_size);
}
