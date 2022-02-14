
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2560_softc {int dummy; } ;
struct rt2560_rx_ring {int count; int * data_dmat; struct rt2560_rx_data* data; int * desc_dmat; int * desc_map; int * desc; } ;
struct rt2560_rx_data {int * map; int * m; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (struct rt2560_rx_data*,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct rt2560_softc *VAR_3, struct rt2560_rx_ring *VAR_4)
{
 struct rt2560_rx_data *VAR_5;
 int VAR_6;

 if (VAR_4->desc != ((void*)0)) {
  FUNC_2(VAR_4->desc_dmat, VAR_4->desc_map,
      VAR_1);
  FUNC_3(VAR_4->desc_dmat, VAR_4->desc_map);
  FUNC_4(VAR_4->desc_dmat, VAR_4->desc, VAR_4->desc_map);
 }

 if (VAR_4->desc_dmat != ((void*)0))
  FUNC_0(VAR_4->desc_dmat);

 if (VAR_4->data != ((void*)0)) {
  for (VAR_6 = 0; VAR_6 < VAR_4->count; VAR_6++) {
   VAR_5 = &VAR_4->data[VAR_6];

   if (VAR_5->m != ((void*)0)) {
    FUNC_2(VAR_4->data_dmat, VAR_5->map,
        VAR_0);
    FUNC_3(VAR_4->data_dmat, VAR_5->map);
    FUNC_6(VAR_5->m);
   }

   if (VAR_5->map != ((void*)0))
    FUNC_1(VAR_4->data_dmat, VAR_5->map);
  }

  FUNC_5(VAR_4->data, VAR_2);
 }

 if (VAR_4->data_dmat != ((void*)0))
  FUNC_0(VAR_4->data_dmat);
}
