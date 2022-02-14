
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2860_softc {int dummy; } ;
struct rt2860_rx_ring {int * data_dmat; struct rt2860_rx_data* data; int * desc_dmat; int * desc_map; int * rxd; } ;
struct rt2860_rx_data {int * map; int * m; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int *) ;

void
FUNC_6(struct rt2860_softc *VAR_3, struct rt2860_rx_ring *VAR_4)
{
 int VAR_5;

 if (VAR_4->rxd != ((void*)0)) {
  FUNC_2(VAR_4->desc_dmat, VAR_4->desc_map,
      VAR_1);
  FUNC_3(VAR_4->desc_dmat, VAR_4->desc_map);
  FUNC_4(VAR_4->desc_dmat, VAR_4->rxd, VAR_4->desc_map);
 }
 if (VAR_4->desc_dmat != ((void*)0))
  FUNC_0(VAR_4->desc_dmat);

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  struct rt2860_rx_data *VAR_6 = &VAR_4->data[VAR_5];

  if (VAR_6->m != ((void*)0)) {
   FUNC_2(VAR_4->data_dmat, VAR_6->map,
       VAR_0);
   FUNC_3(VAR_4->data_dmat, VAR_6->map);
   FUNC_5(VAR_6->m);
  }
  if (VAR_6->map != ((void*)0))
   FUNC_1(VAR_4->data_dmat, VAR_6->map);
 }
 if (VAR_4->data_dmat != ((void*)0))
  FUNC_0(VAR_4->data_dmat);
}
