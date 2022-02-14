
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct rtwn_tx_ring {int data_dmat; int desc_map; int desc_dmat; scalar_t__ desc; struct rtwn_tx_data* tx_data; } ;
struct rtwn_tx_desc_common {int flags0; scalar_t__ pktlen; int offset; } ;
struct rtwn_tx_data {int map; } ;
struct rtwn_softc {int txdesc_len; int sc_dev; } ;
struct rtwn_pci_softc {struct rtwn_tx_ring* tx_ring; } ;
struct TYPE_2__ {int len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
typedef int bus_dma_segment_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct rtwn_softc*) ;
 int VAR_3 ;
 size_t VAR_4 ;
 struct rtwn_pci_softc* FUNC_2 (struct rtwn_softc*) ;
 int FUNC_3 (int ,int ,struct mbuf*,int *,int*,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,char*,int) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct rtwn_softc*,struct rtwn_tx_desc_common*) ;
 int FUNC_9 (struct rtwn_pci_softc*,struct rtwn_tx_desc_common*,int *) ;
 int FUNC_10 (struct rtwn_pci_softc*,struct rtwn_tx_desc_common*,int *) ;

__attribute__((used)) static int
FUNC_11(struct rtwn_softc *VAR_5, struct mbuf *VAR_6,
    uint8_t *VAR_7, int VAR_8)
{
 struct rtwn_pci_softc *VAR_9 = FUNC_2(VAR_5);
 struct rtwn_tx_ring *VAR_10;
 struct rtwn_tx_data *VAR_11;
 struct rtwn_tx_desc_common *VAR_12;
 bus_dma_segment_t VAR_13[1];
 int VAR_14, VAR_15, VAR_16;

 FUNC_1(VAR_5);

 FUNC_0(VAR_8 == 0 || VAR_8 == 1, ("bogus vap id %d\n", VAR_8));

 VAR_10 = &VAR_9->tx_ring[VAR_4];
 VAR_11 = &VAR_10->tx_data[VAR_8];
 VAR_12 = (struct rtwn_tx_desc_common *)
     ((uint8_t *)VAR_10->desc + VAR_8 * VAR_5->txdesc_len);

 FUNC_4(VAR_10->desc_dmat, VAR_10->desc_map,
     VAR_0);
 VAR_16 = !!(VAR_12->flags0 & VAR_3);
 VAR_15 = 0;
 if (!VAR_16 || VAR_12->pktlen != FUNC_7(VAR_6->m_pkthdr.len)) {
  if (!VAR_16) {

   FUNC_9(VAR_9, VAR_12, VAR_7);
   VAR_12->offset = VAR_5->txdesc_len;
  } else {

   FUNC_5(VAR_10->data_dmat, VAR_11->map);
  }

  VAR_15 = FUNC_3(VAR_10->data_dmat,
      VAR_11->map, VAR_6, VAR_13, &VAR_14, VAR_2);
  if (VAR_15 != 0) {
   FUNC_6(VAR_5->sc_dev,
       "can't map beacon (error %d)\n", VAR_15);
   VAR_12->flags0 &= ~VAR_3;
   goto end;
  }

  VAR_12->pktlen = FUNC_7(VAR_6->m_pkthdr.len);
  FUNC_10(VAR_9, VAR_12, VAR_13);
  VAR_12->flags0 |= VAR_3;
end:
  FUNC_4(VAR_10->desc_dmat, VAR_10->desc_map,
      VAR_1);
 }


 FUNC_8(VAR_5, VAR_12);

 FUNC_4(VAR_10->data_dmat, VAR_11->map, VAR_1);

 return (0);
}
