
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfe_tx_ring {int * tx_desc_tag; int * desc32; int * desc64; int * tx_desc_map; int * tx_data_tag; struct nfe_tx_data* data; } ;
struct nfe_tx_data {int * tx_data_map; int * m; } ;
struct nfe_softc {int nfe_flags; } ;
struct nfe_desc64 {int dummy; } ;
struct nfe_desc32 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,void*,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct nfe_softc *VAR_3, struct nfe_tx_ring *VAR_4)
{
 struct nfe_tx_data *VAR_5;
 void *VAR_6;
 int VAR_7, VAR_8;

 if (VAR_3->nfe_flags & VAR_1) {
  VAR_6 = VAR_4->desc64;
  VAR_8 = sizeof (struct nfe_desc64);
 } else {
  VAR_6 = VAR_4->desc32;
  VAR_8 = sizeof (struct nfe_desc32);
 }

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_5 = &VAR_4->data[VAR_7];

  if (VAR_5->m != ((void*)0)) {
   FUNC_2(VAR_4->tx_data_tag, VAR_5->tx_data_map,
       VAR_0);
   FUNC_3(VAR_4->tx_data_tag, VAR_5->tx_data_map);
   FUNC_5(VAR_5->m);
   VAR_5->m = ((void*)0);
  }
  if (VAR_5->tx_data_map != ((void*)0)) {
   FUNC_1(VAR_4->tx_data_tag,
       VAR_5->tx_data_map);
   VAR_5->tx_data_map = ((void*)0);
  }
 }

 if (VAR_4->tx_data_tag != ((void*)0)) {
  FUNC_0(VAR_4->tx_data_tag);
  VAR_4->tx_data_tag = ((void*)0);
 }

 if (VAR_6 != ((void*)0)) {
  FUNC_2(VAR_4->tx_desc_tag, VAR_4->tx_desc_map,
      VAR_0);
  FUNC_3(VAR_4->tx_desc_tag, VAR_4->tx_desc_map);
  FUNC_4(VAR_4->tx_desc_tag, VAR_6, VAR_4->tx_desc_map);
  VAR_4->desc64 = ((void*)0);
  VAR_4->desc32 = ((void*)0);
  FUNC_0(VAR_4->tx_desc_tag);
  VAR_4->tx_desc_tag = ((void*)0);
 }
}
