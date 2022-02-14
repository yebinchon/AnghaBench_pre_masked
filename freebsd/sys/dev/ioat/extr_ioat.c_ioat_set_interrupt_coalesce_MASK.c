
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct ioat_softc {scalar_t__ intrdelay_max; int cached_intrdelay; int intrdelay_supported; } ;
typedef int bus_dmaengine_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ioat_softc*,int ) ;
 int FUNC_1 (struct ioat_softc*,int ,scalar_t__) ;
 struct ioat_softc* FUNC_2 (int ) ;

int
FUNC_3(bus_dmaengine_t VAR_4, uint16_t VAR_5)
{
 struct ioat_softc *VAR_6;

 VAR_6 = FUNC_2(VAR_4);
 if (!VAR_6->intrdelay_supported)
  return (VAR_0);
 if (VAR_5 > VAR_6->intrdelay_max)
  return (VAR_1);

 FUNC_1(VAR_6, VAR_2, VAR_5);
 VAR_6->cached_intrdelay =
     FUNC_0(VAR_6, VAR_2) & VAR_3;
 return (0);
}
