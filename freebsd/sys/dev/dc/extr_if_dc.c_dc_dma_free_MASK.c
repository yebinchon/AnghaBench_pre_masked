
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * dc_sbuf; int ** dc_tx_map; int ** dc_rx_map; } ;
struct TYPE_3__ {scalar_t__ dc_rx_list_paddr; scalar_t__ dc_tx_list_paddr; int * dc_tx_list; int * dc_rx_list; } ;
struct dc_softc {scalar_t__ dc_saddr; int * dc_stag; int dc_smap; TYPE_2__ dc_cdata; int * dc_tx_ltag; int dc_tx_lmap; TYPE_1__ dc_ldata; int * dc_rx_ltag; int dc_rx_lmap; int * dc_tx_mtag; int * dc_rx_mtag; int * dc_sparemap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,int ) ;

__attribute__((used)) static void
FUNC_4(struct dc_softc *VAR_2)
{
 int VAR_3;


 if (VAR_2->dc_rx_mtag != ((void*)0)) {
  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
   if (VAR_2->dc_cdata.dc_rx_map[VAR_3] != ((void*)0))
    FUNC_1(VAR_2->dc_rx_mtag,
        VAR_2->dc_cdata.dc_rx_map[VAR_3]);
  }
  if (VAR_2->dc_sparemap != ((void*)0))
   FUNC_1(VAR_2->dc_rx_mtag, VAR_2->dc_sparemap);
  FUNC_0(VAR_2->dc_rx_mtag);
 }


 if (VAR_2->dc_rx_mtag != ((void*)0)) {
  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
   if (VAR_2->dc_cdata.dc_tx_map[VAR_3] != ((void*)0))
    FUNC_1(VAR_2->dc_tx_mtag,
        VAR_2->dc_cdata.dc_tx_map[VAR_3]);
  }
  FUNC_0(VAR_2->dc_tx_mtag);
 }


 if (VAR_2->dc_rx_ltag) {
  if (VAR_2->dc_ldata.dc_rx_list_paddr != 0)
   FUNC_2(VAR_2->dc_rx_ltag, VAR_2->dc_rx_lmap);
  if (VAR_2->dc_ldata.dc_rx_list != ((void*)0))
   FUNC_3(VAR_2->dc_rx_ltag, VAR_2->dc_ldata.dc_rx_list,
       VAR_2->dc_rx_lmap);
  FUNC_0(VAR_2->dc_rx_ltag);
 }


 if (VAR_2->dc_tx_ltag) {
  if (VAR_2->dc_ldata.dc_tx_list_paddr != 0)
   FUNC_2(VAR_2->dc_tx_ltag, VAR_2->dc_tx_lmap);
  if (VAR_2->dc_ldata.dc_tx_list != ((void*)0))
   FUNC_3(VAR_2->dc_tx_ltag, VAR_2->dc_ldata.dc_tx_list,
       VAR_2->dc_tx_lmap);
  FUNC_0(VAR_2->dc_tx_ltag);
 }


 if (VAR_2->dc_stag) {
  if (VAR_2->dc_saddr != 0)
   FUNC_2(VAR_2->dc_stag, VAR_2->dc_smap);
  if (VAR_2->dc_cdata.dc_sbuf != ((void*)0))
   FUNC_3(VAR_2->dc_stag, VAR_2->dc_cdata.dc_sbuf,
       VAR_2->dc_smap);
  FUNC_0(VAR_2->dc_stag);
 }
}
