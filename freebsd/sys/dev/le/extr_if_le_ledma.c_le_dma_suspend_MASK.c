
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lsc; } ;
struct le_dma_softc {TYPE_1__ sc_am7990; } ;
typedef int device_t ;


 struct le_dma_softc* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0)
{
 struct le_dma_softc *VAR_1;

 VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->sc_am7990.lsc);

 return (0);
}
