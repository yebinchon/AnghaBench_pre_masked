
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int dnode_t ;
struct TYPE_4__ {int tx_txg; } ;
typedef TYPE_1__ dmu_tx_t ;
typedef int dmu_tx_hold_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int * FUNC_2 (TYPE_1__*,int *,int ,int,uintptr_t) ;
 int FUNC_3 (int *,char const*) ;

void
FUNC_4(dmu_tx_t *VAR_1, dnode_t *VAR_2, int VAR_3, const char *VAR_4)
{
 dmu_tx_hold_t *VAR_5;

 FUNC_1(VAR_1->tx_txg);
 FUNC_0(VAR_2 != ((void*)0));

 VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_0, VAR_3, (uintptr_t)VAR_4);
 if (VAR_5 != ((void*)0))
  FUNC_3(VAR_5, VAR_4);
}
