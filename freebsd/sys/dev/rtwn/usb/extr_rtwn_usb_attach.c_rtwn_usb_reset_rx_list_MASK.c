
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_usb_softc {scalar_t__ uc_rx_off; scalar_t__ uc_rx_stat_len; struct rtwn_data* uc_rx; } ;
struct rtwn_data {int * m; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct rtwn_usb_softc *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  struct rtwn_data *VAR_3 = &VAR_1->uc_rx[VAR_2];

  if (VAR_3->m != ((void*)0)) {
   FUNC_0(VAR_3->m);
   VAR_3->m = ((void*)0);
  }
 }
 VAR_1->uc_rx_stat_len = 0;
 VAR_1->uc_rx_off = 0;
}
