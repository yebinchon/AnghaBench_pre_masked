
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_softc {unsigned int txq_count; int * txq; } ;
struct ifnet {struct sfxge_softc* if_softc; } ;


 int FUNC_0 (int ) ;

void
FUNC_1(struct ifnet *VAR_0)
{
 struct sfxge_softc *VAR_1;
 unsigned int VAR_2;

 VAR_1 = VAR_0->if_softc;

 for (VAR_2 = 0; VAR_2 < VAR_1->txq_count; VAR_2++)
  FUNC_0(VAR_1->txq[VAR_2]);
}
