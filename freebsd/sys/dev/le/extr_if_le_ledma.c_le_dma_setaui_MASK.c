
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lsi64854_softc {int dummy; } ;
struct le_dma_softc {struct lsi64854_softc* sc_dma; } ;
struct lance_softc {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct lsi64854_softc*) ;
 int FUNC_2 (struct lsi64854_softc*,int) ;

__attribute__((used)) static void
FUNC_3(struct lance_softc *VAR_1)
{
 struct lsi64854_softc *VAR_2 = ((struct le_dma_softc *)VAR_1)->sc_dma;

 FUNC_2(VAR_2, FUNC_1(VAR_2) & ~VAR_0);
 FUNC_0(20000);
}
