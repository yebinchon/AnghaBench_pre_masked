
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef scalar_t__ uint16_t ;
struct tsec_softc {size_t tx_idx_head; struct tsec_desc* tsec_tx_vaddr; int tsec_tx_mtag; struct tsec_bufmap* tx_bufmap; } ;
struct tsec_desc {scalar_t__ flags; int bufptr; int length; } ;
struct tsec_bufmap {struct mbuf* mbuf; int map; } ;
struct mbuf {int dummy; } ;
struct ifnet {int dummy; } ;
struct TYPE_3__ {int ds_addr; int ds_len; } ;
typedef TYPE_1__ bus_dma_segment_t ;


 int FUNC_0 (struct ifnet*,struct mbuf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct tsec_softc*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ,int ,struct mbuf*,TYPE_1__*,int*,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 struct mbuf* FUNC_4 (struct mbuf*,int ) ;
 int FUNC_5 (struct mbuf*) ;
 int FUNC_6 () ;

__attribute__((used)) static void
FUNC_7(struct ifnet *VAR_12, struct tsec_softc *VAR_13, struct mbuf *VAR_14,
    uint16_t VAR_15, int *VAR_16)
{
 bus_dma_segment_t VAR_17[VAR_10];
 int VAR_18, VAR_19, VAR_20;
 struct tsec_bufmap *VAR_21;
 uint32_t VAR_22;
 uint16_t VAR_23;

 FUNC_1(VAR_13);

 VAR_22 = VAR_13->tx_idx_head;
 VAR_21 = &VAR_13->tx_bufmap[VAR_22];


 VAR_18 = FUNC_2(VAR_13->tsec_tx_mtag, VAR_21->map, VAR_14,
     VAR_17, &VAR_20, VAR_1);
 if (VAR_18 == VAR_2) {

  struct mbuf *VAR_24 = FUNC_4(VAR_14, VAR_3);

  if (VAR_24 == ((void*)0)) {
   FUNC_5(VAR_14);
   return;
  }
  VAR_14 = VAR_24;
  VAR_18 = FUNC_2(VAR_13->tsec_tx_mtag,
      VAR_21->map, VAR_14, VAR_17, &VAR_20, VAR_1);
 }
 if (VAR_18 != 0) {

  FUNC_5(VAR_14);
  return;
 }

 FUNC_3(VAR_13->tsec_tx_mtag, VAR_21->map,
     VAR_0);
 VAR_21->mbuf = VAR_14;





 VAR_22 = (VAR_22 + (uint32_t)VAR_20) & (VAR_11 - 1);
 VAR_13->tx_idx_head = VAR_22;
 VAR_23 = VAR_5 | VAR_4 | VAR_6 | VAR_7;
 for (VAR_19 = VAR_20 - 1; VAR_19 >= 0; VAR_19--) {
  struct tsec_desc *VAR_25;

  VAR_22 = (VAR_22 - 1) & (VAR_11 - 1);
  VAR_25 = &VAR_13->tsec_tx_vaddr[VAR_22];
  VAR_25->length = VAR_17[VAR_19].ds_len;
  VAR_25->bufptr = VAR_17[VAR_19].ds_addr;

  if (VAR_19 == 0) {
   FUNC_6();

   if (VAR_15 != 0)
    VAR_23 |= VAR_8;
  }
  VAR_25->flags = (VAR_22 == (VAR_11 - 1) ?
      VAR_9 : 0) | VAR_23;

  VAR_23 &= ~(VAR_5 | VAR_4);
 }

 FUNC_0(VAR_12, VAR_14);
 *VAR_16 = 1;
}
