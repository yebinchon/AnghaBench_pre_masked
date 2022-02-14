
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {int sc_flags; } ;
struct rtwn_rx_stat_pci {int rxdw0; } ;
struct rtwn_rx_ring {size_t cur; int desc_map; int desc_dmat; struct rtwn_rx_data* rx_data; struct rtwn_rx_stat_pci* desc; } ;
struct rtwn_rx_data {int paddr; } ;
struct rtwn_pci_softc {int pc_rx_buf; struct rtwn_rx_ring rx_ring; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct rtwn_pci_softc* FUNC_1 (struct rtwn_softc*) ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct rtwn_softc*,int ,int) ;
 int FUNC_5 (struct rtwn_pci_softc*,int) ;
 int FUNC_6 (struct rtwn_pci_softc*) ;
 int FUNC_7 (struct rtwn_pci_softc*) ;
 int FUNC_8 (struct rtwn_pci_softc*,struct rtwn_rx_stat_pci*,int ,int ,size_t) ;
 int FUNC_9 (struct rtwn_pci_softc*,int) ;

__attribute__((used)) static void
FUNC_10(struct rtwn_softc *VAR_5)
{
 struct rtwn_pci_softc *VAR_6 = FUNC_1(VAR_5);
 struct rtwn_rx_ring *VAR_7 = &VAR_6->rx_ring;
 struct rtwn_rx_stat_pci *VAR_8;
 struct rtwn_rx_data *VAR_9;
 int VAR_10;

 FUNC_2(VAR_7->desc_dmat, VAR_7->desc_map, VAR_0);

 for (;;) {
  VAR_8 = &VAR_7->desc[VAR_7->cur];
  VAR_9 = &VAR_7->rx_data[VAR_7->cur];

  if (FUNC_3(VAR_8->rxdw0) & VAR_4)
   break;

  VAR_10 = FUNC_6(VAR_6);

  switch (FUNC_4(VAR_5, VAR_6->pc_rx_buf, VAR_10)) {
  case 130:
   FUNC_7(VAR_6);
   break;
  case 128:
   FUNC_9(VAR_6, VAR_10);
   break;
  case 129:
   FUNC_5(VAR_6, VAR_10);
   break;
  default:

   FUNC_0(0, ("unknown Rx classification code"));
   break;
  }


  FUNC_8(VAR_6, VAR_8, VAR_9->paddr,
      VAR_1, VAR_7->cur);

  if (!(VAR_5->sc_flags & VAR_3))
   return;


  FUNC_2(VAR_7->desc_dmat, VAR_7->desc_map,
      VAR_0);

  if (FUNC_3(VAR_8->rxdw0) & VAR_4)
   VAR_7->cur = (VAR_7->cur + 1) % VAR_2;
 }
}
