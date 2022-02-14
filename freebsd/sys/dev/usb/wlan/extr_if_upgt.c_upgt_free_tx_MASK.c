
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct upgt_softc {struct upgt_data* sc_tx_data; } ;
struct upgt_data {int * ni; int * buf; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct upgt_softc *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  struct upgt_data *VAR_3 = &VAR_1->sc_tx_data[VAR_2];

  if (VAR_3->ni != ((void*)0))
   FUNC_0(VAR_3->ni);

  VAR_3->buf = ((void*)0);
  VAR_3->ni = ((void*)0);
 }
}
