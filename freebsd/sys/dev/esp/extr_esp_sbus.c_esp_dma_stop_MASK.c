
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncr53c9x_softc {int dummy; } ;
struct esp_softc {int sc_dma; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void
FUNC_2(struct ncr53c9x_softc *VAR_1)
{
 struct esp_softc *VAR_2 = (struct esp_softc *)VAR_1;

 FUNC_1(VAR_2->sc_dma, FUNC_0(VAR_2->sc_dma) & ~VAR_0);
}
