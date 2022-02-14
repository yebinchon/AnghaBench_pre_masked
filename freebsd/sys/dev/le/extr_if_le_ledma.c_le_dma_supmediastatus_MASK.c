
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lsi64854_softc {int dummy; } ;
struct le_dma_softc {struct lsi64854_softc* sc_dma; } ;
struct lance_softc {int dummy; } ;
struct ifmediareq {void* ifm_active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct lsi64854_softc*) ;

__attribute__((used)) static void
FUNC_2(struct lance_softc *VAR_4, struct ifmediareq *VAR_5)
{
 struct lsi64854_softc *VAR_6 = ((struct le_dma_softc *)VAR_4)->sc_dma;




 if (FUNC_1(VAR_6) & VAR_0)
  VAR_5->ifm_active = FUNC_0(VAR_3, VAR_2, 0, 0);
 else
  VAR_5->ifm_active = FUNC_0(VAR_3, VAR_1, 0, 0);
}
