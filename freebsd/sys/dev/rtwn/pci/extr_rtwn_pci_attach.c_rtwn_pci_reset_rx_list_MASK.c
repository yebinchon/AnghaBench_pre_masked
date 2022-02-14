
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {int dummy; } ;
struct rtwn_rx_ring {scalar_t__ cur; int * desc; struct rtwn_rx_data* rx_data; } ;
struct rtwn_rx_data {int paddr; } ;
struct rtwn_pci_softc {struct rtwn_rx_ring rx_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rtwn_pci_softc* FUNC_0 (struct rtwn_softc*) ;
 int FUNC_1 (struct rtwn_pci_softc*,int *,int ,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct rtwn_softc *VAR_2)
{
 struct rtwn_pci_softc *VAR_3 = FUNC_0(VAR_2);
 struct rtwn_rx_ring *VAR_4 = &VAR_3->rx_ring;
 struct rtwn_rx_data *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_5 = &VAR_4->rx_data[VAR_6];
  FUNC_1(VAR_3, &VAR_4->desc[VAR_6],
      VAR_5->paddr, VAR_0, VAR_6);
 }
 VAR_4->cur = 0;
}
