
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwn_tx_ring {int read; int cur; struct iwn_tx_data* data; } ;
struct iwn_tx_data {scalar_t__ remapped; int * m; } ;
struct iwn_softc {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct iwn_softc *VAR_1, struct iwn_tx_ring *VAR_2)
{
 int VAR_3;

 for (VAR_3 = VAR_2->read; VAR_3 != VAR_2->cur; VAR_3 = (VAR_3 + 1) % VAR_0) {
  struct iwn_tx_data *VAR_4 = &VAR_2->data[VAR_3];

  if (VAR_4->m != ((void*)0))
   break;

  VAR_4->remapped = 0;
 }

 VAR_2->read = VAR_3;
}
