
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioat_softc {int dummy; } ;
typedef int bus_dmaengine_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ioat_softc*,unsigned int,int) ;
 struct ioat_softc* FUNC_3 (int ) ;

int
FUNC_4(bus_dmaengine_t VAR_0, unsigned VAR_1, int VAR_2)
{
 struct ioat_softc *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_3(VAR_0);
 FUNC_0(VAR_0);

 VAR_4 = FUNC_2(VAR_3, VAR_1, VAR_2);
 if (VAR_4 != 0)
  FUNC_1(VAR_0);
 return (VAR_4);
}
