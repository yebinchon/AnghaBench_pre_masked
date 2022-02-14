
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct iwi_tx_ring {scalar_t__ next; int queued; int data_dmat; struct iwi_tx_data* data; int csr_ridx; } ;
struct iwi_tx_data {int * m; int * ni; int map; } ;
struct iwi_softc {scalar_t__ sc_softled; scalar_t__ sc_tx_timer; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct iwi_softc*,int ) ;
 int FUNC_1 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (struct iwi_softc*,int ) ;
 int FUNC_6 (struct iwi_softc*) ;

__attribute__((used)) static void
FUNC_7(struct iwi_softc *VAR_3, struct iwi_tx_ring *VAR_4)
{
 struct iwi_tx_data *VAR_5;
 uint32_t VAR_6;

 VAR_6 = FUNC_0(VAR_3, VAR_4->csr_ridx);

 while (VAR_4->next != VAR_6) {
  VAR_5 = &VAR_4->data[VAR_4->next];
  FUNC_1(15, ("tx done idx=%u\n", VAR_4->next));
  FUNC_2(VAR_4->data_dmat, VAR_5->map,
      VAR_0);
  FUNC_3(VAR_4->data_dmat, VAR_5->map);
  FUNC_4(VAR_5->ni, VAR_5->m, 0);
  VAR_5->ni = ((void*)0);
  VAR_5->m = ((void*)0);
  VAR_4->queued--;
  VAR_4->next = (VAR_4->next + 1) % VAR_2;
 }
 VAR_3->sc_tx_timer = 0;
 if (VAR_3->sc_softled)
  FUNC_5(VAR_3, VAR_1);
 FUNC_6(VAR_3);
}
