
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct oce_wq {int tx_compl_lock; int tx_lock; int * br; int * tag; TYPE_1__* pckts; int * ring; int txtask; int parent; } ;
struct TYPE_2__ {int * map; } ;
typedef int POCE_SOFTC ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct oce_wq*,int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_8(struct oce_wq *VAR_3)
{
 POCE_SOFTC VAR_4 = (POCE_SOFTC) VAR_3->parent;
 int VAR_5;

 FUNC_7(VAR_2, &VAR_3->txtask);

 if (VAR_3->ring != ((void*)0)) {
  FUNC_6(VAR_4, VAR_3->ring);
  VAR_3->ring = ((void*)0);
 }

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_3->pckts[VAR_5].map != ((void*)0)) {
   FUNC_4(VAR_3->tag, VAR_3->pckts[VAR_5].map);
   FUNC_3(VAR_3->tag, VAR_3->pckts[VAR_5].map);
   VAR_3->pckts[VAR_5].map = ((void*)0);
  }
 }

 if (VAR_3->tag != ((void*)0))
  FUNC_2(VAR_3->tag);
 if (VAR_3->br != ((void*)0))
  FUNC_1(VAR_3->br, VAR_0);

 FUNC_0(&VAR_3->tx_lock);
 FUNC_0(&VAR_3->tx_compl_lock);
 FUNC_5(VAR_3, VAR_0);
}
