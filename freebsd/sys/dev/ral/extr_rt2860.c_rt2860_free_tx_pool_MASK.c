
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2860_tx_data {int map; } ;
struct rt2860_softc {int data_pool; int * txwi_dmat; int txwi_map; int * txwi_vaddr; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct rt2860_tx_data* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int *,int ) ;
 int VAR_1 ;

void
FUNC_8(struct rt2860_softc *VAR_2)
{
 if (VAR_2->txwi_vaddr != ((void*)0)) {
  FUNC_5(VAR_2->txwi_dmat, VAR_2->txwi_map,
      VAR_0);
  FUNC_6(VAR_2->txwi_dmat, VAR_2->txwi_map);
  FUNC_7(VAR_2->txwi_dmat, VAR_2->txwi_vaddr, VAR_2->txwi_map);
 }
 if (VAR_2->txwi_dmat != ((void*)0))
  FUNC_3(VAR_2->txwi_dmat);

 while (!FUNC_0(&VAR_2->data_pool)) {
  struct rt2860_tx_data *VAR_3;
  VAR_3 = FUNC_1(&VAR_2->data_pool);
  FUNC_4(VAR_2->txwi_dmat, VAR_3->map);
  FUNC_2(&VAR_2->data_pool, VAR_1);
 }
}
