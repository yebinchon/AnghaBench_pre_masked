
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioat_softc {int submit_lock; } ;
typedef int bus_dmaengine_t ;


 int FUNC_0 (struct ioat_softc*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct ioat_softc* FUNC_3 (int ) ;

void
FUNC_4(bus_dmaengine_t VAR_0)
{
 struct ioat_softc *VAR_1;

 VAR_1 = FUNC_3(VAR_0);
 FUNC_1(&VAR_1->submit_lock);
 FUNC_0(VAR_1);
 FUNC_2(&VAR_1->submit_lock);
}
