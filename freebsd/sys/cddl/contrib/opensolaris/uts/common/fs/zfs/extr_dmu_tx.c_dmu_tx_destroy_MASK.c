
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int dnode_t ;
struct TYPE_8__ {int tx_holds; int tx_callbacks; int txh_memory_tohold; int txh_space_towrite; int * txh_dnode; } ;
typedef TYPE_1__ dmu_tx_t ;
typedef TYPE_1__ dmu_tx_hold_t ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static void
FUNC_7(dmu_tx_t *VAR_0)
{
 dmu_tx_hold_t *VAR_1;

 while ((VAR_1 = FUNC_3(&VAR_0->tx_holds)) != ((void*)0)) {
  dnode_t *VAR_2 = VAR_1->txh_dnode;

  FUNC_4(&VAR_0->tx_holds, VAR_1);
  FUNC_6(&VAR_1->txh_space_towrite,
      FUNC_5(&VAR_1->txh_space_towrite));
  FUNC_6(&VAR_1->txh_memory_tohold,
      FUNC_5(&VAR_1->txh_memory_tohold));
  FUNC_1(VAR_1, sizeof (dmu_tx_hold_t));
  if (VAR_2 != ((void*)0))
   FUNC_0(VAR_2, VAR_0);
 }

 FUNC_2(&VAR_0->tx_callbacks);
 FUNC_2(&VAR_0->tx_holds);
 FUNC_1(VAR_0, sizeof (dmu_tx_t));
}
