
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwi_tx_ring {int count; int * data_dmat; struct iwi_tx_data* data; int * desc_dmat; int * desc_map; int * desc; } ;
struct iwi_tx_data {int * map; int * ni; int * m; } ;
struct iwi_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (struct iwi_tx_data*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(struct iwi_softc *VAR_2, struct iwi_tx_ring *VAR_3)
{
 struct iwi_tx_data *VAR_4;
 int VAR_5;

 if (VAR_3->desc != ((void*)0)) {
  FUNC_2(VAR_3->desc_dmat, VAR_3->desc_map,
      VAR_0);
  FUNC_3(VAR_3->desc_dmat, VAR_3->desc_map);
  FUNC_4(VAR_3->desc_dmat, VAR_3->desc, VAR_3->desc_map);
 }

 if (VAR_3->desc_dmat != ((void*)0))
  FUNC_0(VAR_3->desc_dmat);

 if (VAR_3->data != ((void*)0)) {
  for (VAR_5 = 0; VAR_5 < VAR_3->count; VAR_5++) {
   VAR_4 = &VAR_3->data[VAR_5];

   if (VAR_4->m != ((void*)0)) {
    FUNC_2(VAR_3->data_dmat, VAR_4->map,
        VAR_0);
    FUNC_3(VAR_3->data_dmat, VAR_4->map);
    FUNC_7(VAR_4->m);
   }

   if (VAR_4->ni != ((void*)0))
    FUNC_6(VAR_4->ni);

   if (VAR_4->map != ((void*)0))
    FUNC_1(VAR_3->data_dmat, VAR_4->map);
  }

  FUNC_5(VAR_3->data, VAR_1);
 }

 if (VAR_3->data_dmat != ((void*)0))
  FUNC_0(VAR_3->data_dmat);
}
