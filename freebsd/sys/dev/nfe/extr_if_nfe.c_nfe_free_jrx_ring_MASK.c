
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfe_softc {int nfe_flags; } ;
struct nfe_rx_data {int * m; int * rx_data_map; } ;
struct nfe_jrx_ring {int * jrx_desc_tag; int * jdesc32; int * jdesc64; int jrx_desc_map; int * jrx_data_tag; int * jrx_spare_map; struct nfe_rx_data* jdata; } ;
struct nfe_desc64 {int dummy; } ;
struct nfe_desc32 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,void*,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct nfe_softc *VAR_3, struct nfe_jrx_ring *VAR_4)
{
 struct nfe_rx_data *VAR_5;
 void *VAR_6;
 int VAR_7, VAR_8;

 if ((VAR_3->nfe_flags & VAR_2) == 0)
  return;

 if (VAR_3->nfe_flags & VAR_0) {
  VAR_6 = VAR_4->jdesc64;
  VAR_8 = sizeof (struct nfe_desc64);
 } else {
  VAR_6 = VAR_4->jdesc32;
  VAR_8 = sizeof (struct nfe_desc32);
 }

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_5 = &VAR_4->jdata[VAR_7];
  if (VAR_5->rx_data_map != ((void*)0)) {
   FUNC_1(VAR_4->jrx_data_tag,
       VAR_5->rx_data_map);
   VAR_5->rx_data_map = ((void*)0);
  }
  if (VAR_5->m != ((void*)0)) {
   FUNC_4(VAR_5->m);
   VAR_5->m = ((void*)0);
  }
 }
 if (VAR_4->jrx_data_tag != ((void*)0)) {
  if (VAR_4->jrx_spare_map != ((void*)0)) {
   FUNC_1(VAR_4->jrx_data_tag,
       VAR_4->jrx_spare_map);
   VAR_4->jrx_spare_map = ((void*)0);
  }
  FUNC_0(VAR_4->jrx_data_tag);
  VAR_4->jrx_data_tag = ((void*)0);
 }

 if (VAR_6 != ((void*)0)) {
  FUNC_2(VAR_4->jrx_desc_tag, VAR_4->jrx_desc_map);
  FUNC_3(VAR_4->jrx_desc_tag, VAR_6, VAR_4->jrx_desc_map);
  VAR_4->jdesc64 = ((void*)0);
  VAR_4->jdesc32 = ((void*)0);
 }

 if (VAR_4->jrx_desc_tag != ((void*)0)) {
  FUNC_0(VAR_4->jrx_desc_tag);
  VAR_4->jrx_desc_tag = ((void*)0);
 }
}
