
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct upgt_softc {struct upgt_data* sc_rx_data; } ;
struct upgt_data {int * ni; int * buf; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct upgt_softc *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  struct upgt_data *VAR_3 = &VAR_1->sc_rx_data[VAR_2];

  VAR_3->buf = ((void*)0);
  VAR_3->ni = ((void*)0);
 }
}
