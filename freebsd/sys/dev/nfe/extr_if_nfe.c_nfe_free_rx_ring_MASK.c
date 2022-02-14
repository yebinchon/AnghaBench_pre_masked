
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfe_softc {int nfe_flags; } ;
struct nfe_rx_ring {int * rx_desc_tag; int * desc32; int * desc64; int rx_desc_map; int * rx_data_tag; int * rx_spare_map; struct nfe_rx_data* data; } ;
struct nfe_rx_data {int * m; int * rx_data_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,void*,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct nfe_softc *VAR_2, struct nfe_rx_ring *VAR_3)
{
 struct nfe_rx_data *VAR_4;
 void *VAR_5;
 int VAR_6;

 if (VAR_2->nfe_flags & VAR_0)
  VAR_5 = VAR_3->desc64;
 else
  VAR_5 = VAR_3->desc32;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_4 = &VAR_3->data[VAR_6];
  if (VAR_4->rx_data_map != ((void*)0)) {
   FUNC_1(VAR_3->rx_data_tag,
       VAR_4->rx_data_map);
   VAR_4->rx_data_map = ((void*)0);
  }
  if (VAR_4->m != ((void*)0)) {
   FUNC_4(VAR_4->m);
   VAR_4->m = ((void*)0);
  }
 }
 if (VAR_3->rx_data_tag != ((void*)0)) {
  if (VAR_3->rx_spare_map != ((void*)0)) {
   FUNC_1(VAR_3->rx_data_tag,
       VAR_3->rx_spare_map);
   VAR_3->rx_spare_map = ((void*)0);
  }
  FUNC_0(VAR_3->rx_data_tag);
  VAR_3->rx_data_tag = ((void*)0);
 }

 if (VAR_5 != ((void*)0)) {
  FUNC_2(VAR_3->rx_desc_tag, VAR_3->rx_desc_map);
  FUNC_3(VAR_3->rx_desc_tag, VAR_5, VAR_3->rx_desc_map);
  VAR_3->desc64 = ((void*)0);
  VAR_3->desc32 = ((void*)0);
 }
 if (VAR_3->rx_desc_tag != ((void*)0)) {
  FUNC_0(VAR_3->rx_desc_tag);
  VAR_3->rx_desc_tag = ((void*)0);
 }
}
