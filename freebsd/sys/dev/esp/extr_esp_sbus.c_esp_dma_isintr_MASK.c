
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncr53c9x_softc {int dummy; } ;
struct esp_softc {int sc_dma; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct ncr53c9x_softc *VAR_0)
{
 struct esp_softc *VAR_1 = (struct esp_softc *)VAR_0;

 return (FUNC_0(VAR_1->sc_dma));
}
