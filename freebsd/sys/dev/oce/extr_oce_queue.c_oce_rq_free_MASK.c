
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct oce_rq {int rx_lock; int * tag; TYPE_1__* pckts; int * ring; int parent; } ;
struct TYPE_2__ {int * mbuf; int * map; } ;
typedef int POCE_SOFTC ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct oce_rq*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void
FUNC_7(struct oce_rq *VAR_2)
{
 POCE_SOFTC VAR_3 = (POCE_SOFTC) VAR_2->parent;
 int VAR_4 = 0 ;

 if (VAR_2->ring != ((void*)0)) {
  FUNC_6(VAR_3, VAR_2->ring);
  VAR_2->ring = ((void*)0);
 }
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (VAR_2->pckts[VAR_4].map != ((void*)0)) {
   FUNC_3(VAR_2->tag, VAR_2->pckts[VAR_4].map);
   FUNC_2(VAR_2->tag, VAR_2->pckts[VAR_4].map);
   VAR_2->pckts[VAR_4].map = ((void*)0);
  }
  if (VAR_2->pckts[VAR_4].mbuf) {
   FUNC_5(VAR_2->pckts[VAR_4].mbuf);
   VAR_2->pckts[VAR_4].mbuf = ((void*)0);
  }
 }

 if (VAR_2->tag != ((void*)0))
  FUNC_1(VAR_2->tag);

 FUNC_0(&VAR_2->rx_lock);
 FUNC_4(VAR_2, VAR_0);
}
