
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lsi64854_softc {int dummy; } ;
struct le_dma_softc {struct lsi64854_softc* sc_dma; } ;
struct lance_softc {int dummy; } ;


 int FUNC_0 (struct lsi64854_softc*) ;

__attribute__((used)) static int
FUNC_1(struct lance_softc *VAR_0)
{
 struct le_dma_softc *VAR_1 = (struct le_dma_softc *)VAR_0;
 struct lsi64854_softc *VAR_2 = VAR_1->sc_dma;

 return (FUNC_0(VAR_2));
}
