
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct ifnet {TYPE_2__* if_softc; } ;
struct TYPE_4__ {int nwqs; TYPE_1__** wq; } ;
struct TYPE_3__ {int br; } ;
typedef TYPE_2__* POCE_SOFTC ;


 struct mbuf* FUNC_0 (int ) ;
 int FUNC_1 (struct ifnet*) ;
 int FUNC_2 (struct mbuf*) ;

__attribute__((used)) static void
FUNC_3(struct ifnet *VAR_0)
{
 POCE_SOFTC VAR_1 = VAR_0->if_softc;
 struct mbuf *VAR_2;
 int VAR_3 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_1->nwqs; VAR_3++) {
  while ((VAR_2 = FUNC_0(VAR_1->wq[VAR_3]->br)) != ((void*)0))
   FUNC_2(VAR_2);
 }
 FUNC_1(VAR_0);
}
