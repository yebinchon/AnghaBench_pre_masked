
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwi_softc {int dummy; } ;
struct iwi_rx_ring {int count; int * data_dmat; struct iwi_rx_data* data; } ;
struct iwi_rx_data {int * map; int * m; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct iwi_rx_data*,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct iwi_softc *VAR_2, struct iwi_rx_ring *VAR_3)
{
 struct iwi_rx_data *VAR_4;
 int VAR_5;

 if (VAR_3->data != ((void*)0)) {
  for (VAR_5 = 0; VAR_5 < VAR_3->count; VAR_5++) {
   VAR_4 = &VAR_3->data[VAR_5];

   if (VAR_4->m != ((void*)0)) {
    FUNC_2(VAR_3->data_dmat, VAR_4->map,
        VAR_0);
    FUNC_3(VAR_3->data_dmat, VAR_4->map);
    FUNC_5(VAR_4->m);
   }

   if (VAR_4->map != ((void*)0))
    FUNC_1(VAR_3->data_dmat, VAR_4->map);
  }

  FUNC_4(VAR_3->data, VAR_1);
 }

 if (VAR_3->data_dmat != ((void*)0))
  FUNC_0(VAR_3->data_dmat);
}
